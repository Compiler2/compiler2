import logging
from compiler_gym.spaces import Reward
import pickle



class RewardPickle(Reward):
    def __init__(self):
        super().__init__(
            id="perf_pickle",
            observation_spaces=["perf_pickle"],
            default_value=0,
            default_negates_returns=True,
            deterministic=False,
            platform_dependent=True,
        )
        self.prev_cycles = 0

    def reset(self, benchmark: str, observation_view):
        del benchmark  # unused
        perf_dict = pickle.loads(observation_view["perf_pickle"])
        self.prev_cycles = int(perf_dict["cycles"])
        logging.info(f"Reward Perf: reset reward = {self.prev_cycles}")

    def update(self, action, observations, observation_view):
        perf_dict = pickle.loads(observations[0])
        new_cycles = int(perf_dict["cycles"])

        logging.info(f"Reward Perf: update reward = {new_cycles}")
        reward = float(self.prev_cycles - new_cycles) / self.prev_cycles
        self.prev_cycles = new_cycles
        return reward


class RewardTensor(Reward):
    def __init__(self):
        super().__init__(
            id="perf_tensor",
            observation_spaces=["perf_tensor"],
            default_value=0,
            default_negates_returns=True,
            deterministic=False,
            platform_dependent=True,
        )
        self.prev_cycles = 0

    def reset(self, benchmark: str, observation_view):
        del benchmark  # unused
        self.prev_cycles = observation_view["perf_tensor"].flat[0]
        logging.info(f"Reward Perf: reset reward = {self.prev_cycles}")

    def update(self, action, observations, observation_view):
        new_cycles = observation_view["perf_tensor"].flat[0]

        # print("Reward Perf: update reward = ", new_cycles)
        logging.info(f"REWARD: PrevCycles = {self.prev_cycles}\tNewCycles = {new_cycles}\n")
        reward = float(self.prev_cycles - new_cycles) / self.prev_cycles
        self.prev_cycles = new_cycles
        return reward
