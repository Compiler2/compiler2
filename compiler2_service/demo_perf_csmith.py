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
import gym

from compiler_gym.datasets import Benchmark, BenchmarkUri, Dataset

from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import compiler2_service


from agent_py.rewards import perf_reward
from agent_py.datasets import csmith_dataset_small

def register_env():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [perf_reward.RewardTensor()],
            "datasets": [
                csmith_dataset_small.Dataset()            
            ],
        },
    )


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    # Create the environment using the regular gym.make(...) interface.
    # with gym.make("compiler2-v0") as env:
    with compiler2_service.make_env("compiler2-v0", logging=True) as env:

        inc = 0
        for bench in env.datasets["benchmark://csmith-small-v0"]:
            print("bench>>>>>>>>>> ", bench)
            try:
                base_actions = ["-always-inline", "-jump-threading","-reg2mem", "-div-rem-pairs", "-early-cse-memssa", "-early-cse",]
                env.reset(benchmark=bench)

                env.send_param("save_state", "0")
                observation, reward, done, info = env.multistep(
                    actions=[env.action_space.from_string(a) for a in base_actions],
                    observation_spaces=["perf_tensor"],
                    reward_spaces=["perf_tensor"],
                    )

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

                print(reward)
                # print(observation)
                print(info)

                if type(observation[0]) == np.ndarray:
                    print(observation[0])
                else:
                    perf_dict = pickle.loads(observation[0])
                    print(perf_dict)                    
                
                
                pdb.set_trace()
                if done:
                    env.reset()
            inc += 1
        print("I run %d benchmarks." % inc)


if __name__ == "__main__":
    main()
