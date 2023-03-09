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




def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    # register_env()

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=['hpctoolkit_cpu']) as env:

        try:
            # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/offsets1")
            env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/conv2d")
            # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/nanosleep")
        except ServiceError:
            print("AGENT: Timeout Error Reset")

        for i in range(2):
            print("Main: step = ", i)
            try:
                observation, reward, done, info = env.step(
                    action=env.action_space.sample(),
                    observation_spaces=["programl"],
                    reward_spaces=["perf_cycles"],
                )
                
            except ServiceError:
                print("AGENT: Timeout Error Step")
                continue      
                  
            print(reward)
            print(info)
            breakpoint()
            g = from_int64_tensor(observation[0])
            print(g.nodes())
            

            pdb.set_trace()
            if done:
                env.reset()


if __name__ == "__main__":
    main()
