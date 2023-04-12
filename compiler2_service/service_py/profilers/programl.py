import pandas as pd
import programl as pg
import pickle
import pdb
from typing import Dict, List, Optional, Tuple
import numpy as np
import torch
import dgl
# import networkx as nx

from compiler_gym.service.proto import (
    Event,
    ByteTensor,
    Int64Tensor
)
from programl.ir.llvm.inst2vec_encoder import Inst2vecEncoder

from compiler2_service.service_py.utils import to_int64_tensor


class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        self.llvm_path = src_path
        self.encoder = Inst2vecEncoder()


    # def get_observation(self) -> Event:
    #     g_programl = self.programl_get_graph(self.llvm_path)
    #     pickled = pickle.dumps(g_programl)
    #     breakpoint()
    #     return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))

    def get_observation(self) -> Event:
        g_programl = self.programl_get_graph(self.llvm_path)
        return Event(int64_tensor=to_int64_tensor(g_programl))


    def programl_get_graph(self, ll_path: str) -> pg.ProgramGraph:

        with open(ll_path, "r") as f:
            code_str = f.read().rstrip()
            g_programl = pg.from_llvm_ir(code_str)
            # g_nx = pg.to_networkx(g_programl)
            
            g_dgl = self.reduce_graph(g_programl)

            # g_dgl = pg.to_dgl(g_programl)

            # dot = pg.to_dot(g_programl)
            # with open('/home/dx4/g_programl.txt', 'w') as writer: writer.write(dot)
            # breakpoint()

        return g_dgl


    def reduce_graph(self, graph):
        '''
            We want to reduce all linear parts of graph to blocks
        '''
        embeddings = set()
        max_block_len = 0

        graph = self.encoder.Encode(graph)
        
        # Creating block nodes.
        blocks_num = graph.node[-1].block + 1
        feature_num = 256
        features_tensor = torch.zeros((blocks_num, feature_num), dtype=torch.int32)

        embeding_pos = 0
        prev_block = -1
        for n in graph.node: 
            if prev_block != n.block:
                embedding_pos = 0
            elif embedding_pos >= feature_num: 
                    continue

            features_tensor[n.block][embedding_pos] = n.features.feature['inst2vec_embedding'].int64_list.value[0]
            embedding_pos += 1
            prev_block = n.block

        # Creating block node edges.
        block_edges = []
        for e in graph.edge: 
            n_src = graph.node[e.source]
            n_tgt = graph.node[e.target]
            if n_src.block != n_tgt.block and [n_src.block, n_tgt.block] not in block_edges: # Only edge_weight==1 for now
                block_edges.append([n_src.block, n_tgt.block])
        
        e_src, e_tgt = zip(*block_edges)
        # Finalizing dgl graph.
        dgl_graph = dgl.graph((torch.tensor(e_src), torch.tensor(e_tgt)))
        dgl_graph.ndata['x'] = features_tensor

        # TODO Dejan: we can extend this with edge weights, Enable edge_type=multi_hop in Graphormer 

        # Print graph
        # print(nx.drawing.nx_pydot.to_pydot(dgl_graph.to_networkx()))
        del graph
        return dgl_graph



# >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> max_block_len = 256
# >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> embeddings:
#  [79, 172, 173, 176, 178, 182, 187, 188, 193, 194, 196, 197, 198, 200, 204, 205, 210, 211, 213, 214, 215, 216, 222, 
#   231, 235, 252, 256, 257, 263, 279, 284, 286, 289, 290, 291, 293, 295, 297, 311, 318, 332, 342, 343, 355, 357, 358, 
#   364, 394, 412, 425, 431, 432, 441, 448, 458, 462, 463, 469, 471, 472, 481, 488, 496, 498, 506, 513, 517, 518, 520, 
#   521, 522, 523, 525, 526, 529, 540, 542, 562, 563, 565, 576, 581, 585, 586, 594, 597, 598, 601, 612, 617, 625, 626, 
#   628, 634, 640, 658, 660, 675, 679, 681, 693, 695, 721, 739, 756, 758, 767, 773, 798, 813, 824, 829, 834, 843, 849, 
#   875, 884, 951, 953, 965, 977, 994, 995, 1007, 1008, 1011, 1013, 1023, 1047, 1070, 1090, 1103, 1122, 1137, 1180, 1259, 
#   1269, 1277, 1288, 1289, 1335, 1348, 1378, 1397, 1405, 1459, 1681, 2092, 2095, 3715, 3759, 3760, 3769, 3776, 4545, 
#   4571, 4783, 4846, 4960, 4972, 5012, 5638, 6277, 8564, 8565, 8566]