import pandas as pd
import programl as pg
import pickle
from typing import Dict, List, Optional, Tuple
import numpy as np
import torch
import dgl
import os 
# import networkx as nx

from compiler_gym.service.proto import (
    Event,
    ByteTensor,
    Int64Tensor
)
from programl.ir.llvm.inst2vec_encoder import Inst2vecEncoder

from compiler2_service.service_py.utils import to_int64_tensor


class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None, pca_size=0):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        self.llvm_path = src_path
        self.encoder = Inst2vecEncoder()
        with open(f'{ os.path.dirname(__file__)}/programl_encodings.csv', 'r') as reader:
            self.encodings = torch.tensor([int(x) for x in reader.read().split(',')])

        with open(f'{ os.path.dirname(__file__)}/programl_pca.pkl', 'br') as reader:
            self.pca = pickle.load(reader)
        self.pca_size = pca_size
        self.pca.components_ = self.pca.components_[:self.pca_size]

    # def get_observation(self) -> Event:
    #     g_programl = self.get_programl(self.llvm_path)
    #     pickled = pickle.dumps(g_programl)
    #     breakpoint()
    #     return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))

    def get_observation(self) -> Event:
        # g_programl = self.get_programl(self.llvm_path)
        # g_dgl = self.reduce_graph(g_programl)

        g_dgl, _ = self.get_dgl(self.llvm_path)
        g_dgl = self.reduce_dgl(g_dgl, block_inst_num=256)
        if self.pca_size:
            g_dgl = self.apply_pca(g_dgl)
        
        return Event(int64_tensor=to_int64_tensor(g_dgl))


    def get_programl(self, ll_path: str) -> pg.ProgramGraph:

        with open(ll_path, "r") as f:
            code_str = f.read().rstrip()
            g_programl = pg.from_llvm_ir(code_str)
            # g_nx = pg.to_networkx(g_programl)
            # g_dgl = pg.to_dgl(g_programl)

            # dot = pg.to_dot(g_programl)
            # with open('/home/dx4/g_programl.txt', 'w') as writer: writer.write(dot)
            # breakpoint()

        return g_programl

    def get_dgl(self, ll_path: str) -> dgl.DGLHeteroGraph:
        g_programl = self.get_programl(self.llvm_path)
        e_graph = self.encoder.Encode(g_programl)
        g_dgl = pg.to_dgl(g_programl)
        
        encoding_len = 256

        num_nodes = len(g_dgl.nodes())
        g_dgl.ndata['block'] = torch.zeros((num_nodes, 1), dtype=torch.int16)
        g_dgl.ndata['inst'] = torch.zeros((num_nodes, 1), dtype=torch.int16)
        g_dgl.ndata['type'] = torch.zeros((num_nodes, 1), dtype=torch.int16)

        inst_mapping = [0] # 0th line points to zero. Source starts at 1

        for i, n in enumerate(e_graph.node): 
            full_text = str(n.features.feature['full_text'].bytes_list.value)
            # print(i, full_text)                    
                    
            if full_text == '[]':
                continue
            full_text = full_text.split("'")[1].split('!')[0]
            if full_text != "":
                g_dgl.ndata['inst'][i] = n.features.feature['inst2vec_embedding'].int64_list.value[0]
                g_dgl.ndata['block'][i] = n.block
                # g_dgl.ndata['type'][i] = n.type

                if n.type == 0: # 0 - instruction, 1 - data 2 - function
                    inst_mapping.append(i) 


            
        return g_dgl, inst_mapping

    def reduce_dgl(self, g_dgl, block_inst_num = 256):
        blocks_num = g_dgl.ndata['block'][-1].item() + 1
        features_tensor = torch.zeros((blocks_num, block_inst_num), dtype=torch.int32)

        blocked_features = {
            k: torch.zeros((blocks_num, block_inst_num, v.shape[1]), dtype=torch.int16) for k, v in g_dgl.ndata.items()
        }

        embedding_pos = 0
        prev_block = -1
        for i in g_dgl.nodes(): 
            block = g_dgl.ndata['block'][i].item()

            if prev_block != block:
                embedding_pos = 0
            elif embedding_pos >= block_inst_num: 
                    continue

            for feature in blocked_features.keys():
                blocked_features[feature][block][embedding_pos] = g_dgl.ndata[feature][i]

            embedding_pos += 1
            prev_block = block
        
        # Creating block node edges.
        block_edges = []
        e_src, e_tgt = g_dgl.edges()
        for src, tgt in zip(e_src, e_tgt):
            src_block = g_dgl.ndata['block'][src]
            tgt_block = g_dgl.ndata['block'][tgt]

            if src_block != tgt_block and [src_block, tgt_block] not in block_edges: # Only edge_weight==1 for now
                block_edges.append([src_block, tgt_block])
        
        # Finalizing dgl graph.
        e_src, e_tgt = zip(*block_edges)        
        g_dgl_reduced = dgl.graph((torch.tensor(e_src), torch.tensor(e_tgt)))
        g_dgl_reduced.ndata.update(blocked_features)
        g_dgl_reduced.ndata.pop('block') # We don't need block tag since node_id == block

        return g_dgl_reduced


    def apply_pca(self, g_dgl):
        # Apply PCA on block features. This will decrease dimensionality to pca_size
        num_nodes = len(g_dgl.nodes())
        g_dgl.ndata['inst_pca'] = torch.zeros((num_nodes, self.pca_size), dtype=torch.float32)

        for n_id in g_dgl.nodes(): 
            hist = torch.bincount(g_dgl.ndata['inst'].flatten().to(int))
            hist = hist[self.encodings].reshape(1, -1)
            g_dgl.ndata['inst_pca'][n_id] = torch.from_numpy(self.pca.transform(hist))


        g_dgl.ndata['inst'] = g_dgl.ndata['inst_pca']
        g_dgl.ndata.pop('inst_pca') 

        return g_dgl

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

# 79 [b'%9 = load i32, i32* @rand_nums_len, align 4, !dbg !35']
# 197 [b'store i32 %10, i32* @scanf_num, align 4, !dbg !37']
# 198 [b'%83 = icmp eq i32 %82, 115, !dbg !248']
# 200 [b'store i8* %0, i8** %2, align 8, !dbg !14']
# 204 [b'br i1 %160, label %161, label %175, !dbg !354']
# 210 [b'%30 = getelementptr inbounds i8, i8* %26, i64 %29, !dbg !187']
# 211 [b'store i8 0, i8* %132, align 1, !dbg !309']
# 213 [b'%3 = load i8*, i8** %2, align 8, !dbg !18']
# 215 [b'call void @llvm.va_end(i8* %168), !dbg !351']
# 216 [b'br label %17, !dbg !398']
# 231 [b'call void @set_rand(), !dbg !36']
# 235 [b'%11 = load i8, i8* %1, align 1, !dbg !38']
# 252 [b'%185 = sext i32 %184 to i64, !dbg !382']
# 257 [b'ret i32 %16, !dbg !44']
# 263 [b'ret void, !dbg !11']
# 284 [b'%155 = phi i8** [ %147, %143 ], [ %152, %149 ], !dbg !334']
# 286 [b'store i8 %6, i8* %1, align 1, !dbg !32']
# 289 [b'%7 = alloca i32, align 4, !dbg !170']
# 291 [b'%2 = alloca i8*, align 8, !dbg !13']
# 295 [b'%196 = load i32, i32* %5, align 4, !dbg !395']
# 311 [b'store i32 %197, i32* %5, align 4, !dbg !397']
# 357 [b'%152 = bitcast i8* %151 to i8**, !dbg !330']
# 364 [b'store i32 0, i32* %3, align 4, !dbg !349']
# 394 [b'%160 = icmp slt i32 %158, %159, !dbg !353']
# 431 [b'%197 = add nsw i32 %196, 1, !dbg !396']
# 462 [b'store i32* %166, i32** %11, align 8, !dbg !360']
# 463 [b'%72 = bitcast i8* %71 to i32**, !dbg !235']
# 481 [b'ret i32 0, !dbg !399']
# 496 [b'%142 = icmp sgt i32 %140, %141, !dbg !332']
# 513 [b'%148 = add i32 %141, 8, !dbg !325']
# 529 [b'store i32 0, i32* @scanf_num, align 4, !dbg !10']
# 563 [b'%145 = load i8*, i8** %144, align 16, !dbg !322']
# 594 [b'store i8** %1, i8*** %5, align 8, !dbg !30']
# 598 [b'%170 = sub nsw i32 %168, %169, !dbg !364']
# 617 [b'%181 = load i32*, i32** %9, align 8, !dbg !378']
# 626 [b'%164 = mul nsw i32 %163, 100, !dbg !357']
# 634 [b'%16 = icmp ne i32 %15, 0, !dbg !173']
# 658 [b'%186 = getelementptr inbounds i32, i32* %181, i64 %185, !dbg !383']
# 675 [b'%6 = trunc i32 %5 to i8, !dbg !31']
# 679 [b'%10 = srem i32 %8, %9, !dbg !36']
# 695 [b'%188 = add nsw i32 %180, %187, !dbg !385']
# 756 [b'%9 = icmp slt i32 %8, 1, !dbg !34']
# 824 [b'%11 = call i32 @main_bench(), !dbg !37']
# 994 [b'store i32 %148, i32* %140, align 16, !dbg !326']
# 995 [b'%141 = load i32, i32* %140, align 16, !dbg !318']
# 1007 [b'%12 = alloca i32*, align 8, !dbg !175']
# 1011 [b'%12 = sext i8 %11 to i32, !dbg !39']
# 1348 [b'%1 = alloca i8, align 1, !dbg !26']
# 1681 [b'%75 = phi i32** [ %67, %63 ], [ %72, %69 ], !dbg !239']
# 6219 [b'call void @llvm.dbg.value(metadata i8* %3, metadata !397, metadata !DIExpression()), !dbg !401']
# 6220 [b'call void @llvm.dbg.value(metadata i32* %186, metadata !586, metadata !DIExpression()), !dbg !814']
# 6221 [b'call void @llvm.dbg.value(metadata i32 %197, metadata !594, metadata !DIExpression()), !dbg !827']
# 6225 [b'call void @llvm.dbg.value(metadata i64 %185, metadata !585, metadata !DIExpression()), !dbg !813']
# 6228 [b'call void @llvm.dbg.value(metadata i8** %2, metadata !406, metadata !DIExpression()), !dbg !407']
# 6277 [b'%56 = sub nsw i32 %55, 1, !dbg !229']
# 8564 [b'']
# 8565 [b'i32* %5']
# 8566 [b'i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.3, i64 0, i64 0)']
