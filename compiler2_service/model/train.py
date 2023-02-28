"""
Example of a custom gym environment and model. Run this for a demo.

This example shows:
  - using a custom environment
  - using a custom model
  - using Tune for grid search to try different learning rates

You can visualize experiment results in ~/ray_results using TensorBoard.

Run example with defaults:
$ python custom_env.py
For CLI options:
$ python custom_env.py --help

Reproduce results from wandb:
python compiler2_service/model/train.py --dataset=poj104_small --steps=2 --wandb_url=dejang/compiler2/40200_00000 --iter=0
python launcher/slurm_launch.py --app=rllib_agent.py --time=300:00 -nc=80 -ng=2 --iter=5000 --dataset=mm64_256_16_range --sweep  --steps=3
"""
import argparse
import ast
from distutils.command.config import config
from math import ceil, floor
import gym
from gym.spaces import Discrete, Box
from compiler_gym.util.logging import init_logging
import logging

import numpy as np
import os
import random
import shutil
import json

from pathlib import Path
from datetime import datetime
import pandas as pd
from copy import deepcopy
import yaml

import ray

import compiler2_service
from compiler2_service.model.evaluator import Evaluator
from compiler2_service.model.rllib_trainer import RLlibTrainer

from ray.tune.integration.wandb import WandbLoggerCallback
from compiler2_service.paths import COMPILER2_ROOT

from os.path import exists

import tempfile





parser = argparse.ArgumentParser()
parser.add_argument(
    '--profiler', type=str, choices=['perf', 'hpctoolkit', 'programl', 'programl_hpctoolkit'], default='perf', help='Profiler for creating representation.'
)
parser.add_argument(
    '--trainer', type=str, choices=['apex_dqn.ApexDQN', 'dqn.DQN', 'ppo.PPO', 'impala.Impala'], default='apex_dqn.ApexDQN', help='The RLlib-registered trainer to use. Store config in rllib/config directory.'
)
parser.add_argument(
    "--wandb_url",  type=str, nargs='?', default='', help="Wandb uri to load policy network."
)
parser.add_argument(
    "--wandb_overwrite", default=False, action="store_true", help="Overwrite wandb results."
)
parser.add_argument(
    "--sweep",  type=int, nargs='?', const=1, default=0, help="Run with wandb sweeps."
)
parser.add_argument(
    "--slurm", 
    default=False, 
    action="store_true",
    help="Run on slurm."
)
parser.add_argument(
    "--iter", type=int, default=1, help="Number of iterations to train."
)

parser.add_argument(
    "--steps", type=int, default=10, help="Number of actions to find."
)

parser.add_argument(
    "--dataset",  type=str, nargs='?', help="Dataset to run must be defined in compiler2_service.agent_py.datasets.", required=True
)

parser.add_argument(
    '--network', choices=['TorchActionMaskModel', 'TorchBatchNormModel', 'TorchCustomModel'], default='TorchCustomModel', help='Deep network model.'
)

parser.add_argument(
    "--size", type=int, nargs='?', default=1000000, help="Size of benchmarks to train."
)

parser.add_argument(
    "--eval_size", type=int, default=10, help="Size of benchmarks to evaluate."
)

parser.add_argument(
    "--eval_time", type=int, default=10, help="Time to evaluate single benchmark."
)

parser.add_argument(
    "--stop_reward", type=float, default=1, help="Reward at which we stop training."
)

parser.add_argument(
    "--ray-mode", type=str, choices=['local', 'non-local', 'slurm'], default='local', help="Init Ray in local, non-local, slurm  mode."
)


# datasets_global = ['poj104_small']
# max_episode_steps = 10

#################################################################

if __name__ == '__main__':
    args = parser.parse_args()
    print(f"Running with following CLI options: {args}")

    # datasets_global, max_episode_steps_global = args.dataset, args.steps

    init_logging(level=logging.CRITICAL)

    os.environ["obs_space"] = args.profiler
    os.environ["dataset"] = args.dataset
    os.environ["steps"] = str(args.steps)

    trainer = RLlibTrainer(
        profiler=args.profiler,
        trainer=args.trainer, 
        dataset=args.dataset, 
        steps=args.steps,
        size=args.size, 
        eval_size=args.eval_size,
        network=args.network, 
        sweep_count=args.sweep, 
        eval_time=args.eval_time,
        ray_mode=args.ray_mode,
    )

    if args.wandb_url:
        agent = trainer.load_model(args.wandb_url)

    agent = trainer.train(
        train_iter=args.iter, 
        stop_reward=args.stop_reward,
        sweep_count=args.sweep,
    )
    breakpoint()

    # Implement evaluate
    trainer.evaluate(agent)
    
    ray.shutdown()
    print("Return from train!")