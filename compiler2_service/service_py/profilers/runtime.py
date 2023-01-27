from tokenize import Double
import numpy as np
import pdb
from compiler2_service.service_py.utils import run_command_get_stderr
import re

from compiler_gym.service.proto import (
    Event,
    DoubleTensor,
    DoubleRange,
    DoubleBox,
    DoubleSequenceSpace)


class Profiler:
    def __init__(self, name, run_cmd, timeout_sec, src_path=None):
        self.name = name
        self.run_cmd = run_cmd
        self.timeout_sec = timeout_sec

    def get_observation(self) -> Event:
        avg_exec_time = self.runtime_get_average()
        return Event(float_value=avg_exec_time)


    def runtime_get_average(self) -> DoubleTensor:
        exec_times = []
        
        breakpoint()
        for _ in range(1):
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
        return np.mean(exec_times)


class ProfilerTensor(Profiler):
    def get_observation(self) -> Event:
        avg_exec_time = self.runtime_get_average()
        tensor = DoubleTensor(shape = [1], value=[avg_exec_time])
        return Event(double_tensor=tensor)
