# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""Perform a random walk of the action space of a CompilerGym environment.

Example usage:

    # Run a random walk on cBench example program using perf runtime reward.
    $ python random_walk_hpctoolkit.py --env=perf-v0 --walk_count=10 --step_count=6   --data_set=benchmark://poj104-v0 --reward=perf_tensor --observation=perf_tensor

"""
import random
import pdb
import uuid
import os
from compiler2_service.agent_py.datasets import hpctoolkit_dataset

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
flags.DEFINE_string("log_csv", None, "Place where we will log database")

FLAGS = flags.FLAGS




class RandomWalker:
    def __init__(self, env: CompilerEnv, walk_count: int, step_count: int):
        self.env = env
        self.walk_count = walk_count
        self.step_count = step_count        
        self.max_base_opt = 30 # CLANG -O3 has ~150 passes


        self.cur_bench = ""
        self.walk_num = 0
        self.step_num = 0
        self.prev_actions = []
        self.log_list = []


    ####################################################################
    # Auxilary functions
    ####################################################################
    def list2str(self, l):
        return " ".join([ str(x) for x in l ])

    def format_log(self, observation: list, action: str, reward: float):
        return [ self.cur_bench, 
                 self.list2str(observation[0].flat[:]), 
                 action, 
                 self.list2str(self.prev_actions), 
                 str(reward)]

    def log_list_to_str(self, log_list):     
        return [",".join(line)+"\n" for line in log_list ]                 


    def print_log(self, cur_action, reward, produce_effect):
        print(                
                f"\n********** Bench {self.cur_bench} **********\n"
                f"\n\t=== Walk {humanize.intcomma(self.walk_num)} ===\n"                       
                f"\n\t\t>>> Step {humanize.intcomma(self.step_num)} >>>\n"
                f"Prev Actions: %s\n"%",".join(self.prev_actions),
                f"Action:       {cur_action} "
                f"(changed={not produce_effect})\n"
                f"Reward:       {reward}"
            )



    ####################################################################
    # API functions
    ####################################################################
    def walk(self, step_count: int, baseline_opt: list)-> list:
        self.env.send_param("apply_baseline_optimizations", " ".join(baseline_opt))
        self.prev_actions = baseline_opt
        log_list = []
        rewards = []

        for self.step_num in range(1, step_count + 1):

            action_index = self.env.action_space.sample()
            action_str = self.env.action_space.names[action_index]

            with Timer() as step_time:
                observation, reward, done, info = self.env.step(
                action_index, 
                observations=["perf_tensor"],
                rewards=["perf_tensor"]
                )
            
            log_list.append(self.format_log(
                                observation=observation[0].flat[:],
                                action=action_str,
                                reward=reward[0]
                            )
            )
            self.print_log(
                cur_action=action_str,
                reward=reward[0],
                produce_effect=info.get('action_had_no_effect')
            )

            self.prev_actions.append(action_str)
            rewards.append(reward[0])

            if done:
                print("Episode ended by environment")
                break

        return log_list

    # def run_random_walk_parallel(self):
    #     pdb.set_trace()

    #     print(type(self.benchmarks[0]))
    #     Parallel(n_jobs=16)(
    #         delayed(self.run_random_walk)(
    #                 "str(b)") 
    #                 for b in range(4))




    def run_random_walk(self, bench: str) -> None:
        """Perform a random walk of the action space.

        :param env: The environment to use.
        :param step_count: The number of steps to run. This value is an upper bound -
            fewer steps will be performed if any of the actions lead the
            environment to end the episode.
        """
        log = []
        rewards = []
            
        with Timer() as episode_time:
            self.env.reset(bench)
            self.cur_bench = str(bench)       
            self.env.send_param("save_state", "1")

            for self.walk_num in range(1, self.walk_count + 1):
                base_opt_num = random.randrange(self.max_base_opt)
                baseline_opt = random.sample(self.env.action_space.flags, k=base_opt_num)

                new_log_list = self.walk(self.step_count, baseline_opt)
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

import compiler2_service


def register_perf_session():
    from compiler_gym.util.registration import register
    from compiler2_service.paths import COMPILER2_SERVICE_PY
    from compiler2_service.agent_py.rewards import perf_reward
    from compiler_gym.envs.llvm.datasets import CBenchDataset
    from compiler_gym.util.runfiles_path import site_data_path

    register(
        id="perf-v0",
        entry_point="compiler_gym.envs:CompilerEnv",
        kwargs={
            "service": COMPILER2_SERVICE_PY,
            "rewards": [perf_reward.RewardTensor()],
            "datasets": [
                CBenchDataset(site_data_path("llvm-v0")),
                hpctoolkit_dataset.Dataset()    
            ],
        },
    )


def create_log_dir(env_name):
    from datetime import datetime

    root = os.getenv('COMPILER2_ROOT')
    assert root
    timestamp = datetime.now().strftime("%Y-%m-%d/%H-%M-%S")
    log_dir = "/".join([root,"results", "random-"+env_name, timestamp])
    os.makedirs(log_dir)    
    return log_dir

def main(argv):
    """Main entry point."""
    assert len(argv) == 1, f"Unrecognized flags: {argv[1:]}"

    # This two lines try to suppress logging to stdout.
    import logging
    logging.basicConfig(level=logging.CRITICAL, force=True)

    register_perf_session()

    with compiler2_service.make("perf-v0") as env:
        walker = RandomWalker(env=env, 
                    walk_count=max(1, FLAGS.walk_count),
                    step_count=max(1, FLAGS.step_count), 
                    )


        if FLAGS.log_csv:
            log_path = FLAGS.log_csv
        else:
            log_path = create_log_dir(env.spec.id) + "/results.csv"

        with open(log_path, "w") as csv:
            csv.write("BenchmarkName, State, Action, PrevActions, Reward\n")            


            for bench in env.datasets[FLAGS.data_set]:
                
                log_list = walker.run_random_walk(bench)                
                csv.writelines(log_list)

    print("Log is saved here: ", log_path)

if __name__ == "__main__":
    app.run(main)
