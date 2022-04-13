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


from agent_py.rewards import perf_reward
from agent_py.datasets import poj104_dataset_small

import torch

from absl import app, flags


flags.DEFINE_string("model_path", "", "path to the model (.pt)")
flags.DEFINE_integer("flag_count", 20, "The maximum number of steps.")
flags.DEFINE_string("data_set", "benchmark://poj104-v0", "Data set.")

FLAGS = flags.FLAGS


def register_env():
    register(
        id="compiler2-v0",
        entry_point="compiler_gym.envs:CompilerEnv",
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [perf_reward.RewardTensor()],
            "datasets": [
                poj104_dataset_small.Dataset()            
            ],
        },
    )



class Model:
    def __init__(self):
        # device = torch.device("cuda")
        # model = Q_net(*args, **kwargs)
        # model.load_state_dict(torch.load(FLAGS.model_path))
        # model.to(device)

        self.model = torch.jit.load(FLAGS.model_path)
        self.model.eval()

    def predict(self, observation):
        next_action = 0

        return next_action


def main():

    model = Model()
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    # Create the environment using the regular gym.make(...) interface.
    with gym.make("compiler2-v0") as env:
        inc = 0
        for bench in env.datasets["benchmark://poj104-small-v0"]:
            print("bench>>>>>>>>>> ", bench)
            try:

                env.reset(benchmark=bench)
                env.send_param("save_state", "0")

            except ServiceError:
                print("AGENT: Timeout Error Reset")
            
            pdb.set_trace()
            for i in range(FLAGS.flag_count):
                print("Main: step = ", i)
                try:

                    next_action = model.predict()
                
                    observation, reward, done, info = env.step(
                        action=next_action,
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
    app.run(main)