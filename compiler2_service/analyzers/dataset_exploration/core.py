import random
import pdb
import uuid
import os
import sys

from compiler2_service.agent_py.datasets import (
    hpctoolkit_dataset,
    poj104_dataset,
    poj104_dataset_small,
)

import humanize
from absl import app, flags

from compiler_gym.envs import CompilerEnv
from compiler_gym.util.flags.benchmark_from_flags import benchmark_from_flags
from compiler_gym.util.flags.env_from_flags import env_from_flags
from compiler_gym.util.shell_format import emph
from compiler_gym.util.timer import Timer

from joblib import Parallel, delayed


class Walker:
    def __init__(
        self, 
        env: CompilerEnv, 
        dataset_uri: str,
        observation: str, 
        reward: str, 
        walk_count: int, 
        step_count: int,
        max_base_opt: int = 30 # CLANG -O3 has ~150 passes
        ):

        ####################################################################
        # Initialization 
        ####################################################################
        self.env = env
        self.observation=observation
        self.reward=reward
        self.walk_count = walk_count
        self.step_count = step_count        
        self.max_base_opt = max_base_opt

        # Internal parameters
        self.dataset_uri = dataset_uri
        self.bench_uri = ""
        self.walk_num = 0
        self.step_num = 0
        self.prev_actions = []
        self.log_list = []


    ####################################################################
    # API Function 
    ####################################################################
    def run(self):
        for bench in self.env.datasets[self.dataset_uri]:                
            self.explore_benchmark(bench)

        # log_path = self.create_log_dir(self.env.spec.id)

        # # Put executed command to the log 
        # with open(log_path + "/command.txt", "w") as txt:
        #     txt.write(" ".join(sys.argv))

        # # Put experiment data to the log 
        # with open(log_path + "/results.csv", "w") as csv:
        #     csv.write("BenchmarkName, State, Action, PrevActions, Reward\n")            

        #     for bench in self.env.datasets[self.dataset_uri]:                
        #         log_list = self.explore_benchmark(bench)                
        #         csv.writelines(log_list)    
        
        # print("Log is saved here: ", log_path)


    def explore_benchmark(self, bench: str) -> None:
        """Perform a random walk of the action space.

        :param env: The environment to use.
        :param step_count: The number of steps to run. This value is an upper bound -
            fewer steps will be performed if any of the actions lead the
            environment to end the episode.
        """
        log = []
        rewards = []
            
        with Timer() as episode_time:
            self.bench_uri = str(bench)       

            for self.walk_num in range(1, self.walk_count + 1):
                base_opt_num = random.randrange(self.max_base_opt)
                baseline_opt = random.sample(self.env.action_space.flags, k=base_opt_num)
                # self.env.send_param("apply_baseline_optimizations", " ".join(baseline_opt))
                self.env.reset(bench)
                self.env.send_param("save_state", "1")

                self.env.multistep(
                    actions=[self.env.action_space.from_string(a) for a in baseline_opt],
                    observation_spaces=[self.observation],
                    reward_spaces=[self.reward]
                    )

                new_log_list = self.walk(self.step_count, baseline_opt)
                if new_log_list == None:
                    continue

                rewards = [ float(x[-1]) for x in new_log_list ]

                log.extend(self.log_list_to_str(new_log_list))
                

                def reward_percentage(reward, rewards):
                    if sum(rewards) == 0:
                        return 0
                    percentage = reward / sum(rewards)
                    return emph(f"{'+' if percentage >= 0 else ''}{percentage:.2%}")
                            

                print(
                    f"\nCompleted {emph(humanize.intcomma(str(self.step_count)))} steps in {episode_time} "
                    f"({self.step_count / episode_time.time:.1f} steps / sec).\n"
                    f"Total reward: {sum(rewards)}\n"
                    f"Max reward:   {max(rewards)} ({reward_percentage(max(rewards), rewards)} "
                    f"at step {humanize.intcomma(rewards.index(max(rewards)) + 1)})"
                )
    
        return log


    ####################################################################
    # Overwrite functions
    ####################################################################
    def walk(self, step_count: int, baseline_opt: list)-> list: 
        print("class Walker: You must implement walk function")
        raise NotImplementedError()


    ####################################################################
    # Auxilary functions
    ####################################################################
    def create_log_dir(self, env_name):
        from datetime import datetime

        root = os.getenv('COMPILER2_ROOT')
        assert root
        timestamp = datetime.now().strftime("%Y-%m-%d/%H-%M-%S")
        log_dir = "/".join([root,"results", "random-"+env_name, timestamp])
        os.makedirs(log_dir)    
        return log_dir
        
    def list2str(self, l):
        return " ".join([ str(x) for x in l ])

    def format_log(self, observation: list, action: str, reward: float):
        return [ self.bench_uri, 
                 self.list2str(observation), 
                 action, 
                 self.list2str(self.prev_actions), 
                 str(reward)]

    def log_list_to_str(self, log_list):     
        return [",".join(line)+"\n" for line in log_list ]                 


    def print_log(self, cur_action, reward, action_had_no_effect, time=""):
        print(                
                f"\n********** Bench {self.bench_uri} **********\n"
                f"\n\t=== Walk {humanize.intcomma(self.walk_num)} ===\n"                       
                f"\n\t\t>>> Step {humanize.intcomma(self.step_num)} >>> {time} \n"
                f"Prev Actions: %s\n"%",".join(self.prev_actions),
                f"Action:       {cur_action} "
                f"(changed={not action_had_no_effect})\n"
                f"Reward:       {reward}"
            )
             