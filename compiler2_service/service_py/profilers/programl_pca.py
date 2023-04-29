# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python compiler2_service/demo_without_bazel.py

It is equivalent in behavior to the demo.py script in this directory.
"""
import logging
import os
import pdb
import pickle
import subprocess
from pathlib import Path
from typing import Iterable

import numpy as np

from compiler_gym.util.logging import init_logging
from compiler_gym.util.registration import register
from compiler_gym.service.connection import ServiceError
import compiler2_service

from compiler2_service.agent_py.datasets import hpctoolkit_cpu
from compiler2_service.service_py.utils import from_int64_tensor
import torch
from sklearn.decomposition import PCA
import pickle
from matplotlib import pyplot as plt

from tqdm import tqdm
import pandas as pd

def visualize(df, pca):
    pca.components_ = pca.components_[:2]
    data_2d = pca.transform(df.to_numpy())
    colors = [int(name.split('/')[-1].split('_')[0]) for name in df.index] # index is benchmark_name

    plt.xlim(-200, 500)
    plt.ylim(-100, 100)

    plt.scatter(data_2d[:,0], data_2d[:,1], c=colors, s=1, cmap='viridis')
    plt.savefig(f'{ os.path.dirname(__file__)}/pca.png')


def main():
    init_logging(level=logging.CRITICAL)

    pca_size = 100
    dataset_size = 1000
    max_encoding = 10000
    inst_freq = torch.zeros((dataset_size, max_encoding)) # Max instruction id is 8565
    benchmarks = [] 
    benchmark_ids = [] 


    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=['poj104_train'], size=dataset_size) as env:

        for bi, benchmark in tqdm(enumerate(env.datasets.benchmarks())):
            try:
                print(bi, benchmark)
                env.reset(benchmark=benchmark, timeout=10000)
            except Exception  as e:
                print("AGENT: Error Reset\n", e)
                with open(f'poj104_train_bad_benchmarks.csv', 'a') as f: f.write(f"{benchmark}\n")
                continue

            try:
                observation, reward, done, info = env.step(
                    action=env.action_space.sample(),
                    observation_spaces=["programl"],
                    reward_spaces=["runtime"],
                    timeout=10000,
                )
            except Exception  as e:
                print("AGENT: Error env.step()\n", e)
                with open(f'poj104_train_bad_benchmarks.csv', 'a') as f: f.write(f"{benchmark}\n")
                continue      
                
            print(reward)
            print(info)
            g = from_int64_tensor(observation[0])
            print(g.nodes())
            # breakpoint()
            hist = torch.bincount(g.ndata['inst'].flatten().to(int))
            inst_freq[bi, :hist.shape[0]] = hist 
            benchmarks.append(str(benchmark))
            benchmark_ids.append(bi)

        with open(f'{ os.path.dirname(__file__)}/programl_encodings.csv', 'r') as reader:
            encodings = torch.tensor([int(x) for x in reader.read().split(',')])


        inst_freq_sampled = inst_freq[benchmark_ids][:, encodings]

        pca = PCA(n_components=pca_size)
        pca.fit(inst_freq_sampled)
        pickle.dump(pca, open(f'{ os.path.dirname(__file__)}/programl_pca.pkl',"wb"))
        # pickle.dump(inst_freq_sampled, open(f'{ os.path.dirname(__file__)}/bench_inst.pkl',"wb"))
        df = pd.DataFrame(inst_freq_sampled.numpy(), index=benchmarks)
        df.to_csv(f'{ os.path.dirname(__file__)}/poj104_pca.csv')

        visualize(df, pca)
        print('Return from programl_pca.py')


if __name__ == "__main__":
    main()
    
