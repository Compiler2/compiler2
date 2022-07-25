# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

from ctypes import util
import logging
import os
import pdb
import subprocess
from copy import deepcopy as deepcopy
from pathlib import Path
from signal import Signals
from typing import List, Optional, Tuple
from xmlrpc.client import Boolean

import compiler2_service.paths
import pickle
from itertools import cycle
import pandas as pd
import random


from compiler_gym.util.timer import Timer
import compiler_gym.third_party.llvm as llvm
from compiler_gym.service.proto import Benchmark

from compiler_gym.service.proto import (
    Event,
)

# from compiler_gym.util.commands import Popen, run_command
from compiler2_service.service_py.utils import run_command, proto_buff_container_to_list, print_list, run_command_stdout_redirect
from matplotlib import pyplot as plt
from profilers import runtime


class BenchmarkSearch:
    def __init__(self, benchmark):
        self.benchmark = benchmark
        self.profiler_runtime = runtime.Profiler("runtime",
                                    self.benchmark.run_cmd,
                                    timeout_sec=1)


    ##############################################################
    # Search functions
    ##############################################################
    def plot_search(self, df, color, linewidth=1):
        plt.plot(df['time'], df['measured_reward'], color=color, linewidth=linewidth)
    

    def explore_benchmark(self, walk_count, step_count, search_depth, search_width) -> None:
        rewards_actions = []
        cycol = cycle('bgrcmk')
        # fig, axs = plt.subplots(1, 2)
        plt.cla()
        plt.title('Benchmark performance')

        with Timer() as episode_time:
            start_runtime = self.profiler_runtime.get_observation()
            breakpoint()
            self.benchmark.save_checkpoint()
            for self.walk_num in range(1, walk_count + 1):
                self.benchmark.restore_checkpoint()

                df = self.walk(
                    step_count=step_count, 
                    search_depth=search_depth, 
                    search_width=search_width
                )
                rewards_actions.append(df)
                self.plot_search(df, color = next(cycol))

                # print(f'{start_flops} -> {rewards_actions[-1][0]} GFLOPs, Actions = {rewards_actions[-1][1]}')
        
            best_df = max(rewards_actions, key=lambda x: x['measured_reward'].iloc[-1]) 
            self.plot_search(best_df, 'red', linewidth=3)
            best_actions = best_df['action'].tolist()
            predicted_reward, measures_reward = best_df['measured_reward'].iloc[-1]
            print(f"Time = {episode_time}, Runtime: {start_runtime} -> {measures_reward} | Actions = {best_actions}---------")


        plt.tight_layout()
        plt.savefig("tmp.png")

        return predicted_reward, best_actions


    def walk(self, step_count: int, search_depth: int, search_width: int)-> list:         
        df_list = []

        with Timer() as step_time:
            for self.step_num in range(1, step_count + 1):
                new_action_str, new_reward = self.get_best_next_action(search_depth, search_width)
                self.benchmark.apply_action(opt=new_action_str, save_state=True)

                df_list.append([step_time.time, new_action_str, new_reward])


        return pd.DataFrame(df_list, columns=['time','action', 'measured_reward'])


    # Search
    def get_best_next_action(self, search_depth, search_width):

        if search_depth == 0:
            next_action = random.choice(self.benchmark.get_available_actions())
            new_reward = 0
        else:
            action_sequences = self.get_action_sequences(
                search_depth=search_depth, 
                search_width=search_width,
            )

            best_action_sequence, new_reward = self.best_action_sequence(action_sequences)
            next_action =  best_action_sequence[0]

        return next_action, new_reward
        


    def get_action_sequences(self, search_depth, search_width, actions=[]):
        full_action_sequences = []

        if search_depth == 0:
            return [actions]

        chosen_actions = random.sample(self.benchmark.get_available_actions(), search_width)
        # print(chosen_actions)
        for action_str in chosen_actions:

            # print(f'search_depth = {search_depth}')
            # print(agent.actions)
            # print(agent)
            
            child_action_sequences = self.get_best_action_helper(search_depth - 1, search_width, actions=actions + [action_str])
            full_action_sequences.extend(child_action_sequences)

        return full_action_sequences

    
    def best_action_sequence(self, action_sequences):
        best_runtime, best_seq = float("inf"), []
        for seq in action_sequences:
            action_seq_str = " ".join(seq)
            self.benchmark.apply_action(opt=action_seq_str, save_state=False)
            runtime = self.profiler_runtime.get_observation()
            breakpoint()
            if runtime < best_runtime:
                best_runtime = runtime
                best_seq = seq
        
        return best_seq, best_runtime