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
        g_programl = self.programl.programl_get_graph(self.llvm_path)
        g_programl = self.programl_add_features(
            g_programl, g_hatchet, self.features_hatchet
        )
        pickled = pickle.dumps(g_programl)
        return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))


    def programl_get_graph(self, ll_path: str) -> pg.ProgramGraph:

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

        num_nodes = len(g_programl.nodes())
        g_programl.ndata['x'] = torch.zeros((num_nodes, len(feature_names))) # set nodes features

        # breakpoint()
        for n_id in set(df["line"].tolist()):
            hatchet_row = df[df["line"] == n_id]  # if there is multiple sum them

            if hatchet_row['llvm_ins'][0] in ['', 'dummy']: continue

            if not hatchet_row.empty:
                g_programl.ndata['x'][n_id] = torch.tensor([sum(hatchet_row[fn]) for fn in feature_names])


        return g_programl        