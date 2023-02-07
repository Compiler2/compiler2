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
    def __init__(self, steps=10, reward='perf_tensor', timeout=10, debug=False):
        self.steps = steps
        self.reward = reward
        self.timeout = timeout
        self.debug = "--debug" if debug else ""

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
            df_single = self.evaluate_single_benchmark(env, agent, benchmark, profiler + '_tensor')
            self.df = pd.concat([self.df, df_single], axis=0)


        self.df.to_csv(csv_file)
        self.plot_actions(csv_file)

        return self.df
        

    def  evaluate_single_benchmark(self, env, agent, benchmark, observation):
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
        results['O3_cycles'], results['O3_compile_time'] = [float(x) for x in env.send_param("eval_O3", "").split(',')]
        env.reset(benchmark=benchmark)
        results['actions'], results['cycles'], results['compile_time'] = self.rllib_search(env, agent, observation)
        
        

        return pd.DataFrame.from_dict(results)

    def save(self, path):
        bench_column, search_columns = self.df_gflops.columns[0], self.df_gflops.columns[1:]
        df_gflops_final = self.df_gflops[search_columns].apply(lambda x: x.str[-1]) 
        df_gflops_final.insert(loc=0, column=bench_column, value=self.df_gflops[bench_column])
        df_time_final = self.df_time[search_columns].apply(lambda x: x.str[-1]) 
        df_time_final.insert(loc=0, column=bench_column, value=self.df_time[bench_column])

        self.plot_bars(df_gflops_final, df_time_final, path)
        self.plot_violin(df_gflops_final, path)
        self.plot_actions(path)
        df_all = pd.concat( [self.df_gflops, self.df_time, self.df_actions], axis=1)
        df_all.to_csv(f'{path}.csv')

    
        # for _, row in df_all.iterrows():
        #     print(f"\n_______________________________________________________________")
        #     for x in row: print(x)

       

    def plot_bars(self, df_gflops_final, df_time_final, path):
        if type(df_gflops_final) == None and type(df_time_final) == None:
            return
        fig, axs = plt.subplots(2, 1)
        num_bench = min(len(df_gflops_final), 100)
        figsize = ((num_bench + 1) // 2, 5)
        indexes = sorted(random.sample(range(len(df_gflops_final)), num_bench))

        bench_column, search_columns = df_gflops_final.columns[0], df_gflops_final.columns[1:]

        axs[0] = df_gflops_final.iloc[indexes].plot(x=bench_column, y=search_columns, kind='bar', figsize=figsize, width=0.8, align='edge', ax=axs[0])
        axs[0].minorticks_on()
        axs[0].grid(which='both', axis='y')
        axs[0].set_ylabel('GFLOPS')
        axs[0].legend(title='Searches',loc='center left', bbox_to_anchor=(1, 0.5))

        if type(df_time_final) != None:
            axs[1] = df_time_final.iloc[indexes].plot(x=bench_column, y=search_columns, kind='bar', figsize=figsize, width=0.8, align='edge', ax=axs[1])
            # axs[1].minorticks_on()
            axs[1].grid(which='major', axis='y')
            axs[1].set_ylabel('seconds')
            axs[1].set_yscale('log')
            axs[1].get_legend().remove()


        plt.gca().yaxis.set_major_locator(plt.LogLocator(base=10, numticks=10))
        # plt.gca().yaxis.set_minor_locator(plt.LogLocator(base=10, subs='all', numticks=100))


        fig.suptitle(f'Benchmarks evaluation', fontsize=16)
        fig.autofmt_xdate()
        fig.savefig(f'{path}_bars.png', bbox_inches = 'tight')


    def plot_violin(self, df_gflops_final, path):
        if type(df_gflops_final) == None: 
            return

        # Analyse results
        fig, axs = plt.subplots()
        labels = df_gflops_final.columns[2:]

        # valid_gflops = df_gflops_final[(df_gflops_final != 0).all(1)] # Filter all rows where gflops are 0
        
        axs.violinplot(
            dataset = [ 
                df_gflops_final[col].astype(float) / df_gflops_final['base'].astype(float) 
                for col in labels # no benchmark, base columns
            ],
            showmedians=True
        )
        axs.set_xticks(np.arange(1, len(labels) + 1))
        axs.set_xticklabels(labels)
        axs.set_xlim(0.25, len(labels) + 0.75)
        axs.tick_params(labelrotation=45)

        axs.set_title('Speedup distribution')
        axs.yaxis.grid(True)
        axs.set_xlabel('Models')
        fig.savefig(f"{path}_violin.png", bbox_inches = 'tight')
        axs.tick_params(labelrotation=0)


    def plot_actions(self, csv_path):
        df = pd.read_csv(csv_path)
        if type(df) == None: 
            return

        plot_path = csv_path.rstrip('.csv') + '.png'

        for i, row in df.iterrows():
            benchmark = row['benchmark']
            actions_list = row['actions'].split(',')
            cycles_list = [ float(x) for x in row['cycles'].split(',')]
            compile_list = [ float(x) for x in row['compile_time'].split(',')] 

            plt.plot(compile_list, cycles_list, marker='o', label=benchmark)

            for i, (x, y) in enumerate(zip(compile_list, cycles_list)):
                plt.annotate(actions_list[i], # this is the text
                    (x, y), # these are the coordinates to position the label
                    textcoords="offset points", # how to position the text
                    xytext=(0,10), # distance from text to points (x,y)
                    fontsize=8,
                    ha='center') # horizontal alignment can be left, right or center


            plt.legend(loc='center left', bbox_to_anchor=(1, 0.5))
        
        plt.xlabel('compile_time')
        plt.ylabel('cycles')
        plt.savefig(plot_path, bbox_inches = 'tight')



    def send_to_wandb(self, wandb_run_id, wandb_dict=None, path=None):

        trial_id = wandb_run_id.split('/')[2] # format username/project_name/trial_id

        wandb_dict['group_id'] = trial_id.split('_')[0]
        wandb_dict['run_id'] = trial_id

        api = wandb.Api()
        wandb_run = api.run(trial_id)

        if wandb_dict: # Upload wandb dict
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

    #############################################################
    # Private
    #############################################################
    def base_performance(self, env, eval_mode='loop_nest'):
        start = time.time()
        if eval_mode == 'loop_nest':
            gflops = float(env.observation[self.reward])
        elif eval_mode == 'cost':
            gflops = float(env.observation['gflops_cost'])
        else:
            assert(0), 'base performance eval_mode must be loop_nest or cost'
        return [], [gflops], [time.time() - start]


    def search_performance(self, env, search, base_gflops):
        search_cmd, search_args = search.split(" ", 1)
        env.send_param("reset_agent", '')
        start = time.time()
        res = env.send_param(search_cmd, search_args)
        search_time = time.time() - start
        if res != None:
            search_table = json.loads(res)
            actions, action_cycles, action_compile_time = search_table #list(zip(*search_table)) # unzip search table
            # gflops = self.move_and_eval(env, actions_str=actions)
        else:
            actions, action_cycles, action_compile_time = ["failed"], base_gflops, [search_time]

        return actions, action_cycles, action_compile_time #gflops, search_time, actions


    def rllib_search(self, env, agent, observation):
        actions, action_cycles, action_compile_time = [], [], []
        start_time = time.time()
        obs = env.observation[observation]

        for i in range(self.steps):
            feature_vector = torch.Tensor(obs).unsqueeze(0)
            a_id = agent.compute_action(feature_vector)
            obs, reward, done, info = env.step(a_id)

            action = env.action_space.to_string(a_id)
            actions.append(action)
            action_cycles.append(env.observation['perf_cycles'])
            action_compile_time.append(time.time() - start_time)

        return ', '.join(actions), ', '.join(str(x) for x in action_cycles), ', '.join(str(x) for x in action_compile_time)



    def move_and_eval(self, env, actions_str):
        actions_ids = [ env.action_space.from_string(a) for a in actions_str ]
        env.multistep(actions_ids)
        return float(env.observation[self.reward])
