import pdb
import pickle
from typing import Dict, List, Optional, Tuple

import hatchet as ht
import pandas as pd
import utils

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
            run_command(
                cmd,
                timeout=self.timeout_sec,
            )
        print('2++++++++++')            
        g_hatchet = ht.GraphFrame.from_hpctoolkit("db")
        print('3++++++++++')            

        if self.llvm_path:
            self.addInstStrToDataframe(g_hatchet, self.llvm_path)

        print('4++++++++++')            

        return g_hatchet

    def addInstStrToDataframe(self, g_hatchet: ht.GraphFrame, ll_path: str) -> None:

        inst_list = self.extractInstStr(ll_path)

        g_hatchet.dataframe["llvm_ins"] = ""

        for i, inst_idx in enumerate(g_hatchet.dataframe["line"]):
            if inst_idx < len(inst_list):
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
