# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python compiler2_service/demo_without_bazel.py

It is equivalent in behavior to the demo.py script in this directory.
"""
import argparse
import logging
import pickle
from pathlib import Path
import torch
import torch.nn as nn
import matplotlib.pyplot as plt
import pandas as pd
from tqdm import tqdm


from compiler_gym.util.logging import init_logging
from compiler_gym.service.connection import ServiceError

import compiler2_service
from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset
from compiler2_service.model.transformer.graphormer_encoder import GraphormerEncoder
from compiler2_service.model.transformer.graphormer_transformer import GraphormerTransformer
from compiler2_service.agent_py.rewards import hpctoolkit_reward
from compiler2_service.service_py.utils import from_int64_tensor




parser = argparse.ArgumentParser()

parser.add_argument(
    '--dataset', type=str, choices=['poj104_small', 'poj104_train', 'poj104_test'], default='poj104_small', help='Dataset for example.'
)
parser.add_argument(
    '--arch', type=str, default='transformer', help='Architecture transformer or encoder.'
)
parser.add_argument(
    "--dim_emb", type=int, default=64, help="Embedding dimension."
)
parser.add_argument(
    "--heads", type=int, default=2, help="Number of heads."
)
parser.add_argument(
    "--encoder_layers", type=int, default=3, help="Number of encoder layers."
)
parser.add_argument(
    "--decoder_layers", type=int, default=3, help="Number of decoder layers."
)
parser.add_argument(
    "--dropout", type=float, default=0.1, help="Dropout."
)
parser.add_argument(
    "--epochs", type=int, default=500, help="Number of decoder layers."
)




def main():
    args = parser.parse_args()
    init_logging(level=logging.CRITICAL)

    reward_metric = hpctoolkit_reward.RewardPickle.reward_metric

    bad_benchmarks = []

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=[args.dataset]) as env:
        benchmarks = sorted(env.datasets.benchmarks())
        action_space = env.action_space.names

        df = pd.DataFrame(columns = benchmarks, index = action_space)
        run = False
        for benchmark in tqdm(benchmarks):
            if benchmark != 'benchmark://poj104_test-v0/79_1216' and run == False:
                continue
            run = True
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", benchmark)
            try:
                env.reset(benchmark=benchmark, timeout=15)                
            except:
                bad_benchmarks.append(benchmark)
                continue


            for action in action_space:     
                print(f'{benchmark}---------{action}')
               
                try:
                    observation, reward, done, info = env.step(
                        action=[action],
                        timeout=1500,
                        reward_spaces=["runtime"],
                    )
                except:
                    bad_benchmarks.append(benchmark)
                    break

                print(f'{benchmark}---------{action}----------{reward[0]}')
                df.loc[action, benchmark] = reward[0]
                if reward[0] > 0:
                    env.reset(benchmark=benchmark, timeout=15)  

            df.to_csv(f'{args.dataset}_rewards.csv')
            with open(f'{args.dataset}_bad_benchmarks.csv', 'a') as f:
                for bb in bad_benchmarks: f.write(f"{bb}\n")

            


if __name__ == "__main__":
    main()
