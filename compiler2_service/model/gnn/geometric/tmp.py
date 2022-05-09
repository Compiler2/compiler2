from pathlib import Path
import compiler_gym
import pickle
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
from torch.utils.data import DataLoader, Dataset

import random
import os
import sys
import numpy as np
import pandas as pd
from tqdm import tqdm
from matplotlib import pyplot as plt
import pdb

from compiler_gym_dataset import CompilerGymDataset
from model_gnn import Net

device = 'cpu'

root_path = os.environ.get("COMPILER2_ROOT")
db_path = Path(root_path + "/results/random-compiler2-v0/2022-05-03/12-44-11/1569317/results_0.pkl")

print(db_path)
print(f"Is file good = {db_path.is_file()}")

env = compiler_gym.make("llvm-v0")
print(f'Number of actions = {len(env.action_space.flags)}')



columns = ["BenchmarkName", "State", "NextState", "Action", "CommandLine", "Reward"]
# df = pd.read_csv(db_path, names=columns, header=1)
with open(db_path, 'rb') as f:
    df = pickle.load(f)[:10]

df.loc[:, 'StatePerf'] = df['State'].map(lambda x: x[0])
df.loc[:, 'StatePrograml'] = df['State'].map(lambda x: x[1])

df.loc[:, 'NextStatePerf'] = df['NextState'].map(lambda x: x[0])
df.loc[:, 'NextStatePrograml'] = df['NextState'].map(lambda x: x[1])


state_min = np.min(np.stack(df['StatePerf']),0)
state_max = np.max(np.stack(df['StatePerf']),0)
df['StatePerf'] = df['StatePerf'].apply(lambda x: (x-state_min)/(state_max-state_min+1e-9))
df['StatePerf'] = df['StatePerf'].apply(lambda x:torch.tensor(x).float())

state_min = np.min(np.stack(df['NextStatePerf']),0)
state_max = np.max(np.stack(df['NextStatePerf']),0)
df['NextState'] = df['NextStatePerf'].apply(lambda x: (x-state_min)/(state_max-state_min+1e-9))
df['NextStatePerf'] = df['NextStatePerf'].apply(lambda x:torch.tensor(x).float())


action_kinds = pd.Categorical(df['Action'], categories=env.action_space.flags)
action_one_hot = pd.get_dummies(action_kinds)

df = df.dropna()
df['Action'] = action_one_hot.values.tolist()
df['Action'] = df['Action'].apply(lambda x: torch.tensor(x).float())
df['Reward'] = df['Reward'].apply(lambda x: torch.tensor(x).float())

df.head()









###############################################################################################
# compiler_gym_dataset.py
###############################################################################################


import pdb

import dgl
import numpy as np
import torch
from dgl.data import DGLDataset
from torchvision import transforms

class CompilerGymDataset(DGLDataset):
    def __init__(
        self,
        df,
        filepath=None,
        num_workers=64,
        max_len_nodes=50000,
        input_key="dgl_graph",
        output_key="reward",
        table_name="Observations",
        train_prop=0.8,
        device='cuda',
        dataset_size=sys.maxsize,
    ):
        """
        The class loads a CompilerGym Database which contains 'States' and 'Observations'
        as tables. The tables contain the necessary information for doing supervised learning.
        This class handles all of the underlying structure including differentiating between
        training and dev, creating the 'dgl graph', and colating individual graphs into a larger
        graph, which is used for training.
        Inputs:
            - graphs_data: pandas.DataFrame with StatePrograml, NextStatePrograml NetworkX graphs, Reward
            - filepath: the path to the dataset
            - num_wokers: number of workers used to fetch the instances
            - max_len_nodes: maximum number of nodes in the grpah
            - input_key: the key that we save to the input observation
            - output_key: the key that we want to generate supervised loss off of
            - table_name: the table name in the database that has the primary keys
            - train_prop: proportion of training instances
            - vocab: the vocab mapping text to integer indices of a embedding table
            - dataset_size: size of the dataset we want to use, default -1 means use the whole datbase
        """
        self.data = df.loc[:dataset_size]
        self.filepath = filepath
        self.num_workers = num_workers
        self.max_len_nodes = max_len_nodes

        self.graph_key = input_key
        self.output_key = output_key
        self.table_name = table_name

        self.train_prop = train_prop
        self.dataset_size = dataset_size

        self.distribution_type = "train"
        self.device = device
        self.transform = pickle.dumps #transforms.Compose([transforms.ToTensor()])  # you can add to the list all the transformations you need. 
        self.transform_back = pickle.loads


        print("Init")
        super().__init__(name="CopmilerGym")

        

    def process(self):
        """
        Called during initialization of the class and initializes the underlying
        functions needed for supervised learning
        """
        print("Create vocabulary")
        inst = extract_instructions(graphs=self.data['StatePrograml']) + extract_instructions(graphs=self.data['NextStatePrograml'])
        self.vocab = create_vocab(inst_list=inst)    
        self.vocab = {"text": self.vocab}


    def __getitem__(self, i):
        return self.get_instance(i)

    def get_instance(self, i):
        """
        Given an index (i), determined by the length of the current dataset ('train', 'dev')
        get the desired instance
        """
        d = {   'S': process_networkx_graph(self.data['StatePrograml'][i], self.vocab), \
                'A': self.data['Action'][i], \
                'R': self.data['Reward'][i], \
                'S_': process_networkx_graph(self.data['NextStatePrograml'][i], self.vocab)
                }

        return d
        # return {'S':self.transform(process_networkx_graph(self.data['StatePrograml'][i], self.vocab).to(self.device)), \
        #        'A': self.transform(self.data['Action'][i].to(self.device)), \
        #        'R': self.transform(self.data['Reward'][i].to(self.device)), \
        #        'S_': self.transform(process_networkx_graph(self.data['NextStatePrograml'][i], self.vocab).to(self.device))}

    def __len__(self):    
        return self.data.shape[0]

    def collate_fn(self, samples):
        samples = [sample for sample in samples if sample is not None]        
        # Takes a list of graphs and makes it into one big graph that dgl operates on
        if samples:
            S = [sample['S'] for sample in samples]
            A = [sample['A'] for sample in samples]
            R = [sample['R'] for sample in samples]
            S_ = [sample['S_'] for sample in samples]
                                
        return S, A, R, S_


        

def extract_instructions(graphs):
    inst_list = []
    for graph in graphs:
        for i in graph.nodes:
            if 'features' in graph.nodes[i]:
                if 'full_text' in graph.nodes[i]['features']:
                    inst_list.append(graph.nodes[i]['features']['full_text'][0])
    return inst_list


def create_vocab(inst_list):        
    vocab = {}
    cnt = 0    
    for inst in set(inst_list):
        vocab[inst] = cnt
        cnt += 1 

    return vocab



def process_networkx_graph(
    graph,
    vocab,
    node_feature_list=["text", "type"],
    edge_feature_list=["flow", "position"],
):
    """
    Handles all of the requirements of taking a networkx graph and converting it into a
    dgl graph
    Inputs:
        - graph: the networkx graph
        - vocab: the vocabulary, a mapping from word to index.
        - node_feature_list: a list of textual features from the networkx node that we want to make sure
            are featurizable into a vector.
        - edge_feature_list: a list of textual features from the networkx edges that we want to make sure
            are featurizable into a vector.
    """
    update_graph_with_vocab(graph.nodes, node_feature_list, vocab)
    update_graph_with_vocab(graph.edges, edge_feature_list, vocab)

    try:
        for i in graph.nodes: 
            if 'text' in graph.nodes[i]:
                del graph.nodes[i]['text']
            if 'features' in graph.nodes[i]:    
                del graph.nodes[i]['features']
    except KeyError:
        print('Deleting text features failed')
        pdb.set_trace()
    # dgl_graph = fast_networkx_to_dgl(graph)
    return graph


def fast_networkx_to_dgl(
    graph, node_attrs=["text_idx", "type"], edge_attrs=["flow", "position"]
    # graph, node_attrs=["type"], edge_attrs=["flow", "position"]
):
    """
    Takes a networkx graph and its given node attributes and edge attributes
    and converts it corresponding dgl graph
    Inputs:features_hpcrun
        - graph: the networkx graph
        - node_attrs: node attributes to convert
        - edge_attrs: edge attributes to convert
    """
    edges = [edge for edge in graph.edges()]
    dgl_graph = dgl.graph(edges, num_nodes=graph.number_of_nodes())

    for feat in edge_attrs:
        edge_assigns = torch.tensor(
            [val[-1] for val in graph.edges(data=feat)], dtype=torch.int64
        )
        dgl_graph.edata[feat] = edge_assigns

    for feat in node_attrs:
        node_assigns = torch.tensor(
            [val[-1] for val in graph.nodes(data=feat)], dtype=torch.int64
        )
        dgl_graph.ndata[feat] = node_assigns

    return dgl_graph


def update_graph_with_vocab(graph_fn, features, vocab):
    """
    Given a networkx attribute (function) and features update it with a vocab if possible.
    If it cannot be updated, the features should already be numerical features.
    Inputs:
        - graph_fn: a networkx graph function (describing nodes or edges)
        - features: the feature from the function that should be updated
        - vocab: A dict mapping text to int
    """
    for feature_name in features:
        curr_vocab = None
        if feature_name in vocab:
            curr_vocab = vocab[feature_name]
        for graph_item in graph_fn(data=feature_name):
            feature = graph_item[-1]
            idx = graph_item[0]

            if feature_name in vocab:
                # Lookup vocab item, or map to out-of-vocab index if item is not
                # found.
                vocab_index = curr_vocab.get(feature, len(curr_vocab))
                update_networkx_feature(
                    graph_fn, idx, f"{feature_name}_idx", vocab_index
                )
            else:
                assert isinstance(
                    feature, int
                ), f"{(feature_name, feature)} is not an int"


def update_networkx_feature(graph_fn, idx, feature_name, feature):
    graph_fn[idx][feature_name] = feature



###############################################################################################
# model_gnn.py
###############################################################################################

import numpy as np
import pdb

import torch
import torch.nn as nn
from torch_geometric.nn import MessagePassing
from torch_geometric.nn import TopKPooling
from torch_geometric.nn import global_mean_pool as gap, global_max_pool as gmp
from torch_geometric.utils import remove_self_loops, add_self_loops

embed_dim = 128
from torch_geometric.nn import TopKPooling
from torch_geometric.nn import global_mean_pool as gap, global_max_pool as gmp
import torch.nn.functional as F


from torch_geometric.nn import GCNConv
from torch_geometric.utils.convert import from_networkx, to_networkx

class SAGEConv(MessagePassing):
    def __init__(self, in_channels, out_channels):
        super(SAGEConv, self).__init__(aggr='max') #  "Max" aggregation.
        self.lin = nn.Linear(in_channels, out_channels)
        self.act = nn.ReLU()
        self.update_lin = nn.Linear(in_channels + out_channels, in_channels, bias=False)
        self.update_act = nn.ReLU()
        
    def forward(self, x, edge_index):
        # x has shape [N, in_channels]
        # edge_index has shape [2, E]
        
        
        edge_index, _ = remove_self_loops(edge_index)
        edge_index, _ = add_self_loops(edge_index, num_nodes=x.size(0))
        
        
        return self.propagate(edge_index, size=(x.size(0), x.size(0)), x=x)

    def message(self, x_j):
        # x_j has shape [E, in_channels]

        x_j = self.lin(x_j)
        x_j = self.act(x_j)
        
        return x_j

    def update(self, aggr_out, x):
        # aggr_out has shape [N, out_channels]


        new_embedding = torch.cat([aggr_out, x], dim=1)
        
        new_embedding = self.update_lin(new_embedding)
        new_embedding = self.update_act(new_embedding)
        
        return new_embedding




class Net(nn.Module):
    def __init__(
        self,
        node_vocab_size,
        node_hidden_size,
        use_node_embedding=True,
        n_steps=1,
        n_etypes=3,
        n_message_passes=0,
        action_size=124,
        gnn_type="GatedGraphConv",
        heads=None,
        feat_drop=0.0,
        concat_intermediate=True,
    ):
        super(Net, self).__init__()

        self.use_node_embedding = use_node_embedding
        self.node_hidden_size = node_hidden_size
        self.n_steps = n_steps
        self.n_etypes = n_etypes
        self.n_message_passes = n_message_passes
        self.action_size = action_size
        self.gnn_type = gnn_type
        self.heads = heads
        self.feat_drop = feat_drop
        self.concat_intermediate = concat_intermediate


        embed_dim = self.node_hidden_size
        embed_dim = 4

        self.conv1 = GCNConv(embed_dim, 128)
        self.pool1 = TopKPooling(128, ratio=0.8)
        self.conv2 = GCNConv(128, 128)
        self.pool2 = TopKPooling(128, ratio=0.8)
        self.conv3 = GCNConv(128, 128)
        self.pool3 = TopKPooling(128, ratio=0.8)
        self.item_embedding = nn.Embedding(node_vocab_size, node_hidden_size)
        self.lin1 = nn.Linear(256, 128)
        self.lin2 = nn.Linear(128, 64)
        self.lin3 = nn.Linear(64, self.action_size)
        self.bn1 = nn.BatchNorm1d(128)
        self.bn2 = nn.BatchNorm1d(64)
        self.act1 = nn.ReLU()
        self.act2 = nn.ReLU()   

        self.mse_loss = nn.MSELoss()    
     
  
    def forward(self, data):
        features = []
            
        data_pyg = from_networkx(data, group_node_attrs=['block', 'function', 'type', 'text_idx'])

        x, edge_index, batch = data_pyg.x.float(), data_pyg.edge_index, data_pyg.batch
        # x = self.item_embedding(x) 
        # x = x.squeeze(1)        

        x = F.relu(self.conv1(x, edge_index))

        x, edge_index, _, batch, _, _ = self.pool1(x, edge_index, None, batch)
        x1 = torch.cat([gmp(x, batch), gap(x, batch)], dim=1)

        x = F.relu(self.conv2(x, edge_index))
     
        x, edge_index, _, batch, _, _ = self.pool2(x, edge_index, None, batch)
        x2 = torch.cat([gmp(x, batch), gap(x, batch)], dim=1)

        x = F.relu(self.conv3(x, edge_index))

        x, edge_index, _, batch, _, _ = self.pool3(x, edge_index, None, batch)
        x3 = torch.cat([gmp(x, batch), gap(x, batch)], dim=1)

        x = x1 + x2 + x3

        x = self.lin1(x)
        x = self.act1(x)
        x = self.lin2(x)
        x = self.act2(x)      
        x = F.dropout(x, p=0.5, training=self.training)

        x = torch.sigmoid(self.lin3(x)).squeeze(1)

        return x

    def featurize_nodes(self, g):
        # This is very Co,A),1)mpilerGym specific, can be rewritten for other tasks
        features = []
        if self.use_node_embedding:
            features.append(self.node_embedding(g.ndata["text_idx"]))

        g.ndata["feat"] = torch.cat(features)
        



def rescale(x, eps=1e-3):
    sign = get_sign(x)
    x_abs = get_abs(x)
    if isinstance(x, np.ndarray):
        return sign * (np.sqrt(x_abs + 1) - 1) + eps * x
    else:
        return sign * ((x_abs + 1).sqrt() - 1) + eps * x


def inv_rescale(x, eps=1e-3):
    sign = get_sign(x)
    x_abs = get_abs(x)
    if eps == 0:
        return sign * (x * x + 2.0 * x_abs)
    else:
        return sign * (
            (((1.0 + 4.0 * eps * (x_abs + 1.0 + eps)).sqrt() - 1.0) / (2.0 * eps)).pow(
                2
            )
            - 1.0
        )


def get_sign(x):
    if isinstance(x, np.ndarray):
        return np.sign(x)
    elif isinstance(x, torch.Tensor):
        return x.sign()
    else:
        raise NotImplementedError(f"Data type: {type(x)} is not implemented")


def get_abs(x):
    if isinstance(x, np.ndarray):
        return np.abs(x)
    elif isinstance(x, torch.Tensor):
        return x.abs()
    else:
        raise NotImplementedError(f"Data type: {type(x)} is not implemented")




experience_dataset = CompilerGymDataset(df, device=device)
experience_dataset.data.head()

model = Net(
    # Add one to the vocab size to accomodate for the out-of-vocab element.
    node_vocab_size=len(experience_dataset.vocab['text']) + 1,
    node_hidden_size=64,
)


import dgl
import numpy as np
import torch
from dgl.data import DGLDataset




test_size = len(df) // 5
train_size = len(df) - test_size

print(f'Dataset training validation = {test_size}, {train_size}')
train_set, test_set = torch.utils.data.random_split(experience_dataset, [train_size, test_size])

batch_size = 1
trainLoad = DataLoader(train_set,batch_size=batch_size,shuffle=True, collate_fn=experience_dataset.collate_fn,)
testLoad = DataLoader(test_set,batch_size=batch_size,shuffle=True, collate_fn=experience_dataset.collate_fn,)
policy_net = model.to(device)
target_net = model.to(device)

target_net.load_state_dict(policy_net.state_dict())
target_net.eval()
criterion = nn.SmoothL1Loss()
optimizer = optim.Adam(policy_net.parameters())
train_losses = []
test_losses = []
num_epochs = 1
test_every = 5
gamma = 0.9


for epoch in tqdm(range(num_epochs)):
    # loop_inner = tqdm(total=train_size//batch_size,position=0,leave=False)
    policy_net.train()
    for S, A, R, S_ in trainLoad:
        # S, A, R, S_ = data

        for S, A, R, S_ in zip(S, A, R, S_):
            print(epoch)
            print(S)

            r = torch.sum(torch.mul(policy_net(S),A), 1)
            r_hat = 1 + torch.max(target_net(S_), 1).values * gamma
                    
            loss = criterion(r,r_hat)
            print(loss)
            pdb.set_trace()

            optimizer.zero_grad()
            loss.backward()
            optimizer.step()
            
            train_losses.append(loss.item())
        #     loop_inner.set_description('epoch:{}, loss:{:.4f}'.format(epoch, loss.item()))
        #     loop_inner.update(1)
        # loop_inner.close()

        if epoch % test_every == 0:
            with torch.no_grad():
                policy_net.eval()
                for S,A,R,S_ in trainLoad:
                    for S, A, R, S_ in zip(S, A, R, S_):

                        r = torch.sum(torch.mul(policy_net(S),A),1)
                        r_hat = R + torch.max(target_net(S_),1).values * gamma

                        loss = criterion(r,r_hat)
                        test_losses.append(loss.item())
        target_net.load_state_dict(policy_net.state_dict())

