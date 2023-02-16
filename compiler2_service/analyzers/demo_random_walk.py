# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""Perform a random walk of the action space of a CompilerGym environment.

Example usage:

    # Run a random walk on cBench example program using perf runtime reward.
    $ python demo_random_walk.py --walk_count=2 --step_count=4 --data_set=benchmark://poj104-small-v0 --reward=perf_tensor --observation=perf_tensor

"""
import random
import pdb
import uuid
import os
import sys

from compiler2_service.agent_py.datasets import (
    hpctoolkit_cpu,
    poj104,
    poj104_small,
)
from compiler2_service.analyzers.dataset_exploration.random_walk import RandomWalker

import compiler2_service
from compiler_gym.util.registration import register
from compiler2_service.paths import COMPILER2_SERVICE_PY
from compiler2_service.agent_py.rewards import perf_reward
from compiler_gym.envs.llvm.datasets import CBenchDataset
from compiler_gym.util.runfiles_path import site_data_path


import humanize
from absl import app, flags

from compiler_gym.envs import CompilerEnv
from compiler_gym.util.flags.benchmark_from_flags import benchmark_from_flags
from compiler_gym.util.flags.env_from_flags import env_from_flags
from compiler_gym.util.shell_format import emph
from compiler_gym.util.timer import Timer

from joblib import Parallel, delayed

flags.DEFINE_integer("walk_count", 10, "The maximum number of walks.")
flags.DEFINE_integer("step_count", 20, "The maximum number of steps.")
flags.DEFINE_string("data_set", "benchmark://poj104-v0", "Data set.")

FLAGS = flags.FLAGS




def register_perf_session():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": COMPILER2_SERVICE_PY,
            "rewards": [perf_reward.RewardTensor()],
            "datasets": [
                CBenchDataset(site_data_path("llvm-v0")),
                hpctoolkit_cpu.Dataset(),
                # poj104.Dataset(),    
                poj104_small.Dataset(),    
            ],
        },
    )



def main(argv):
    """Main entry point."""
    assert len(argv) == 1, f"Unrecognized flags: {argv[1:]}"
    # This two lines try to suppress logging to stdout.
    import logging
    logging.basicConfig(level=logging.CRITICAL, force=True)

    register_perf_session()

    with compiler2_service.make_env("compiler2-v0", logging=True) as env:

        walker = RandomWalker(env=env, 
                              dataset_uri = FLAGS.data_set,
                              observation=FLAGS.observation,
                              reward=FLAGS.reward,
                              walk_count=max(1, FLAGS.walk_count),
                              step_count=max(1, FLAGS.step_count),                               
                              )


        walker.run()

        
if __name__ == "__main__":
    app.run(main)
