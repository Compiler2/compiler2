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
import compiler2_service

import gym

from compiler_gym.datasets import Benchmark, BenchmarkUri, Dataset
from compiler_gym.envs.llvm.datasets import (
    AnghaBenchDataset,
    BlasDataset,
    CBenchDataset,
    CBenchLegacyDataset,
    CBenchLegacyDataset2,
    CHStoneDataset,
    CsmithDataset,
    NPBDataset,
)
from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import compiler2_service.paths
from compiler2_service import HPCToolkitCompilerEnvWrapper


from agent_py.rewards import perf_reward
from compiler2_service.agent_py.datasets import hpctoolkit_cpu


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make_env("compiler2-v0", logging=True) as env:

        benchmark_to_process = [
            "benchmark://cbench-v1/bitcount",
            "benchmark://cbench-v1/qsort",
            "benchmark://cbench-v1/blowfish",
        ]

        inc = 0
        for bench in benchmark_to_process:
            try:
                env.reset(benchmark=bench)
                observation, reward, done, info = env.multistep(
                        actions=[0, 1, 3],
                        observation_spaces=["perf_tensor"],
                        reward_spaces=["perf_tensor"],
                        )                
                print(observation)
                print(reward)
                print(done)
                print(info)                
            except ServiceError:
                print("AGENT: Timeout Error Reset")
            

            for i in range(2):
                print("Main: step = ", i)
                try:
                    observation, reward, done, info = env.step(
                        action=env.action_space.sample(),
                        observation_spaces=["perf_tensor"],
                        reward_spaces=["perf_tensor"],
                    )
                except ServiceError:
                    print("AGENT: Timeout Error Step")
                    continue

                print(observation)
                print(reward)
                print(done)
                print(info)

                if done:
                    env.reset()
            inc += 1
        print("I run %d benchmarks." % inc)


if __name__ == "__main__":
    main()
