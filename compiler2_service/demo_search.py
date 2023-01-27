# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python compiler2_service/demo_without_bazel.py

It is equivalent in behavior to the demo.py script in this directory.
"""
from absl import app, flags

import logging
import os
import pdb
import pickle
import subprocess
from pathlib import Path
from typing import Iterable
import numpy as np
import gym


from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.service.connection import ServiceError
import compiler2_service
from agent_py.rewards import runtime_reward
from agent_py.datasets import poj104_dataset_small


flags.DEFINE_integer("bench_count", 2, "The number of benchmarks.")
flags.DEFINE_integer("search_depth", 1, "How deep you go in search before you decide.")
flags.DEFINE_integer("search_width", 10, "The number action you expand every level of the search.")
flags.DEFINE_integer("walk_count", 5, "The number of walks.")
flags.DEFINE_integer("step_count", 6, "The number of steps.")
flags.DEFINE_string("data_set", "benchmark://poj104-small-v0", "Data set.")

FLAGS = flags.FLAGS


def register_env():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [runtime_reward.RewardTensor()],
            "datasets": [
                poj104_dataset_small.Dataset()            
            ],
        },
    )


def main(argv):
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.DEBUG)
    register_env()

    # Create the environment using the regular gym.make(...) interface.
    # with gym.make("compiler2-v0") as env:
    with compiler2_service.make_env("compiler2-v0", logging=True) as env:

        inc = 0
        for bench in env.datasets[FLAGS.data_set]:
            print("bench>>>>>>>>>> ", bench)
            try:
                env.reset(benchmark=bench)
                breakpoint()
                env.send_param("search", f"{FLAGS.walk_count}, {FLAGS.step_count}, {FLAGS.search_depth}, {FLAGS.search_width}")
                breakpoint()
            except ServiceError:
                print("AGENT: Timeout Error Reset")
            
        print("I run %d benchmarks." % inc)


if __name__ == "__main__":
    app.run(main)
