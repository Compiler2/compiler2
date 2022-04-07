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
        self.metric_groups = [
            [
                'cpu-cycles',                
                'duration_time',
                'task-clock',        
                'instructions',
                'bpf-output',
            ],
            [
                'alignment-faults',
                'context-switches',
                'cpu-clock',
                'cpu-migrations',
                'emulation-faults',
            ],
            [        
                'major-faults',
                'minor-faults',
                'page-faults',
                'cache-misses',
                'cache-references',        
            ],
            [
                'L1-dcache-load-misses',
                'L1-dcache-loads',
                'L1-dcache-prefetches',
                'L1-icache-load-misses',
                'L1-icache-loads',
            ],
            [
                'branch-instructions',
                'branch-misses',
                'branch-load-misses',
                'branch-loads',
            ],
            [
                'dTLB-load-misses',
                'dTLB-loads',
                'iTLB-load-misses',
                'iTLB-loads',
            ]
        ]

    def get_observation(self) -> Event:
        perf_dict = self.perf_get_dict()
        pickled = pickle.dumps(perf_dict)
        return Event(byte_tensor=ByteTensor(shape=[len(pickled)], value=pickled))

    def perf_get_dict(self) -> Dict:

        # perf stat -o metric_out.csv -d -d -d -x ',' ./benchmark.exe 1125000
        # perf stat -d -d -d -x ',' ./benchmark.exe 1125000 # much faster        
        metric_file_names = []
        events_list = []

        for i, metrics in enumerate(self.metric_groups):
            events_list = ["-e", ",".join(metrics)]

            metric_file_name = "metrics_%s.csv"%str(i)
            perf_cmd = (
                ["perf", "stat", "-o", metric_file_name, "-x", ","]
                + events_list
                + self.run_cmd
            )
            metric_file_names.append(metric_file_name)


            stdout = run_command(
                perf_cmd,
                timeout=self.timeout_sec,
            )
            # pdb.set_trace()

        return self.perf_parse_to_dict(metric_file_names)

    def perf_parse_to_dict(self, csv_names: list) -> Dict:

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
        df = pd.concat([pd.read_csv(f_path, names=column_names) for f_path in csv_names ])
        assert len(column_names) == df.shape[1]
        df = df[df["counter_value"] != "<not supported>"][df["event_name"].notnull()]

        return dict(zip(df["event_name"], df["counter_value"]))


class ProfilerTensor(Profiler):
    def get_observation(self) -> Event:
        perf_dict = self.perf_get_dict()
        # pdb.set_trace()
        perf_vec = [ float(x) for x in perf_dict.values() ]
        tensor = DoubleTensor(shape = [ 1, len(perf_vec)], value=perf_vec)
        return Event(double_tensor=tensor)