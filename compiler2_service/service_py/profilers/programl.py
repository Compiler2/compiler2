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

from compiler2_service.service_py.utils import MAX_PICKLE_SIZE


def pickle_to_dict(base_observation):
    if type(base_observation) != type(None):
        
        orig_size = len(base_observation)
        if MAX_PICKLE_SIZE < orig_size:
            breakpoint()
        padded = np.append(base_observation, np.zeros(MAX_PICKLE_SIZE - orig_size, dtype=np.int64))
        padded[-1] = orig_size
        return padded
    
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
        pickled = pickle.dumps(g_programl)
        aa = np.frombuffer(pickled, dtype=np.int8)
        tensor = Int64Tensor(shape = [ 1, MAX_PICKLE_SIZE], value=pickle_to_dict(aa))
        return Event(int64_tensor=tensor)


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