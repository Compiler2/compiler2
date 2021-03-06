# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
from time import time


def greedy(env, search_time_seconds: int, **kwargs) -> None:
    """A greedy search policy.

    At each step, the policy evaluates all possible actions and selects the
    action with the highest reward. The search stops when no action produces a
    positive reward.

    :param env: The environment to optimize.
    """

    def eval_action(env, action: int):
        # FIXME vi3: After forking, Compilation session could not be found.
        #   I'm not sure what is the proper way to implement forking logic.
        with env.fork() as fkd:
            fkd.reset()
            res = fkd.step(action)
            print("hack333: Here is the res", res)
            return (res[1], action)

    end_time = time() + search_time_seconds
    while time() < end_time:
        best = max(eval_action(env, action) for action in range(env.action_space.n))
        if best[0] <= 0 or env.step(best[1])[2]:
            return
