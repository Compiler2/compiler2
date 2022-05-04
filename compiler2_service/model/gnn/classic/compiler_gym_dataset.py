# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

import pdb

import os
import sys

import dgl
import numpy as np
import torch
from dgl.data import DGLDataset

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
