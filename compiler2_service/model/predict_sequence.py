# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python predict_sequence.py --model_path=./notebooks/deep_q.pt --flag_count=4

It is equivalent in behavior to the demo.py script in this directory.
"""
from importlib.metadata import entry_points
import logging
import os
import pdb
import pickle
import subprocess
import random
from pathlib import Path
from typing import Iterable

from zmq import device
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
import compiler2_service
import compiler2_service.paths


from compiler2_service.agent_py.rewards import perf_reward
from compiler2_service.agent_py.datasets import poj104_dataset_small


import torch

from absl import app, flags


flags.DEFINE_string("model_path", "", "path to the model (.pt)")
flags.DEFINE_integer("flag_count", 10, "The maximum number of steps.")
# flags.DEFINE_string("data_set", "benchmark://poj104-small-v0", "Data set.")

FLAGS = flags.FLAGS


def register_env():
    register(
        id="compiler2-v0",
        entry_point=compiler2_service.HPCToolkitCompilerEnv,
        kwargs={
            "service": compiler2_service.paths.COMPILER2_SERVICE_PY,
            "rewards": [perf_reward.RewardTensor()],
            "datasets": [
                poj104_dataset_small.Dataset()            
            ],
        },
    )



class Model:
    def __init__(self, action_space):
        # device = torch.device("cuda")
        # model = Q_net(*args, **kwargs)
        # model.load_state_dict(torch.load(FLAGS.model_path))
        # model.to(device)
        self.action_space = action_space
        self.model = torch.jit.load(FLAGS.model_path)
        self.model.eval()

    def predict_actions(self, state)-> list:
        state = torch.tensor(state).to('cuda').float()
        with torch.no_grad():
            pred = self.model.forward(state)
            logging.info(f'prediction:\n{torch.sort(pred, descending=True)}\n')
            return torch.sort(pred, descending=True).indices[0].tolist()

            return self.action_space.sample()


def main(argv):
    
    # Use debug verbosity to print out extra logging information.
    logging.basicConfig(level=logging.CRITICAL, force=True)
    register_env()
    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make_env("compiler2-v0") as env:
        model = Model(env.action_spaces[0])
        inc = 0
        for bench in env.datasets["benchmark://poj104-small-v0"]:
            logging.critical(f"bench>>>>>>>>>> {bench}")
            try:

                env.reset(benchmark=bench)
                env.send_param("save_state", "1")

                base_actions = ["-always-inline", "-jump-threading","-reg2mem", "-div-rem-pairs", "-early-cse-memssa", "-early-cse",]
                observation, reward, done, info = env.multistep(
                    actions=[env.action_space.from_string(a) for a in base_actions],
                    observation_spaces=["perf_tensor"],
                    reward_spaces=["perf_tensor"],
                    )            

            except ServiceError:
                logging.critical("AGENT: Timeout Error Reset")
            
            observation = env.observation["perf_tensor"]
            cycles_base = observation[0].flat[0] 
            cycles_final = 0

            for i in range(FLAGS.flag_count):
                try:
                    best_actions = model.predict_actions(observation)
                    env.send_param("save_state", "0")
                    chosen_action = None

                    for i, next_action in enumerate(best_actions):
                        observation, reward, done, info = env.step(
                            seek=True,
                            action=next_action,
                            observation_spaces=["perf_tensor"],
                            reward_spaces=["perf_tensor"],
                        )
                        # env.actions.pop()

                        if info.get('action_had_no_effect'):
                            continue
                        else:
                            logging.critical(f">>>>>>>>>>>>{i}. Chosen Action = {next_action} , Reward = {reward}")
                            chosen_action = next_action
                            break



                    if chosen_action == None:
                        logging.critical("PROBLEM: No action is effective")
                        break
                    
                    env.send_param("save_state", "1")
                    observation, reward, done, info = env.step(
                        action=chosen_action,
                        observation_spaces=["perf_tensor"],
                        reward_spaces=["perf_tensor"],
                    )
                    observation = observation[0]

                    
                except ServiceError:
                    logging.critical("AGENT: Timeout Error Step")
                    continue

                # logging.info(observation)
                # logging.info(reward)
                # logging.info(done)
                # logging.info(info)
                cycles_final = observation[0].flat[0] 
                if done:
                    env.reset()
            logging.critical(f'-------------------------------------------------------------------')
            logging.critical(f'cycles_base = {cycles_base} cycles_final= {cycles_final}')
            logging.critical(f'Final reward = {float(cycles_base - cycles_final) / cycles_base}')
            logging.critical(f"Final cmd: {env.commandline()}")            
            logging.critical(f'-------------------------------------------------------------------')
            
            inc += 1


        logging.info(f"I run {inc} benchmarks.")



if __name__ == "__main__":
    app.run(main)
