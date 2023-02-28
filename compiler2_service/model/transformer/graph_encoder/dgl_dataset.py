# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

from scipy.sparse.construct import random
from torch_geometric.data import Dataset
from dgl.data import DGLDataset
from sklearn.model_selection import train_test_split
from typing import List
import dgl
from torch_geometric.data import Data as PYGGraph
import torch
import numpy as np
from typing import Optional, Tuple

# from ..wrapper import convert_to_single_emb

from compiler2_service.paths import COMPILER2_ROOT

import pyximport
pyximport.install(setup_args={"include_dirs": np.get_include()})

import algos
from copy import copy


SOS_token = 0
EOS_token = 1


@torch.jit.script
def convert_to_single_emb(x, offset: int = 512):
    feature_num = x.size(1) if len(x.size()) > 1 else 1
    feature_offset = 1 + torch.arange(0, feature_num * offset, offset, dtype=torch.long)
    x = x + feature_offset
    return x


def pad_1d_unsqueeze(x, padlen):
    x = x + 1  # pad id = 0
    xlen = x.size(0)
    if xlen < padlen:
        new_x = x.new_zeros([padlen], dtype=x.dtype)
        new_x[:xlen] = x
        x = new_x
    return x.unsqueeze(0)


def pad_2d_unsqueeze(x, padlen):
    x = x + 1  # pad id = 0
    xlen, xdim = x.size()
    if xlen < padlen:
        new_x = x.new_zeros([padlen, xdim], dtype=x.dtype)
        new_x[:xlen, :] = x
        x = new_x
    return x.unsqueeze(0)


def pad_attn_bias_unsqueeze(x, padlen):
    xlen = x.size(0)
    if xlen < padlen:
        new_x = x.new_zeros([padlen, padlen], dtype=x.dtype).fill_(float("-inf"))
        new_x[:xlen, :xlen] = x
        new_x[xlen:, :xlen] = 0
        x = new_x
    return x.unsqueeze(0)


def pad_edge_type_unsqueeze(x, padlen):
    xlen = x.size(0)
    if xlen < padlen:
        new_x = x.new_zeros([padlen, padlen, x.size(-1)], dtype=x.dtype)
        new_x[:xlen, :xlen, :] = x
        x = new_x
    return x.unsqueeze(0)


def pad_spatial_pos_unsqueeze(x, padlen):
    x = x + 1
    xlen = x.size(0)
    if xlen < padlen:
        new_x = x.new_zeros([padlen, padlen], dtype=x.dtype)
        new_x[:xlen, :xlen] = x
        x = new_x
    return x.unsqueeze(0)


def pad_3d_unsqueeze(x, padlen1, padlen2, padlen3):
    x = x + 1
    xlen1, xlen2, xlen3, xlen4 = x.size()
    if xlen1 < padlen1 or xlen2 < padlen2 or xlen3 < padlen3:
        new_x = x.new_zeros([padlen1, padlen2, padlen3, xlen4], dtype=x.dtype)
        new_x[:xlen1, :xlen2, :xlen3, :] = x
        x = new_x
    return x.unsqueeze(0)


def collator(items, multi_hop_max_dist=20, spatial_pos_max=20, device='cpu'):
    # items = [item for item in items if item is not None and item.x.size(0) <= max_node]
    items = [
        (
            item.idx,
            item.attn_bias,
            item.attn_edge_type,
            item.spatial_pos,
            item.in_degree,
            item.out_degree,
            item.x,
            item.edge_input[:, :, :multi_hop_max_dist, :],
            item.y,
        )
        for item in items
    ]
    (
        idxs,
        attn_biases,
        attn_edge_types,
        spatial_poses,
        in_degrees,
        out_degrees,
        xs,
        edge_inputs,
        ys,
    ) = zip(*items)

    for idx, _ in enumerate(attn_biases):
        attn_biases[idx][1:, 1:][spatial_poses[idx] >= spatial_pos_max] = float("-inf")
    max_node_num = max(i.size(0) for i in xs)
    max_dist = max(i.size(-2) for i in edge_inputs)
    y = torch.cat(ys)
    x = torch.cat([pad_2d_unsqueeze(i, max_node_num) for i in xs])
    edge_input = torch.cat(
        [pad_3d_unsqueeze(i, max_node_num, max_node_num, max_dist) for i in edge_inputs]
    )
    attn_bias = torch.cat(
        [pad_attn_bias_unsqueeze(i, max_node_num + 1) for i in attn_biases]
    )
    attn_edge_type = torch.cat(
        [pad_edge_type_unsqueeze(i, max_node_num) for i in attn_edge_types]
    )
    spatial_pos = torch.cat(
        [pad_spatial_pos_unsqueeze(i, max_node_num) for i in spatial_poses]
    )
    in_degree = torch.cat([pad_1d_unsqueeze(i, max_node_num) for i in in_degrees])

    return dict(
        idx=torch.LongTensor(idxs).to(device),
        attn_bias=attn_bias.to(device),
        attn_edge_type=attn_edge_type.to(device),
        spatial_pos=spatial_pos.to(device),
        in_degree=in_degree.to(device),
        out_degree=in_degree.to(device),  # for undirected graph
        x=x.to(device),
        edge_input=edge_input.to(device),
        y=y.to(device),
    )



class GraphormerDGLDataset(Dataset):
    def __init__(self,
        graphs=None,
        labels=None,
        device='cpu',
        seed: int = 0,
        train_idx=None,
        valid_idx=None,
        test_idx=None,
    ):
        if graphs is None:
            self.graphs, self.labels = self.random_dataset(32)
        elif labels is None:
            self.graphs = graphs
            self.labels = [[0, 0]] * len(graphs)
        else:
            self.graphs, self.labels = graphs, labels
        
        self.labels = torch.tensor(self.labels, device=device)
        self.tokens = self.labels.size(1)


        self.device = device
        self.num_classes = torch.max(self.labels).item() + 1
        self.max_nodes = max([g.num_nodes() for g in self.graphs]) 

        num_data = len(self.graphs)
        self.seed = seed
        if train_idx is None:
            train_valid_idx, test_idx = train_test_split(
                np.arange(num_data), test_size=max(1, num_data // 10), random_state=seed
            )
            train_idx, valid_idx = train_test_split(
                train_valid_idx, test_size=max(1, num_data // 5), random_state=seed
            )
        self.train_idx = train_idx
        self.valid_idx = valid_idx
        self.test_idx = test_idx
        self.__indices__ = None
        self.train_data = self.index_select(train_idx)
        self.valid_data = self.index_select(valid_idx)
        self.test_data = self.index_select(test_idx)

    def index_select(self, indices: List[int]):
        subset = copy(self)
        subset.__indices__ = indices
        subset.train_idx = None
        subset.valid_idx = None
        subset.test_idx = None
        subset.train_data = None
        subset.valid_data = None
        subset.test_data = None
        return subset


    def get_train(self, size=None):
        return self.collate(dataset=self.train_data, size=size)

    def get_valid(self, size=None):
        return self.collate(dataset=self.valid_data, size=size)

    def get_test(self, size=None):
        return self.collate(dataset=self.test_data, size=size)

    def collate(self, dataset, size=None):
        if size == None:
            size = len(dataset)

        xy = self.remove_large_graphs(dataset, max_node=512)[:size]
        try:
            x, y = zip(*xy)
        except:
            breakpoint()
            
        y = torch.stack(y)
        return {'x':collator(x, device=self.device), 'y':y.clone().detach().to(self.device)}

    def remove_large_graphs(self, dataset, max_node=512):
        items = []
        for i in range(len(dataset)):
            x, y = dataset[i]
            if x['x'].size(0) <= max_node:
                items.append([x, y])
        
        return items

    def __getitem__(self, idx):
        if isinstance(idx, int):
            if self.__indices__ is not None:
                idx = self.__indices__[idx]
            graph = self.graphs[idx]
            # y must be one hot

            y = self.labels[idx] # TODO: potential problem since we are taking only first flag
            y_onehot = torch.nn.functional.one_hot(y, num_classes=self.num_classes) # predict first opt in label

            x = self.__preprocess_dgl_graph(graph, y_onehot, idx)
            # breakpoint()
            return x, y
        else:
            raise TypeError("index to a GraphormerDGLDataset can only be an integer.")

    def __len__(self) -> int:
        return len(self.graphs) if self.__indices__ is None else len(self.__indices__)



    def __extract_edge_and_node_features(
        self, graph_data: dgl.DGLGraph
    ) -> Tuple[
        Optional[torch.Tensor],
        Optional[torch.Tensor],
        Optional[torch.Tensor],
        Optional[torch.Tensor],
    ]:
        def extract_tensor_from_node_or_edge_data(
            feature_dict: dict, num_nodes_or_edges
        ):
            float_feature_list = []
            int_feature_list = []

            def extract_tensor_from_dict(feature: torch.Tensor):
                if feature.dtype == torch.int32 or feature.dtype == torch.long:
                    int_feature_list.append(feature.unsqueeze(1))
                elif feature.dtype == torch.float32 or feature.dtype == torch.float64:
                    float_feature_list.append(feature.unsqueeze(1))

            for feature_or_dict in feature_dict:
                if isinstance(feature_or_dict, torch.Tensor):
                    extract_tensor_from_dict(feature_or_dict)
                elif isinstance(feature_or_dict, dict):
                    for feature in feature_or_dict:
                        extract_tensor_from_dict(feature)
            int_feature_tensor = (
                torch.from_numpy(np.zeros(shape=[num_nodes_or_edges, 1])).long()
                if len(int_feature_list) == 0
                else torch.cat(int_feature_list)
            )
            float_feature_tensor = (
                None if len(float_feature_list) == 0 else torch.cat(float_feature_list)
            )
            return int_feature_tensor, float_feature_tensor

        node_int_feature, node_float_feature = extract_tensor_from_node_or_edge_data(
            graph_data.ndata, graph_data.num_nodes()
        )
        edge_int_feature, edge_float_feature = extract_tensor_from_node_or_edge_data(
            graph_data.edata, graph_data.num_edges()
        )

        return (
            node_int_feature,
            node_float_feature,
            edge_int_feature,
            edge_float_feature,
        )

    def __preprocess_dgl_graph(
        self, graph_data: dgl.DGLGraph, y: torch.Tensor, idx: int
    ) -> PYGGraph:

        if not graph_data.is_homogeneous:
            raise ValueError(
                "Heterogeneous dgl.DGLGraph is found. Only homogeneous graph is supported."
            )
        N = graph_data.num_nodes()

        (
            node_int_feature,
            node_float_feature,
            edge_int_feature,
            edge_float_feature,
        ) = self.__extract_edge_and_node_features(graph_data)
        edge_index = graph_data.edges()
        attn_edge_type = torch.zeros(
            [N, N, edge_int_feature.shape[1]], dtype=torch.long
        )
        attn_edge_type[
            edge_index[0].long(), edge_index[1].long()
        ] = convert_to_single_emb(edge_int_feature)
        dense_adj = graph_data.adj().to_dense().type(torch.int)
        shortest_path_result, path = algos.floyd_warshall(dense_adj.numpy())
        max_dist = np.amax(shortest_path_result)
        edge_input = algos.gen_edge_input(max_dist, path, attn_edge_type.numpy())
        spatial_pos = torch.from_numpy((shortest_path_result)).long()
        attn_bias = torch.zeros([N + 1, N + 1], dtype=torch.float)  # with graph token

        pyg_graph = PYGGraph()
        pyg_graph.x = convert_to_single_emb(node_int_feature)
        pyg_graph.adj = dense_adj
        pyg_graph.attn_bias = attn_bias
        pyg_graph.attn_edge_type = attn_edge_type
        pyg_graph.spatial_pos = spatial_pos
        pyg_graph.in_degree = dense_adj.long().sum(dim=1).view(-1)
        pyg_graph.out_degree = pyg_graph.in_degree
        pyg_graph.edge_input = torch.from_numpy(edge_input).long()
        if y.dim() == 0:
            y = y.unsqueeze(-1)
        pyg_graph.y = y
        pyg_graph.idx = idx

        # breakpoint()

        return pyg_graph

    def random_dataset(self, num):
        graphs = [
            dgl.graph((torch.tensor([2, 3, 8, 19]), torch.tensor([1, 2, 4, 19]))),
            dgl.graph((torch.tensor([0, 1, 2, 3,]), torch.tensor([1, 2, 3, 4]))),
        ]
        labels = [
            [SOS_token, 2, 3, 10, 3, EOS_token], 
            [SOS_token, 5, 4, 3, 2, EOS_token],
        ]

        for G in graphs:
            G.ndata['x'] = torch.ones((len(G.nodes()), 2)) # set nodes features

        graphs *= 20
        labels *= 20

        return graphs[:num], labels[:num]


if __name__ == '__main__':
    dgl_dataset = GraphormerDGLDataset()

    for i, graph in enumerate(dgl_dataset):
        print(i, graph)

    encoder_dict = dgl_dataset.collate()
    print(encoder_dict.keys())

