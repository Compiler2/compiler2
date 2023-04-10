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

import gym
import hatchet as ht

from compiler_gym.datasets import Benchmark, Dataset, BenchmarkUri
from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import compiler2_service


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=['poj104_small']) as env:
        for bench in sorted(env.datasets.benchmarks()):

            try:
                env.reset(benchmark=bench)
            except ServiceError:
                print("AGENT: Timeout Error Reset")
                    
            for i in range(2):
                print("Main: step = ", i)
                try:
                    observation, reward, done, info = env.step(
                        action=env.action_space.sample(),
                        observation_spaces=["runtime_tensor"],
                        reward_spaces=["runtime"],
                    )
                except ServiceError:
                    print("AGENT: Timeout Error Step")
                    continue

                print(reward)
                print(observation)
                print(info)
            
                breakpoint()

if __name__ == "__main__":
    main()
