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
import pandas as pd

from compiler_gym.datasets import Benchmark, Dataset, BenchmarkUri
from compiler_gym.envs.llvm.datasets import (
    CBenchDataset,
    CBenchLegacyDataset,
    CBenchLegacyDataset2,
)
from compiler_gym.spaces import Reward
from compiler_gym.third_party import llvm
from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.util.runfiles_path import runfiles_path, site_data_path
from compiler_gym.service.connection import ServiceError
import compiler2_service

pd.set_option("display.max_columns", None)

collected_metrics = ["REALTIME (sec) (I)", "REALTIME (sec) (E)"]




from agent_py.rewards import programl_hpctoolkit_reward
from agent_py.datasets import hpctoolkit_dataset, poj104_dataset_small


def register_env():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [programl_hpctoolkit_reward.RewardPickle()],
            "datasets": [
                hpctoolkit_dataset.Dataset(), 
                poj104_dataset_small.Dataset(), 
                CBenchLegacyDataset2(site_data_path("llvm-v0"))],
        },
    )


def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    # Create the environment using the regular gym.make(...) interface.
    # with gym.make("hpctoolkit-llvm-v0") as env:
    with compiler2_service.make_env("compiler2-v0", logging=True) as env:

        try:
            # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/offsets1")
            # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/conv2d")
            # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/nanosleep")
            
            env.reset(benchmark="benchmark://poj104-small-v0/1_17")
            pdb.set_trace()
            # env.reset(benchmark="benchmark://cbench-v1/qsort")
        except ServiceError:
            print("AGENT: Timeout Error Reset")

        for i in range(2):
            print("Main: step = ", i)
            try:
                observation, reward, done, info = env.step(
                    action=121,#env.action_space.sample(),
                    observation_spaces=["programl_hpctoolkit_pickle"],
                    reward_spaces=["programl_hpctoolkit_pickle"],
                )
            except ServiceError:
                print("AGENT: Timeout Error Step")
                continue       
                 
            print(reward)
            print(info)
            g = pickle.loads(observation[0])
            g_df = pd.DataFrame.from_dict(dict(g.nodes(data=True)), orient="index")
            f_df = pd.DataFrame.from_dict(dict(g_df["features"]), orient="index")

            df = pd.concat([g_df, f_df], axis=1)
            df.drop("features", axis=1, inplace=True)

            print(df[["full_text", "dynamic"]])
            df.to_csv( os.getcwd() + "/programl.csv", index=False)

            pdb.set_trace()
            if done:
                env.reset()


if __name__ == "__main__":
    main()
