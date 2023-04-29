import torch
import hatchet as ht
import pandas as pd
import programl as pg
import pickle
import pdb
from typing import Dict, List, Optional, Tuple

from compiler_gym.service.proto import (
    Event,
    ByteTensor
)

from compiler2_service.service_py.utils import to_int64_tensor
from profilers import (
    hpctoolkit,
    programl
)


class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        self.llvm_path = src_path
        self.hpctoolkit = hpctoolkit.Profiler(name, run_cmd, timeout_sec, src_path)
        self.programl = programl.Profiler(name, run_cmd, timeout_sec, src_path)

        # TODO: Get rid of this
        # List of metrics collected from observation space

        self.features_hatchet = [
            # "REALTIME (sec) (I)",
            # "REALTIME (sec) (E)",
            "cycles (I)",
            "cycles (E)",
        ]  # TODO: Use this from hatchat dataframe


    def get_observation(self) -> Event:
        g_hatchet = self.hpctoolkit.hatchet_get_graph()
        g_programl = self.programl.get_programl(self.llvm_path)
        g_programl = self.programl_add_features(
            g_programl, g_hatchet, self.features_hatchet
        )
        # pickled = pickle.dumps(g_programl)
        # return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))
        return Event(int64_tensor=to_int64_tensor(g_programl))


    def get_programl(self, ll_path: str) -> pg.ProgramGraph:

        with open(ll_path, "r") as f:
            code_str = f.read().rstrip()
            g_programl = pg.from_llvm_ir(code_str)
            g_programl = pg.to_networkx(g_programl)

        return g_programl


    def programl_add_features(
        self, g_programl: pg.ProgramGraph, g_hatchet: ht.GraphFrame, feature_names: list
    ) -> pg.ProgramGraph:

        df = g_hatchet.dataframe.sort_values(by=["line"])
        # The node 0 carries the information about <program root>
        hatchet_root = df[df["name"] == "<program root>"]

        g_dgl, inst_mapping = self.programl.get_dgl(self.llvm_path)

        num_nodes = len(g_dgl.nodes())
        g_dgl.ndata['hpctoolkit'] = torch.zeros((num_nodes, len(feature_names))) # set nodes features

        breakpoint()
        for n_id in set(df["line"].tolist()):
            hatchet_row = df[df["line"] == n_id]  # if there is multiple sum them
            print( n_id, hatchet_row['llvm_ins'][0])

            if  not hatchet_row.empty and hatchet_row['llvm_ins'][0] in ['', 'dummy']: continue

            programl_i = inst_mapping[n_id] 
            if str(g_programl.node[programl_i].features.feature['full_text'].bytes_list.value[0]).split("'")[1].split('!dbg')[0] != hatchet_row['llvm_ins'][0].split('!dbg')[0]:
                print('Neeeee')
                breakpoint()

            g_dgl.ndata['hpctoolkit'][programl_i] = torch.tensor([sum(hatchet_row[fn]) for fn in feature_names])
            # print(n_id, g_dgl.ndata['hpctoolkit'][programl_i])
        
        with open(self.llvm_path, 'r') as reader:
            lines = reader.readlines()
            n_id = 0
            for i, line in enumerate(lines):
                if line.startswith('  '):
                    n_id += 1
                    try:
                        lines[i] = str(g_dgl.ndata['block'][n_id].item()) + ' -> ' + str(g_dgl.ndata['hpctoolkit'][n_id]) + line
                    except:
                        breakpoint()
            with open('/home/dx4/tmp_txt', 'w') as writer:
                writer.write(''.join(lines))
            breakpoint()


        g_dgl = self.programl.reduce_dgl(g_dgl)
        g_dgl.ndata['hpctoolkit'] = g_dgl.ndata['hpctoolkit'].sum(dim=1)

        return g_dgl        
# // Benchmark
# define dso_local i32 @my_printf(i8* noalias %0, ...) #0 !dbg !8 {
#   %2 = alloca i8*, align 8, !dbg !13
#   call void @llvm.dbg.value(metadata i8** %2, metadata !11, metadata !DIExpression()), !dbg !13
#   store i8* %0, i8** %2, align 8, !dbg !14
#   ret i32 0, !dbg !15
# }

# ; Function Attrs: noinline nounwind optnone uwtable
# define dso_local i32 @my_scanf(i8* noalias %0, ...) #0 !dbg !16 {
#   %2 = alloca i8*, align 8, !dbg !162
#   call void @llvm.dbg.value(metadata i8** %2, metadata !18, metadata !DIExpression()), !dbg !162
#   %3 = alloca [10 x i8], align 1, !dbg !163
#   call void @llvm.dbg.value(metadata [10 x i8]* %3, metadata !19, metadata !DIExpression()), !dbg !163
#   %4 = alloca i32, align 4, !dbg !164
#   call void @llvm.dbg.value(metadata i32* %4, metadata !20, metadata !DIExpression()), !dbg !164
#   %5 = alloca i32, align 4, !dbg !165
#   call void @llvm.dbg.value(metadata i32* %5, metadata !21, metadata !DIExpression()), !dbg !165
#   %6 = alloca [1 x %struct.__va_list_tag], align 16, !dbg !166


# // Base
# define dso_local i32 @my_printf(i8* noalias %0, ...) #0 {
#   %2 = alloca i8*, align 8
#   store i8* %0, i8** %2, align 8
#   ret i32 0
# }

# ; Function Attrs: noinline nounwind optnone uwtable
# define dso_local i32 @my_scanf(i8* noalias %0, ...) #0 {
#   %2 = alloca i8*, align 8
#   %3 = alloca [10 x i8], align 1
#   %4 = alloca i32, align 4
#   %5 = alloca i32, align 4
#   %6 = alloca [1 x %struct.__va_list_tag], align 16
#   %7 = alloca i32, align 4
#   %8 = alloca i8*, align 8
#   store i8* %0, i8** %2, align 8
#   store i32 0, i32* %4, align 4
#   store i32 0, i32* %5, align 4

# // Programl

# 1 [b'%2 = alloca i8*, align 8, !dbg !13']
# 2 [b'call void @llvm.dbg.value(metadata i8** %2, metadata !11, metadata !DIExpression()), !dbg !13']
# 3 [b'store i8* %0, i8** %2, align 8, !dbg !14']
# 4 [b'i8** %2']
# 5 [b'ret i32 0, !dbg !15']
# 6 [b'i8* %0']
# 7 [b'%2 = alloca i8*, align 8, !dbg !156']
# 8 [b'call void @llvm.dbg.value(metadata i8** %2, metadata !18, metadata !DIExpression()), !dbg !162']
# 9 [b'%3 = alloca [10 x i8], align 1, !dbg !157']
# 10 [b'call void @llvm.dbg.value(metadata [10 x i8]* %3, metadata !19, metadata !DIExpression()), !dbg !163']
# 11 [b'%4 = alloca i32, align 4, !dbg !158']
# 12 [b'call void @llvm.dbg.value(metadata i32* %4, metadata !20, metadata !DIExpression()), !dbg !164']
# 13 [b'%5 = alloca i32, align 4, !dbg !159']
# 14 [b'call void @llvm.dbg.value(metadata i32* %5, metadata !21, metadata !DIExpression()), !dbg !165']
# 15 [b'%6 = alloca [1 x %struct.__va_list_tag], align 16, !dbg !160']
# 16 [b'call void @llvm.dbg.value(metadata [1 x %struct.__va_list_tag]* %6, metadata !22, metadata !DIExpression()), !dbg !166']
# 17 [b'%7 = alloca i32, align 4, !dbg !161']
# 18 [b'call void @llvm.dbg.value(metadata i32* %7, metadata !23, metadata !DIExpression()), !dbg !167']
# 19 [b'%8 = alloca i8*, align 8, !dbg !162']
# 20 [b'call void @llvm.dbg.value(metadata i8** %8, metadata !24, metadata !DIExpression()), !dbg !168']
# 21 [b'store i8* %0, i8** %2, align 8, !dbg !163']
# 22 [b'i8** %2']
# 23 [b'store i32 0, i32* %4, align 4, !dbg !164']
# 24 [b'i32* %4']
# 25 [b'store i32 0, i32* %5, align 4, !dbg !165']
# 26 [b'i32* %5']
# 27 [b'br label %9, !dbg !166']
# 28 [b'%10 = load i8*, i8** %2, align 8, !dbg !167']
# 29 [b'i8** %2']
# 30 [b'call void @llvm.dbg.value(metadata i8* %10, metadata !25, metadata !DIExpression()), !dbg !173']
# 31 [b'%11 = load i32, i32* %5, align 4, !dbg !168']
# 32 [b'i32* %5']
# 33 [b'call void @llvm.dbg.value(metadata i32 %11, metadata !26, metadata !DIExpression()), !dbg !174']
# 34 [b'%12 = sext i32 %11 to i64, !dbg !169']
# 35 [b'i32 %11']
# 36 [b'call void @llvm.dbg.value(metadata i64 %12, metadata !28, metadata !DIExpression()), !dbg !175']
# 37 [b'%13 = getelementptr inbounds i8, i8* %10, i64 %12, !dbg !170']
# 38 [b'i8* %10']
# 39 [b'i64 %12']
# 40 [b'call void @llvm.dbg.value(metadata i8* %13, metadata !29, metadata !DIExpression()), !dbg !176']
# 41 [b'%14 = load i8, i8* %13, align 1, !dbg !171']
# 42 [b'i8* %13']
# 43 [b'call void @llvm.dbg.value(metadata i8 %14, metadata !30, metadata !DIExpression()), !dbg !177']
# 44 [b'%15 = sext i8 %14 to i32, !dbg !172']
# 45 [b'i8 %14']
# 46 [b'call void @llvm.dbg.value(metadata i32 %15, metadata !32, metadata !DIExpression()), !dbg !178']
# 47 [b'%16 = icmp ne i32 %15, 0, !dbg !173']
# 48 [b'i32 %15']
# 49 [b'call void @llvm.dbg.value(metadata i1 %16, metadata !33, metadata !DIExpression()), !dbg !179']
# 50 [b'br i1 %16, label %17, label %40, !dbg !174']
# 51 [b'i1 %16']
# 52 [b'%18 = load i8*, i8** %2, align 8, !dbg !175']
# 53 [b'i8** %2']
# 54 [b'call void @llvm.dbg.value(metadata i8* %18, metadata !34, metadata !DIExpression()), !dbg !181']
# 55 [b'%19 = load i32, i32* %5, align 4, !dbg !176']
# 56 [b'i32* %5']
# 57 [b'call void @llvm.dbg.value(metadata i32 %19, metadata !35, metadata !DIExpression()), !dbg !182']
# 58 [b'%20 = sext i32 %19 to i64, !dbg !177']
# 59 [b'i32 %19']
# 60 [b'call void @llvm.dbg.value(metadata i64 %20, metadata !36, metadata !DIExpression()), !dbg !183']
# 61 [b'%21 = getelementptr inbounds i8, i8* %18, i64 %20, !dbg !178']
# 62 [b'i8* %18']
# 63 [b'i64 %20']
# 64 [b'call void @llvm.dbg.value(metadata i8* %21, metadata !37, metadata !DIExpression()), !dbg !184']
# 65 [b'%22 = load i8, i8* %21, align 1, !dbg !179']
# 66 [b'i8* %21']
# 67 [b'call void @llvm.dbg.value(metadata i8 %22, metadata !38, metadata !DIExpression()), !dbg !185']
# 68 [b'%23 = sext i8 %22 to i32, !dbg !180']
# 69 [b'i8 %22']
# 70 [b'call void @llvm.dbg.value(metadata i32 %23, metadata !39, metadata !DIExpression()), !dbg !186']
# 71 [b'%24 = icmp eq i32 %23, 37, !dbg !181']
# 72 [b'i32 %23']
  

# // hpctoolkit
# 0 dummy
# 4 ret i32 0, !dbg !15
# 12 call void @llvm.dbg.value(metadata i32* %5, metadata !21, metadata !DIExpression()), !dbg !165
# 16 call void @llvm.dbg.value(metadata i32* %7, metadata !23, metadata !DIExpression()), !dbg !167
# 17 %8 = alloca i8*, align 8, !dbg !168
# 22 br label %9, !dbg !172
