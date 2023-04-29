from compiler_gym.spaces import Reward


class Reward(Reward):
    """An example reward that uses changes in the "runtime" observation value
    to compute incremental reward.
    """

    def __init__(self):
        super().__init__(
            name="runtime",
            observation_spaces=["runtime"],
            default_value=0,
            default_negates_returns=True,
            deterministic=False,
            platform_dependent=True,
        )
        self.prev_runtime = 0

    def reset(self, benchmark: str, observation_view):
        # print("Reward Runtime: reset")
        del benchmark  # unused
        self.prev_runtime = observation_view["runtime"]

    def update(self, action, observations, observation_view):
        # print("Reward Runtime: update")
        new_runtime = observations[0]
        reward = float(self.prev_runtime - new_runtime) / self.prev_runtime
        self.prev_runtime = new_runtime
        print(f'-------------------------------------- Reward: {action} = {reward}')
        del action
        del observation_view
        return reward