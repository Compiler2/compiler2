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
