# Print the versions of the libraries that we are using:
import compiler_gym
import ray

from ray.rllib.agents.ppo import PPOTrainer
from compiler_gym.wrappers import ConstrainedCommandline, TimeLimit
from ray import tune
from itertools import islice
from compiler_gym.wrappers import CycleOverBenchmarks
import compiler2_service

def make_env() -> compiler_gym.envs.CompilerEnv:
    """Make the reinforcement learning environment for this experiment."""
    # We will use LLVM as our base environment. Here we specify the observation
    # space from this paper: https://arxiv.org/pdf/2003.00671.pdf and the total
    # IR instruction count as our reward space, normalized against the
    # performance of LLVM's -Oz policy.
    # env = compiler_gym.make(
    #     "llvm-v0",
    #     observation_space="Autophase",
    #     reward_space="IrInstructionCountOz",
    # )
    env = compiler2_service.make(
        "compiler2-v0",
        observation_space="runtime_tensor",
        reward_space="runtime_tensor"
    )
    # Here we constrain the action space of the environment to use only a
    # handful of command line flags from the full set. We do this to speed up
    # learning by pruning the action space by hand. This also limits the
    # potential improvements that the agent can achieve compared to using the
    # full action space.
    env = ConstrainedCommandline(env, flags=[
        "-break-crit-edges",
        "-early-cse-memssa",
        "-gvn-hoist",
        "-gvn",
        "-instcombine",
        "-instsimplify",
        "-jump-threading",
        "-loop-reduce",
        "-loop-rotate",
        "-loop-versioning",
        "-mem2reg",
        "-newgvn",
        "-reg2mem",
        "-simplifycfg",
        "-sroa",
    ])
    # Finally, we impose a time limit on the environment so that every episode
    # for 5 steps or fewer. This is because the environment's task is continuous
    # and no action is guaranteed to result in a terminal state. Adding a time
    # limit means we don't have to worry about learning when an agent should
    # stop, though again this limits the potential improvements that the agent
    # can achieve compared to using an unbounded maximum episode length.
    env = TimeLimit(env, max_episode_steps=5)
    return env


# Let's create an environment and print a few attributes just to check that we
# have everything set up the way that we would like.
with make_env() as env:
    print("Action space:", env.action_space)
    print("Observation space:", env.observation_space)
    print("Reward space:", env.reward_space)

with make_env() as env:
    # The two datasets we will be using:
    cbench = env.datasets["hpctoolkit-cpu-v0"]
    chstone = env.datasets["chstone-v0"]

    # Each dataset has a `benchmarks()` method that returns an iterator over the
    # benchmarks within the dataset. Here we will use iterator sliceing to grab a
    # handful of benchmarks for training and validation.
    train_benchmarks = list(islice(cbench.benchmarks(), 4))
    train_benchmarks, val_benchmarks = train_benchmarks[:2], train_benchmarks[2:]
    # We will use the entire chstone-v0 dataset for testing.
    test_benchmarks = list(islice(cbench.benchmarks(), 2))

print("Number of benchmarks for training:", len(train_benchmarks))
print("Number of benchmarks for validation:", len(val_benchmarks))
print("Number of benchmarks for testing:", len(test_benchmarks))

def make_training_env(*args) -> compiler_gym.envs.CompilerEnv:
    """Make a reinforcement learning environment that cycles over the
    set of training benchmarks in use.
    """
    del args  # Unused env_config argument passed by ray
    return CycleOverBenchmarks(make_env(), train_benchmarks)


# tune.register_env("compiler_gym", make_training_env)

# Lets cycle through a few calls to reset() to demonstrate that this environment
# selects a new benchmark for each episode.
with make_training_env() as env:
    env.reset()
    print(env.benchmark)
    env.reset()
    print(env.benchmark)
    env.reset()
    print(env.benchmark)

# (Re)Start the ray runtime.
if ray.is_initialized():
    ray.shutdown()
ray.init(include_dashboard=False, ignore_reinit_error=True)

tune.register_env("compiler_gym", make_training_env)

print("hack111:")
# FIXME: Doesn't work
analysis = tune.run(
    PPOTrainer,
    checkpoint_at_end=True,
    stop={
        "episodes_total": 5,
    },
    config={
        "seed": 0xCC,
        "num_workers": 1,
        # Specify the environment to use, where "compiler_gym" is the name we
        # passed to tune.register_env().
        "env": "compiler_gym",
        # Reduce the size of the batch/trajectory lengths to match our short
        # training run.
        "rollout_fragment_length": 5,
        "train_batch_size": 5,
        "sgd_minibatch_size": 5,
    }
)
print("hack222:")

agent = PPOTrainer(
    env="compiler_gym",
    config={
        "num_workers": 1,
        "seed": 0xCC,
        # For inference we disable the stocastic exploration that is used during
        # training.
        "explore": False,
    },
)
print("hack333:")
# We only made a single checkpoint at the end of training, so restore that. In
# practice we may have many checkpoints that we will select from using
# performance on the validation set.
checkpoint = analysis.get_best_checkpoint(
    metric="episode_reward_mean",
    mode="max",
    trial=analysis.trials[0]
)
print("hack444:")
agent.restore(checkpoint)
print("hack555:")

# Lets define a helper function to make it easy to evaluate the agent's
# performance on a set of benchmarks.

def run_agent_on_benchmarks(benchmarks):
    """Run agent on a list of benchmarks and return a list of cumulative rewards."""
    with make_env() as env:
        rewards = []
        for i, benchmark in enumerate(benchmarks, start=1):
            observation, done = env.reset(benchmark=benchmark), False
            while not done:
                action = agent.compute_action(observation)
                observation, _, done, _ = env.step(action)
            rewards.append(env.episode_reward)
            print(f"[{i}/{len(benchmarks)}] {env.state}")

    return rewards


# Evaluate agent performance on the validation set.
val_rewards = run_agent_on_benchmarks(val_benchmarks)

# Evaluate agent performance on the holdout test set.
test_rewards = run_agent_on_benchmarks(test_benchmarks)

print("hack888")
# Finally lets plot our results to see how we did!
from matplotlib import pyplot as plt


def plot_results(x, y, name, ax):
    plt.sca(ax)
    plt.bar(range(len(y)), y)
    plt.ylabel("Reward (higher is better)")
    plt.xticks(range(len(x)), x, rotation=90)
    plt.title(f"Performance on {name} set")


fig, (ax1, ax2) = plt.subplots(1, 2)
fig.set_size_inches(13, 3)
plot_results(val_benchmarks, val_rewards, "val", ax1)
plot_results(test_benchmarks, test_rewards, "test", ax2)
plt.show()

