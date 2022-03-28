import numpy as np
import pdb
from typing import Dict, List, Optional, Tuple

from compiler_gym.service.proto import (
    Event,
    DoubleTensor,
    DoubleBox
)


class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec

    def get_observation(self) -> Event:
        avg_exec_time = self.runtime_get_average()
        # return Event(double_value=avg_exec_time)
        return Event(double_tensor=avg_exec_time)
        # return Event(double_=avg_exec_time)


    def runtime_get_average(self) -> DoubleTensor:
        # TODO: add documentation that benchmarks need print out execution time
        # Running 5 times and taking the average of middle 3
        exec_times = []
        
        with open('/dev/null', 'w') as f:

            for _ in range(5):
                # stdout = benchmark_builder.run_command_stdout_redirect(
                #     ['time'] + self.benchmark.run_cmd,
                #     timeout=self.timeout_sec,
                #     output_file=f
                # )
                # print(stdout)
                exec_time = 1 # TODO: Figure out how to parse time to int and to direct output to /dev/null

                try:
                    exec_times.append(exec_time)
                except ValueError:
                    raise ValueError(
                        f"Error in parsing execution time from output of command\n"
                        f"Please ensure that the source code of the benchmark measures execution time and prints to stdout\n"
                        f"Stdout of the program: {stdout}"
                    )

        exec_times = np.sort(exec_times)
        avg_exec_time = np.mean(exec_times[1:4])
        return DoubleTensor(shape=[1], value=[avg_exec_time])
        # return DoubleBox(
        #     low=DoubleTensor(value=[1], shape=[1]),
        #     high=DoubleTensor(value=[1], shape=[1]),
        # )
        # return avg_exec_time
