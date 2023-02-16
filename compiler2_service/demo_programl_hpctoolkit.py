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
import pickle
from pathlib import Path

import hatchet as ht
import pandas as pd
import torch
import torch.nn as nn

import matplotlib.pyplot as plt


from compiler_gym.util.logging import init_logging
from compiler_gym.service.connection import ServiceError
import compiler2_service


from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset
from compiler2_service.model.transformer.graphormer_encoder import GraphormerEncoder
from compiler2_service.model.transformer.graphormer_transformer import GraphormerTransformer

pd.set_option("display.max_columns", None)

collected_metrics = ["REALTIME (sec) (I)", "REALTIME (sec) (E)"]



def main():
    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.CRITICAL)
    dataset = {'graphs':[], 'labels':[]}

    # Create the environment using the regular gym.make(...) interface.
    # with gym.make("hpctoolkit-llvm-v0") as env:
    with compiler2_service.make("compiler2-v0", datasets=['hpctoolkit_cpu']) as env:

        for benchmark in env.datasets.benchmarks():
            try:
                env.reset(benchmark=benchmark)
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/offsets1")
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/conv2d")
                # env.reset(benchmark="benchmark://hpctoolkit-cpu-v0/nanosleep")
                
            except ServiceError:
                print("AGENT: Timeout Error Reset")


            actions = []
            for i in range(2):
                print("Main: step = ", i)
                try:
                    action = 76
                    while action in [23, 46, 76, 71, 99, 107, 120]:
                        action = env.action_space.sample() 
                    actions.append(action)
                    print(f'{actions[-1]}-----------------------------------------------------')

                    observation, reward, done, info = env.step(
                        action=actions[-1],
                        observation_spaces=["programl_hpctoolkit_pickle"],
                        reward_spaces=["perf_tensor"],
                    )
                except :
                    print("AGENT: Timeout Error Step")
                    continue       
                
                print(reward)
                g = pickle.loads(observation[0])
                # print(g)
                # print(g.ndata['x'])

                dataset["graphs"].append(g)
                dataset["labels"].append(actions)

        
    breakpoint()

    device = "cuda" if torch.cuda.is_available() else "cpu"

    # breakpoint()
    dgl_dataset = GraphormerDGLDataset(graphs=dataset["graphs"], labels=dataset["labels"], device=device)

    model = GraphormerEncoder(
        num_classes=dgl_dataset.num_classes
    ).to(device=device)


    opt = torch.optim.SGD(model.parameters(), lr=0.01)
    loss_fn = nn.CrossEntropyLoss()
    # loss_fn = nn.L1Loss(reduction="sum")


    train_loss_list, validation_loss_list = model.fit(
        opt=opt, 
        loss_fn=loss_fn, 
        epochs=500, 
        train_dataloader=dgl_dataset.get_train(),
        valid_dataloader=dgl_dataset.get_valid()
    )

    plt.plot(train_loss_list, label = "Train loss")
    plt.plot(validation_loss_list, label = "Validation loss")
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.title('Loss vs Epoch')
    plt.legend()
    plt.savefig(Path(__file__).parent/'result.png')


    # breakpoint()
    test_data = dgl_dataset.get_test()
    y_predicted = model.predict(test_data['x'])

    for y_pred, y in zip(y_predicted, test_data['y']):
        print(f'y_pred: {y_pred} -> y: {y.tolist()}')

            

if __name__ == "__main__":
    main()
