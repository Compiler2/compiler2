import pdb
import pickle
from typing import Dict, List, Optional, Tuple

import pandas as pd
import utils

from compiler_gym.service.proto import Event, ByteTensor, DoubleTensor
# from compiler_gym.util.commands import run_command
from compiler2_service.service_py.utils import run_command, print_list

class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec
        # TODO: Figure out how to collect all in multiple runs
        self.metrics_list = [
            "cycles",  # Reward
            'branches',
            # 'branch-misses',
            # 'cache-misses',
            # 'cache-references',
            # 'instructions',
            # 'idle-cycles-backend',
            # 'idle-cycles-frontend',
            # 'page-faults',
            # 'L1-dcache-load-misses',
            # 'L1-dcache-loads',
            # 'L1-dcache-prefetches',
            # 'L1-icache-load-misses',
            # 'L1-icache-loads',
            # 'branch-load-misses',
            # 'branch-loads',
            # 'dTLB-load-misses',
            # 'dTLB-loads',
            # 'iTLB-load-misses',
            # 'iTLB-loads',
        ]

    def get_observation(self) -> Event:
        perf_dict = self.perf_get_dict()
        pickled = pickle.dumps(perf_dict)
        return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))

    def perf_get_dict(self) -> Dict:

        # perf stat -o metric_out.csv -d -d -d -x ',' ./benchmark.exe 1125000
        # perf stat -d -d -d -x ',' ./benchmark.exe 1125000 # much faster
        metric_file_name = "metrics.csv"
        events_list = []

        for m in self.metrics_list:
            events_list.extend(["-e", m])

        perf_cmd = (
            ["perf", "stat", "-o", metric_file_name, "-x", ","]
            + events_list
            + self.run_cmd
        )

        # print("\nPerf get_observations: ")
        # print_list(perf_cmd)

        stdout = run_command(
            perf_cmd,
            timeout=self.timeout_sec,
        )
        return self.perf_parse_to_dict(metric_file_name)

    def perf_parse_to_dict(self, csv_name: str) -> Dict:

        # if 'r' there will be column for std +- var
        column_names = [
            "counter_value",
            "counter_unit",
            "event_name",
            "counter_runtime",
            "counter_runtime_perc",
            "metric_value",
            "metric_unit",
        ]
        df = pd.read_csv(csv_name, names=column_names)
        assert len(column_names) == df.shape[1]
        df = df[df["counter_value"] != "<not supported>"][df["event_name"].notnull()]

        return dict(zip(df["event_name"], df["counter_value"]))


class ProfilerTensor(Profiler):
    def get_observation(self) -> Event:
        perf_dict = self.perf_get_dict()
        perf_vec = [ float(x) for x in perf_dict.values() ]
        tensor = DoubleTensor(shape = [ 1, len(perf_vec)], value=perf_vec)
        return Event(double_tensor=tensor)