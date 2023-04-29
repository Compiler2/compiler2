import wandb
import os
import json
import pandas as pd
from matplotlib import pyplot as plt
import time
from tqdm import tqdm
import random
import numpy as np
import torch
import tempfile
from pathlib import Path
from itertools import cycle, islice


class Evaluator:
    """ Evaluator runs specified searches on full dataset or single benchmark 
    and plots the graphs. This includes greedy, beam searches with loop_nest
    evaluation, as well as searches using policy and cost models.
    """

    #############################################################
    # Public
    #############################################################
    def __init__(self, steps=10, reward='perf', timeout=10, debug=False):
        self.steps = steps
        self.reward = reward
        self.timeout = timeout

        self.my_artifacts = Path(tempfile.mkdtemp()) # Dir to download and upload files. Has start, end subdirectories


    def evaluate(self, env, agent, benchmarks: list, profiler: str, csv_file: str):
        """ Run run and plot searches on benchmarks

        Args:
            env (CompilerGymEnv): made environment
            benchmarks (list): list of string names of benchmarks to evaluate
            searches (list): liset [search_name]. Check handle_session_parameter for format
        """
        
        self.df = pd.DataFrame()
        for benchmark in tqdm(sorted(benchmarks)):
            df_single = self.evaluate_single_benchmark(env, agent, benchmark, profiler) #+ '_tensor')
            self.df = pd.concat([self.df, df_single], axis=0)

        self.df.to_csv(csv_file)
        self.plot_actions(env, csv_file)

        return float(np.mean(self.df['O3_sec'] / self.df['sec'].str.split(',').str[-1].astype(float)))


    def evaluate_single_benchmark(self, env, agent, benchmark, observation):
        """ Run set of searches on single benchmark

        Args:
            env (CompilerGymEnv): environment.
            benchmark (str): benchmark to run.
            searches (list): [search_name]. Check handle_session_parameter for format

        Returns:
            dict, dict, dict: gflops, time, actions dict for each search
        """
        print(benchmark)
        benchmark_name = str(benchmark).split('/')[-1]
        results = {'benchmark': [benchmark_name]}
        env.reset(benchmark=benchmark)
        results['O3_sec'], results['O3_compile_time'] = [float(x) for x in env.send_param("eval_O3", "").split(',')]
        env.reset(benchmark=benchmark)
        results['actions'], results['sec'], results['compile_time'] = self.rllib_search(env, agent, observation)
        
        return pd.DataFrame.from_dict(results)

    def plot_actions(self, env, csv_path):
        df = pd.read_csv(csv_path)
        if type(df) == None: 
            return

        plot_path = csv_path.rstrip('.csv') + '.png'

        for i, row in df.iterrows():
            benchmark = row['benchmark']
            actions_list = row['actions'].replace(' ', '').split(',')
            sec_list = [ float(x) for x in row['sec'].split(',')]
            compile_list = [ float(x) for x in row['compile_time'].split(',')] 

            plt.plot(compile_list, sec_list, marker='o', label=benchmark)

            for i, (x, y) in enumerate(zip(compile_list, sec_list)):
                action_id = str(env.action_space.from_string(actions_list[i]))
                plt.annotate(action_id,
                    (x, y), 
                    textcoords="offset points",
                    xytext=(0,10),
                    fontsize=8,
                    ha='center') 

            plt.legend(loc='center left', bbox_to_anchor=(1, 0.5))
        
        plt.xlabel('compile_time')
        plt.ylabel('seconds')
        plt.savefig(plot_path, bbox_inches = 'tight')


    #############################################################
    # Private
    #############################################################
    def rllib_search(self, env, agent, observation):
        actions, action_sec, action_compile_time = [], [], []
        start_time = time.time()
        obs = env.observation[observation]

        for i in range(self.steps):
            # feature_vector = torch.Tensor(obs).unsqueeze(0)
            a_id = agent.compute_single_action(obs)
            obs, reward, done, info = env.step(a_id)

            action = env.action_space.to_string(a_id)
            actions.append(action)
            action_sec.append(env.observation['runtime'])
            action_compile_time.append(time.time() - start_time)

        return ', '.join(actions), ', '.join(str(x) for x in action_sec), ', '.join(str(x) for x in action_compile_time)