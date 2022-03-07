# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python hpctoolkit_service/demo_without_bazel.py

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
from compiler_gym.envs.llvm.llvm_benchmark import get_system_includes
from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import utils


from agent_py.rewards import perf_reward
from agent_py.datasets import poj104_dataset

def register_env():
    register(
        id="perf-v0",
        entry_point="compiler_gym.envs:CompilerEnv",
        kwargs={
            "service": utils.HPCTOOLKIT_PY_SERVICE_BINARY,
            "rewards": [perf_reward.Reward()],
            "datasets": [
                poj104_dataset.Dataset()            
            ],
        },
    )


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    # Create the environment using the regular gym.make(...) interface.
    with gym.make("perf-v0") as env:
        inc = 0
        for bench in env.datasets["benchmark://poj104-v0"]:
            print("bench>>>>>>>>>> ", bench)
            try:
                env.reset(benchmark=bench)
            except ServiceError:
                print("AGENT: Timeout Error Reset")
            

            for i in range(2):
                print("Main: step = ", i)
                try:
                    observation, reward, done, info = env.step(
                        action=env.action_space.sample(),
                        observations=["perf"],
                        rewards=["perf"],
                    )
                except ServiceError:
                    print("AGENT: Timeout Error Step")
                    continue

                print(reward)
                # print(observation)
                print(info)
                perf_dict = pickle.loads(observation[0])
                print(perf_dict)

                pdb.set_trace()
                if done:
                    env.reset()
            inc += 1
        print("I run %d benchmarks." % inc)


if __name__ == "__main__":
    main()
