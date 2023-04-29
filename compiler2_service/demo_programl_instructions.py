# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python compiler2_service/demo_without_bazel.py

It is equivalent in behavior to the demo.py script in this directory.
"""
import logging
import os
import pdb
import pickle
import subprocess
from pathlib import Path
from typing import Iterable

import numpy as np

from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.service.connection import ServiceError
import compiler2_service

from agent_py.rewards import programl_reward, perf_reward
from compiler2_service.agent_py.datasets import hpctoolkit_cpu
from compiler2_service.service_py.utils import from_int64_tensor
import torch
from matplotlib import pyplot as plt


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.CRITICAL)
    # register_env()

    size = 100000
    inst_freq = torch.zeros((10000, size))

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=['poj104_train'], size=size) as env:
        benchmarks = env.datasets.benchmarks()
        for bi, benchmark in enumerate(benchmarks):
            try:
                print(benchmark)
                env.reset(benchmark=benchmark, timeout=10000)
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/offsets1")
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/conv2d")
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/nanosleep")
            except :
                with open(f'poj104_train_bad_benchmarks.csv', 'a') as f:
                    f.write(f"{benchmark}\n")
                continue


                print("AGENT: Timeout Error Reset")

            for step in range(1):
                print("Main: step = ", step)
                try:
                    observation, reward, done, info = env.step(
                        action=env.action_space.sample(),
                        observation_spaces=["programl"],
                        reward_spaces=["runtime"],
                        timeout=10000,
                    )
                    
                except:
                    print("Error in env.step()")
                    with open(f'poj104_train_bad_benchmarks.csv', 'a') as f:
                        f.write(f"{benchmark}\n")
                    continue      
                    
                print(reward)
                print(info)
                g = from_int64_tensor(observation[0])
                print(g.nodes())
                # breakpoint()
                hist = torch.bincount(g.ndata['inst'].flatten().to(int))
                inst_freq[:hist.shape[0], bi] = hist 



                with open(f'poj104_train_checkpoint_bench.csv', 'a') as f:
                    f.write(f"{benchmark}\n")
                if done:
                    env.reset()



                if bi % 100 == 1 or bi == 21708:
                    inst_freq_nozeros = inst_freq[1:,:bi+1]
                    var, mean = torch.var_mean(inst_freq_nozeros, dim=1)
                    with open(f'poj104_train_encodings.csv', 'w') as f:
                        for i, (m, v) in enumerate(zip(mean,var.sqrt())):
                            if m.item() != 0:
                                f.write(f"{i}, {m.item()}, {v.item()}\n")
        plt.plot(mean)
        plt.plot(mean + var.sqrt())
        plt.plot(mean - var.sqrt())
        plt.savefig('inst_dist.png')

        print('Return from demo_programl.py')


if __name__ == "__main__":
    main()