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
$ python rllib_agent.py --iter=0 --dataset=poj104_small  --wandb_url=dejang/loop_tool_agent_split/61e41_00000 --trainer=dqn.ApexTrainer  --eval_size=25 --eval_time=60
"""
import argparse
import ast
from distutils.command.config import config
from math import ceil, floor
import gym
from itertools import islice
from gym.spaces import Discrete, Box
import numpy as np
import os
import random
import shutil
import json
from matplotlib import pyplot as plt
from pathlib import Path
from datetime import datetime
import pandas as pd
from copy import deepcopy
import yaml

import ray
from ray import tune
from ray.rllib.models import ModelCatalog
from ray.rllib.utils.framework import try_import_torch
from ray.rllib.utils.test_utils import check_learning_achieved

from compiler_gym.wrappers import CycleOverBenchmarks
from compiler_gym.util.registration import register
from compiler_gym.wrappers import TimeLimit
import logging
from compiler_gym.util.logging import init_logging
from ray.tune.logger import Logger

import compiler2_service
from compiler2_service.model.evaluator import Evaluator


# import torch
import importlib
import time

from ray.tune.integration.wandb import WandbLoggerCallback
# from ray.air.callbacks.wandb import WandbLoggerCallback

from compiler2_service.paths import COMPILER2_ROOT
from os.path import exists
import wandb

import tempfile
# Run this with: 
# python rllib_agent.py --iter=2 --dataset=poj104_small
# python launcher/slurm_launch.py --app=rllib_agent.py --time=300:00 -nc=80 -ng=2 --iter=5000 --dataset=poj104_small --sweep  --steps=3
# python


torch, nn = try_import_torch()
# import ray.rllib.algorithms.trainer_template



def make_env():
    """Make the reinforcement learning environment for this experiment."""
    # print(os.environ["dataset"], os.environ["steps"])

    env = compiler2_service.make(
        "compiler2-v0",
        datasets=[os.environ["dataset"]],
        observation_space=os.environ["obs_space"],#"perf",
        reward_space="runtime",
    )

    env = TimeLimit(env, max_episode_steps=int(os.environ["steps"])) # <<<< Must be here
    return env


# from ray.tune import Callback
# class MyCallback(Callback):
#     def __init__(self, agent):
#         Callback.__init__(self)
#         self.agent = agent

#     def on_trial_result(self, iteration, trials, trial, result, **info):
#         if 'fcnet_hiddens' in trial.config['model']:
#             self.agent.wandb_dict['layers_num'] = len(trial.config['model']['fcnet_hiddens'])
#             self.agent.wandb_dict['layers_width'] = trial.config['model']['fcnet_hiddens'][0]

#         self.agent.evaluator.send_to_wandb(wandb_run_id=f'{self.wandb_project_url}/{trial.trial_id}', wandb_dict=self.agent.wandb_dict)


class RLlibTrainer:
    def __init__(self, profiler, trainer, dataset, steps, size, eval_size, network, sweep_count, eval_time, ray_mode='local') -> None:        
        self.ray_start(ray_mode)
        self.wandb_dict = {}

        # os.environ["dataset"] = dataset
        # os.environ["steps"] = str(steps)


        self.max_episode_steps = steps
        self.trainer_name = trainer
        self.profiler = profiler
        self.algorithm, trainer = trainer.split('.') # expected: algorithm.trainer
        # self.trainer = getattr(importlib.import_module(f'ray.rllib.algorithms.{self.algorithm}'), trainer)
        self.trainer = getattr(importlib.import_module(f'ray.rllib.agents.{self.algorithm}'), trainer)
        self.config = importlib.import_module(f"compiler2_service.model.config.{self.algorithm}.{trainer}").get_config(profiler, sweep_count)
        self.dataset = dataset
        self.size = size
        self.eval_size = eval_size
        network_arch = 'action_graphormer' if any([profiler.startswith(xx) for xx in ['programl', 'programl_hpctoolkit', 'hpctoolkit']]) else 'mlp'
        self.network = getattr(importlib.import_module(f"compiler2_service.model.{network_arch}.my_net"), network)
        self.wandb_dict['network'] = network
        self.wandb_project_url = str(os.environ['WANDB_PROJECT_URL']) # format username/project_name
        self.wandb_project_name = self.wandb_project_url.split('/')[1]
        self.env = make_env()
        # breakpoint()
        # ray.rllib.utils.check_env(self.env)

        self.reward = list(self.env.reward.spaces.keys())[0]
        self.my_artifacts = Path(f'{COMPILER2_ROOT}/results/perf/{time.strftime("%Y%m%d-%H%M%S")}') #Path(tempfile.mkdtemp()) # Dir to download and upload files. Has start, end subdirectories
        self.my_artifacts_start = self.my_artifacts/'start'
        self.my_artifacts_end = self.my_artifacts/'end'
        self.my_artifacts_results = self.my_artifacts/'results'
        self.device = 'cuda' if torch.cuda.is_available() else 'cpu'
        self.checkpoint_path = None
        self.policy_model = None
        self.train_benchmarks = []
        self.test_benchmarks = []
        self.checkpoint_start = None
        self.analysis = None
        self.trial_id = None
        self.evaluator = Evaluator(steps=steps, reward=self.reward, timeout=eval_time)
        self.init()
    


    def init(self):
        # os.mkdir(self.my_artifacts_start)
        # os.mkdir(self.my_artifacts_end)
        self.my_artifacts_start.mkdir(parents=True)
        self.my_artifacts_end.mkdir(parents=True)

        ModelCatalog.register_custom_model(
            "my_model", self.network
        )
        dataset =  self.env.datasets[f'benchmark://{self.dataset}-v0']
        benchmarks = [str(b) for b in dataset.benchmarks()]
        random.shuffle(benchmarks)
        benchmarks = benchmarks[:self.size]
        self.wandb_dict['profiler'] = self.profiler
        self.wandb_dict['dataset'] = dataset.name
        self.wandb_dict['max_episode_steps'] = self.max_episode_steps
        
        train_perc = 0.8
        train_size = int(np.ceil(train_perc * (len(benchmarks)-1) ))
        
        self.train_benchmarks = benchmarks[:train_size]
        self.test_benchmarks = benchmarks[train_size:]
        self.wandb_dict['train_benchmarks'] = self.train_benchmarks
        self.wandb_dict['test_benchmarks'] = self.test_benchmarks
        self.wandb_dict['eval_train_benchmarks'] = self.train_benchmarks[:self.eval_size]
        self.wandb_dict['eval_test_benchmarks'] = self.test_benchmarks[:self.eval_size]

        self.wandb_dict['train_size'] = len(self.train_benchmarks)
        self.wandb_dict['test_size'] = len(self.test_benchmarks)
        self.wandb_dict['reward'] = self.reward

        self.wandb_dict['trainer'] = self.trainer.__name__
        self.wandb_dict['actions'] = ",".join(self.env.action_space.names)

        print("Number of benchmarks for training:", len(self.train_benchmarks))
        print("Number of benchmarks for test:", len(self.test_benchmarks))
                    

        def make_training_env(*args): 
            del args
            return CycleOverBenchmarks(make_env(), benchmarks[:train_size])
        tune.register_env("compiler_gym", make_training_env)


    def ray_start(self, ray_mode):
        if ray.is_initialized(): ray.shutdown()
        # breakpoint()
        if ray_mode == 'slurm':
            ray_address = os.environ["RAY_ADDRESS"] if "RAY_ADDRESS" in os.environ else "auto"
            head_node_ip = os.environ["HEAD_NODE_IP"] if "HEAD_NODE_IP" in os.environ else "127.0.0.1"
            redis_password = os.environ["REDIS_PASSWORD"] if "REDIS_PASSWORD" in os.environ else "5241590000000000"
            print('SLURM options: ', ray_address, head_node_ip, redis_password)
            ray.init(address=ray_address, _node_ip_address=head_node_ip, _redis_password=redis_password)    
        elif ray_mode == 'local':
            # ray.init(local_mode=True, ignore_reinit_error=True)
            # ray.init(local_mode=True, num_cpus=8, num_gpus=1,  _temp_dir=f"/scratch/dx4/tmp", object_store_memory=78643200)
            ray.init(local_mode=True, _temp_dir=f"/scratch/dx4/tmp")
        elif ray_mode == 'non-local':
            # ray.init(local_mode=False, num_cpus=os.cpu_count(), num_gpus=torch.cuda.device_count(), object_store_memory=100 * 1024 * 1024, ignore_reinit_error=True)
            ray.init(local_mode=False, num_cpus=65, num_gpus=1, object_store_memory=1500 * 1024 * 1024, ignore_reinit_error=True)
        else:
            print('Ray mode must be: slurm, local, non-local')

    def load_model(self, wandb_url):
        try:
            api = wandb.Api()
            wandb_run = api.run(wandb_url)
            self.wandb_dict['wandb_start'] = wandb_url
            self.checkpoint_start = wandb_run.summary
            self.checkpoint_path = f"{self.my_artifacts_start}/{self.checkpoint_start['checkpoint']}"
            if 'layers_width' in self.checkpoint_start:
                self.config['model']['fcnet_hiddens'] = [self.checkpoint_start['layers_width']] * self.checkpoint_start['layers_num']
            
            for f in wandb_run.files(): 
                if f.name.startswith('checkpoint'):
                    f.download(root=self.my_artifacts_start, replace=True)

            self.train_benchmarks = self.checkpoint_start['train_benchmarks']
            self.test_benchmarks = self.checkpoint_start['test_benchmarks']
            self.wandb_dict['eval_train_benchmarks'] = self.checkpoint_start['eval_train_benchmarks'][:self.eval_size] if self.eval_size < len(self.checkpoint_start['eval_train_benchmarks']) else self.checkpoint_start['train_benchmarks'][:self.eval_size]
            self.wandb_dict['eval_test_benchmarks'] = self.checkpoint_start['eval_test_benchmarks'][:self.eval_size] if self.eval_size < len(self.checkpoint_start['eval_test_benchmarks']) else self.checkpoint_start['eval_test_benchmarks'][:self.eval_size]


        except:
            print('Wandb had problem with loading the model!')
            return

        return self.get_agent(trial_config=self.config, checkpoint_path_str=self.checkpoint_path)
            


            
    def train(self, train_iter, stop_reward=1, sweep_count=1):
        """Training with RLlib agent.

        Args:
            config (dict): config to run.
            train_iter (int): training iterations
            sweep_count (int, optional): number of sweeps. Defaults to 1.

        Returns:
            dict: [trial_id] = { "policy_path": policy_path, "config": config } after training
        """
        if train_iter <= 0:
            return self.agent

        if self.checkpoint_start != None:
            train_iter += self.checkpoint_start['training_iteration']

        # breakpoint()
        analysis = tune.run(
            self.trainer,
            config=self.config, 
            restore=self.checkpoint_path,
            metric="episode_reward_mean", # "final_performance",
            mode="max",
            # checkpoint_freq=10,
            checkpoint_at_end=True,
            num_samples=max(1, sweep_count),
            stop={'training_iteration': train_iter, 'episode_reward_mean': stop_reward}, #, 'timesteps_total': 1},   
            fail_fast=True,
            reuse_actors=True,
            callbacks=[
                WandbLoggerCallback(
                    project=self.wandb_project_name,
                    log_config=True,
                )
            ],
        )
        print("tune.run done______________________")

        if len(analysis.trials):
            trial = analysis.trials[0]
        else: 
            print(f"DEJAN: len(analysis.trials) <= 0 !, it is {analysis}")
            breakpoint()

        return self.get_agent(trial_config=trial.config, checkpoint_path_str=str(trial.checkpoint.value), trial_id=trial.trial_id) # .value -> .dir_or_data for ray 2.1


    def get_agent(self, trial_config, checkpoint_path_str, trial_id=None):
                
        trial_config["explore"] = False
        # self.agent = self.trainer.get_default_config() \
        #                 .from_dict(trial_config) \
        #                 .build(env='compiler_gym')
        self.agent = self.trainer( 
            env="compiler_gym",
            config=trial_config
        )

        self.agent.restore(checkpoint_path_str)

        if trial_id:
            self.trial_id = trial_id
            self.wandb_save_agent(trial_id, trial_config, Path(checkpoint_path_str))

        return self.agent


    def wandb_save_agent(self, trial_id, config, checkpoint_path):
        if 'fcnet_hiddens' in config['model']:
            self.wandb_dict['layers_num'] = len(config['model']['fcnet_hiddens'])
            self.wandb_dict['layers_width'] = config['model']['fcnet_hiddens'][0]
        
        self.wandb_dict['checkpoint'] = os.path.relpath(checkpoint_path, checkpoint_path.parent)#.parent)

        # Save policy and checkpoint for wandb
        policy_path = self.my_artifacts_end/trial_id#/'policy_model.pt'
        os.makedirs(policy_path)#.parent)
        my_artifacts_checkpoint_dir = self.my_artifacts_end/trial_id/checkpoint_path.name # parent.

        # if checkpoint_path.is_file():
        #     shutil.copyfile(checkpoint_path, my_artifacts_checkpoint_dir)
        # else:
        shutil.copytree(checkpoint_path.parent, my_artifacts_checkpoint_dir)
        with open(my_artifacts_checkpoint_dir/'config.json', "w") as f: json.dump(config, f)

        self.send_to_wandb(wandb_run_id=f'{self.wandb_project_url}/{trial_id}', wandb_dict=self.wandb_dict, path=self.my_artifacts_end/trial_id)


    def send_to_wandb(self, wandb_run_id, wandb_dict=None, path=None):
        trial_id = wandb_run_id.split('/')[2] # format username/project_name/trial_id

        api = wandb.Api()
        wandb_run = api.run(wandb_run_id) # trial_id

        if wandb_dict: # Upload wandb dict
            wandb_dict['group_id'] = trial_id.split('_')[0]
            wandb_dict['run_id'] = trial_id
            for key, value in wandb_dict.items(): 
                wandb_run.summary[key] = value
            wandb_run.summary.update()

        # Delete previous files 
        for file in wandb_run.files():
            if file.name.endswith('.csv') or file.name.endswith('.png'): 
                file.delete()

        if path: # Upload wandb plots
            cwd = os.getcwd()
            os.chdir(path)
            for root, dirs, files in os.walk(path):
                for file in files:
                    print(f"{root}/{file}")
                    wandb_run.upload_file(f"{root}/{file}")       
            os.chdir(cwd)
        
        print(f'\nWandb page = https://wandb.ai/{wandb_run_id}')



    def evaluate(self, agent, wandb_overwrite=False):
        
        self.my_artifacts_results.mkdir(parents=True)
        self.wandb_dict[f'final_performance_train'] = self.evaluator.evaluate(env=self.env, agent=agent, benchmarks=self.wandb_dict['eval_train_benchmarks'], profiler=self.profiler, csv_file=f'{self.my_artifacts_results}/{self.profiler}_train.csv')
        self.wandb_dict[f'final_performance_test'] = self.evaluator.evaluate(env=self.env, agent=agent, benchmarks=self.wandb_dict['eval_test_benchmarks'], profiler=self.profiler, csv_file=f'{self.my_artifacts_results}/{self.profiler}_test.csv')
        
        # breakpoint()
        if self.trial_id:
            self.send_to_wandb(wandb_run_id=f'{self.wandb_project_url}/{self.trial_id}', wandb_dict=self.wandb_dict, path=self.my_artifacts_results)

    
        print(f'Saved at: {self.my_artifacts_results}')
