# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""Perform a random walk of the action space of a CompilerGym environment.

Example usage:

    # Run a random walk on cBench example program using perf runtime reward.
    $ python random_walk_hpctoolkit.py --env=perf-v0 --step_min=100 --step_max=100   --benchmark=cbench-v1/qsort --reward=perf

"""
import random
import pdb

import humanize
from absl import app, flags

from compiler_gym.envs import CompilerEnv
from compiler_gym.util.flags.benchmark_from_flags import benchmark_from_flags
from compiler_gym.util.flags.env_from_flags import env_from_flags
from compiler_gym.util.shell_format import emph
from compiler_gym.util.timer import Timer

flags.DEFINE_integer(
    "step_min",
    12,
    "The minimum number of steps. Fewer steps may be performed if the "
    "environment ends the episode early.",
)
flags.DEFINE_integer("step_max", 256, "The maximum number of steps.")
FLAGS = flags.FLAGS


def run_random_walk(env: CompilerEnv, step_count: int) -> None:
    """Perform a random walk of the action space.

    :param env: The environment to use.
    :param step_count: The number of steps to run. This value is an upper bound -
        fewer steps will be performed if any of the actions lead the
        environment to end the episode.
    """
    rewards = []

    step_num = 0
    with Timer() as episode_time:
        env.reset()
        for step_num in range(1, step_count + 1):
            action_index = env.action_space.sample()
            with Timer() as step_time:
                observation, reward, done, info = env.step(action_index)
            print(
                f"\n=== Step {humanize.intcomma(step_num)} ===\n"
                f"Action:       {env.action_space.names[action_index]} "
                f"(changed={not info.get('action_had_no_effect')})\n"
                f"Reward:       {reward}"
            )
            rewards.append(reward)
            if env.observation_space:
                print(f"Observation:\n{observation}")
            print(f"Step time:    {step_time}")
            if done:
                print("Episode ended by environment")
                break

    def reward_percentage(reward, rewards):
        if sum(rewards) == 0:
            return 0
        percentage = reward / sum(rewards)
        return emph(f"{'+' if percentage >= 0 else ''}{percentage:.2%}")

    print(
        f"\nCompleted {emph(humanize.intcomma(step_num))} steps in {episode_time} "
        f"({step_num / episode_time.time:.1f} steps / sec).\n"
        f"Total reward: {sum(rewards)}\n"
        f"Max reward:   {max(rewards)} ({reward_percentage(max(rewards), rewards)} "
        f"at step {humanize.intcomma(rewards.index(max(rewards)) + 1)})"
    )


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
            "rewards": [perf_reward.RewardPickle()],
            "datasets": [
                CBenchDataset(site_data_path("llvm-v0")),
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
    pdb.set_trace()

    # with gym.make("perf-v0") as env:
    with env_from_flags(benchmark=benchmark_from_flags()) as env:
        step_min = min(FLAGS.step_min, FLAGS.step_max)
        step_max = max(FLAGS.step_min, FLAGS.step_max)
        run_random_walk(env=env, step_count=random.randint(step_min, step_max))


if __name__ == "__main__":
    app.run(main)
