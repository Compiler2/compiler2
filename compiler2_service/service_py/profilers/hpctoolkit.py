import pdb
import pickle
from typing import Dict, List, Optional, Tuple

import hatchet as ht
import pandas as pd
import utils
import dgl
import torch
import numpy as np

from compiler_gym.service.proto import Event, ByteTensor
# from compiler_gym.util.commands import run_command
from compiler2_service.service_py.utils import run_command, print_list

class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        self.exe_path = run_cmd[0]
        self.llvm_path = src_path
        self.exe_struct_path = self.exe_path + ".hpcstruct"

        self.metrics_list = [
            # "REALTIME@10",
            "cycles"
        ]

    def get_observation(self) -> Event:        
        g_hatchet = self.hatchet_get_graph()
        pickled = pickle.dumps(g_hatchet)
        return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))

    def hatchet_get_graph(self) -> ht.GraphFrame:
        events_list = []

        for m in self.metrics_list:
            events_list.extend(["-e", m])

        hpctoolkit_cmd = [
            [
                "rm",
                "-rf",
                self.exe_struct_path,
                "m",
                "db",
            ],
            [
                "hpcrun",
                "-o",
                "m",
                "-t",
            ]
            + events_list
            + self.run_cmd,
            ["hpcstruct", "-o", self.exe_struct_path, self.exe_path],
            [
                "hpcprof-mpi",
                "-o",
                "db",
                "--metric-db",
                "yes",
                "-S",
                self.exe_struct_path,
                "m",
            ],
        ]
        print("HPCToolkit get observation:")
        print_list(hpctoolkit_cmd)
        print('1++++++++++')
        for cmd in hpctoolkit_cmd:
            try:
                run_command(
                    cmd,
                    timeout=self.timeout_sec,
                )
            except:
                run_command( # BUG: sometimes hpcrun fails for the first time, but terminates well when repeated 
                    cmd,
                    timeout=self.timeout_sec,
                )
        print('2++++++++++')          
        try:  
            g_hatchet = ht.GraphFrame.from_hpctoolkit("db")
        except:
            breakpoint()
            return None

        print('3++++++++++')            

        if self.llvm_path:
            self.addInstStrToDataframe(g_hatchet, self.llvm_path)

        print('4++++++++++')     
        return g_hatchet

    def addInstStrToDataframe(self, g_hatchet: ht.GraphFrame, ll_path: str) -> None:

        inst_list = self.extractInstStr(ll_path)
        # g_hatchet.dataframe.reset_index(inplace=True)

        g_hatchet.dataframe["llvm_ins"] = ''
        pd.set_option('mode.chained_assignment', None)

        for i, inst_idx in enumerate(g_hatchet.dataframe["line"]):
            if inst_idx < len(inst_list):
                # I tried to do 'g_hatchet.dataframe.at[i, "llvm_ins"] = inst_list[inst_idx]'  but this doesn't work since there is no index, If I reset index .to_literal() doesn't work.
                g_hatchet.dataframe["llvm_ins"][i] = inst_list[inst_idx] 


    def extractInstStr(self, ll_path: str) -> list:
        inst_list = []
        inst_list.append("dummy")

        with open(ll_path) as f:
            for line in f.readlines():
                if line[0:2] == "  " and line[2] != " ":
                    # print(len(inst_list), str(line)) # Important for Debug
                    inst_list.append(str(line[2:-1]))  # strip '  ' and '\n' at the end
        return inst_list

    def hatchet_to_dgl(self, gf):
        if gf == None:
            return dgl.graph(([1], [1]))

        edges = []
        features = {}

        nodes_to_expand = gf.to_literal()
        while nodes_to_expand:
            node = nodes_to_expand.pop(0)        
            node_id = node['metrics']['_hatchet_nid']
            features[node_id] = [ v for k, v in node['metrics'].items() if k != '_hatchet_nid']

            if 'children' in node:
                for child in node['children']:
                    nodes_to_expand.append(child)
                    child_id = child['metrics']['_hatchet_nid']
                    edges.append([node_id, child_id])

        x, y = zip(*edges)
        g_dgl = dgl.graph((x, y))
        g_dgl.ndata['x'] = torch.tensor([features[k] for k in sorted(features)]) # set nodes features
        # g_dgl.ndata['x'] = np.array([features[k] for k in sorted(features)]) # set nodes features
        return g_dgl


from compiler2_service.service_py.utils import to_int64_tensor

class ProfilerDGL(Profiler):
    def get_observation(self) -> Event:        
        g_hatchet = self.hatchet_get_graph()
        dgl_graph = self.hatchet_to_dgl(g_hatchet)
        # pickled = pickle.dumps(dgl_graph)
        # return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))
        return Event(int64_tensor=to_int64_tensor(dgl_graph))
    