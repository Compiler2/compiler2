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

from compiler_gym.datasets import Benchmark, BenchmarkUri, Dataset
from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import compiler2_service

from agent_py.rewards import hpctoolkit_reward
from agent_py.datasets import hpctoolkit_dataset


def register_env():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [hpctoolkit_reward.RewardPickle()],
            "datasets": [hpctoolkit_dataset.Dataset()],
        },
    )


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    reward_metric = hpctoolkit_reward.RewardPickle.reward_metric

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make_env("compiler2-v0", logging=False) as env:

        print("Make hpctoolkit")
        for bench in env.datasets["benchmark://hpctoolkit-cpu-v0"]:
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", bench)
            try:                
                env.reset(benchmark=bench)                
            except ServiceError:
                print("AGENT: Timeout Error Reset")
                continue
                
        
            for i in range(2):
                print("Main: step = ", i)
                try:
                    observation, reward, done, info = env.step(
                        action=env.action_space.sample(),
                        observation_spaces=["hpctoolkit_pickle"],
                        reward_spaces=["hpctoolkit_pickle"],
                    )
                except ServiceError:
                    print("AGENT: Timeout Error Step")
                    continue
                            
                print(reward)
                print(info)
                gf = pickle.loads(observation[0])
                print(gf.tree(metric_column=reward_metric))
                print(gf.dataframe[[reward_metric, "line", "llvm_ins"]])

                pdb.set_trace()
                if done:
                    env.reset()


if __name__ == "__main__":
    main()
