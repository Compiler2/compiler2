import pandas as pd
import programl as pg
import pickle
import pdb
from typing import Dict, List, Optional, Tuple
import numpy as np

from compiler_gym.service.proto import (
    Event,
    ByteTensor,
    Int64Tensor
)

from compiler2_service.service_py.utils import to_int64_tensor
    
class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        self.llvm_path = src_path


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
            # breakpoint()
            # g_nx = pg.to_networkx(g_programl)
            g_dgl = pg.to_dgl(g_programl)
            # breakpoint()
            # dot = pg.to_dot(g_programl)

        return g_dgl