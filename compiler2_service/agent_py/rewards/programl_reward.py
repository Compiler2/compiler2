from compiler_gym.spaces import Reward
import pickle



class RewardPickle(Reward):
    """An example reward that uses changes in the "programl" observation value
    to compute incremental reward.
    """

    def __init__(self):
        super().__init__(
            id="programl",
            observation_spaces=["programl"],
            default_value=0,
            default_negates_returns=True,
            deterministic=False,
            platform_dependent=True,
        )
        self.prev_inscnt = 0

    def reset(self, benchmark: str, observation_view):
        print("Reward Programl: reset")
        del benchmark  # unused
        unpickled_cct = observation_view["programl"]
        g = pickle.loads(unpickled_cct)
        self.prev_inscnt = sum( [ 1 for _, x in g.nodes.data() if x['type'] == 1 ])

    def update(self, action, observations, observation_view):
        print("Reward Programl: update")
        del action
        del observation_view
        g = pickle.loads(observations[0])
        new_ins_count = sum( [ 1 for _, x in g.nodes.data() if x['type'] == 1 ])
        
        reward = float(self.prev_inscnt - new_ins_count) / self.prev_inscnt
        self.prev_inscnt = new_ins_count        
        return reward
