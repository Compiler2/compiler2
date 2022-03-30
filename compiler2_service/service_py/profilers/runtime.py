import numpy as np
import pdb
from compiler2_service.service_py.utils import run_command_get_stderr
import re

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
        
        with open('tmp', 'w') as f:

            for _ in range(5):
                stderr = run_command_get_stderr(
                    ['time', '-p'] + self.run_cmd,
                    timeout=self.timeout_sec,
                )
                print(stderr)
                try:
                    realtime_str = re.findall('real [\d|.]+', stderr)[0].lstrip('real ')
                    exec_times.append(float(realtime_str))
                except ValueError:
                    raise ValueError(
                        f"Error in getting time from stderr of command\n"                        
                        f"Stderr of the program: {stderr}"
                    )

        avg_exec_time = np.mean(exec_times)
        return DoubleTensor(shape=[1], value=[avg_exec_time])
        # return DoubleBox(
        #     low=DoubleTensor(value=[1], shape=[1]),
        #     high=DoubleTensor(value=[1], shape=[1]),
        # )
        # return avg_exec_time
