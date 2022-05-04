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
from model_gnn import GNNEncoder

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

    dgl_graph = fast_networkx_to_dgl(graph)
    return dgl_graph


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





import dgl
import numpy as np
import torch
import torch.nn as nn


class GNNEncoder(nn.Module):
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
        super(GNNEncoder, self).__init__()

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

        if self.use_node_embedding:
            self.node_embedding = nn.Embedding(node_vocab_size, node_hidden_size)

        embed_dim = self.node_hidden_size
        if self.gnn_type == "GatedGraphConv":
            self.ggcnn = nn.ModuleList(
                [
                    dgl.nn.pytorch.conv.GatedGraphConv(
                        in_feats=self.node_hidden_size,
                        out_feats=self.node_hidden_size,
                        n_steps=self.n_steps,
                        n_etypes=self.n_etypes,
                    )
                    for _ in range(self.n_message_passes)
                ]
            )
            if self.concat_intermediate:
                embed_dim = (self.n_message_passes + 1) * embed_dim
        else:
            raise NotImplementedError("")

        self.action_predictor = nn.Sequential(
            nn.Linear(embed_dim, self.node_hidden_size),
            nn.ReLU(),
            nn.Linear(self.node_hidden_size, self.action_size),
        )

        self.mse_loss = nn.MSELoss()

    def forward(self, g):
        # pdb.set_trace()
        with g.local_scope():
            self.featurize_nodes(g)

            res = g.ndata["feat"]            

            if self.concat_intermediate:
                intermediate = [dgl.mean_nodes(g, "feat")]
            if self.gnn_type == "GatedGraphConv":
                for i, layer in enumerate(self.ggcnn):
                    res = layer(g, res, g.edata["flow"])
                    if self.concat_intermediate:
                        g.ndata["feat"] = res
                        intermediate.append(dgl.mean_nodes(g, "feat"))
            g.ndata["feat"] = res

            if self.concat_intermediate and self.gnn_type == "GatedGraphConv":
                graph_agg = torch.cat(intermediate, axis=1)
            else:
                graph_agg = dgl.mean_nodes(g, "feat")
        action_tensor = self.action_predictor(graph_agg)
        print(action_tensor, graph_agg)
        return action_tensor

    def get_loss(self, g, labels, eps=0.0):
        """
        Loss function, scales the reward to the same loss function from
        R2D2 (https://openreview.net/pdf?id=r1lyTjAqYX). It also allows
        us to see the difference between the unscaled reward and its
        associated prediction
        """
        preds, _ = self.forward(g)
        preds = preds.squeeze(1)
        scaled_labels = rescale(labels, eps=eps)
        inv_scale_pred = inv_rescale(preds, eps=eps)

        return (
            self.mse_loss(preds, scaled_labels),
            self.mse_loss(inv_scale_pred, labels),
            ((labels - inv_scale_pred).abs() / labels).mean(),
        )

    def featurize_nodes(self, g):
        # This is very Co,A),1)mpilerGym specific, can be rewritten for other tasks
        features = []
        if self.use_node_embedding:
            features.append(self.node_embedding(g.ndata["text_idx"]))

        g.ndata["feat"] = torch.cat(features)

    def get_edge_embedding(self, g):
        # TODO: this should can be for positional embeddings
        pass


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

model = GNNEncoder(
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

