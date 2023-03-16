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
    device = "cuda" if torch.cuda.is_available() else "cpu"

    # Use debug verbosity to print out extra logging information.
    init_logging(level=logging.CRITICAL)

    reward_metric = hpctoolkit_reward.RewardPickle.reward_metric

    dataset = {'graphs':[], 'labels':[]}

    observation_spaces = 'hpctoolkit' # 'hpctoolkit_pickle'

    bad_banchmarks_file = open('bad_banch.txt', 'w')

    # Create the environment using the regular gym.make(...) interface.
    with compiler2_service.make("compiler2-v0", datasets=['poj104_small']) as env:

        print("Make hpctoolkit")
        for bench in sorted(env.datasets.benchmarks()):
            bench = 'benchmark://poj104_small-v0/1_79'
            print(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>", bench)

            # if not str(bench).endswith('2_5'): continue
            try:                
                env.reset(benchmark=bench, timeout=15)                
            except:# ServiceError:
                print("AGENT: Timeout Error Reset")
                bad_banchmarks_file.write(f'{bench}\n')
                continue
                
            actions = [0]
            for i in range(5):
                print("Main: step = ", i)
                try:
                    action = 1 #env.action_space.sample() 
                    print(f'{action}-----------------------------------------------------')

                    observation, reward, done, info = env.step(
                        action=action,
                        observation_spaces=[observation_spaces],
                        timeout=1500,
                        # reward_spaces=["perf_reward"],
                    )
                except:# ServiceError:
                    pass

                if 'error_type' in info:
                    print(f"AGENT: Error Step {info['error_details']}")
                    bad_banchmarks_file.write(f'{bench}\n')
                    continue
                actions.append(action)

                print(reward)
                print(info)

                if observation_spaces == 'hpctoolkit_pickle':
                    gf = pickle.loads(observation[0])
                    print(gf.tree(metric_column=reward_metric))
                    print(gf.dataframe[[reward_metric, "line", "llvm_ins"]])
                elif observation_spaces == 'hpctoolkit':
                    dgl = from_int64_tensor(observation[0])
                    print(dgl)

                else:
                    dgl = pickle.loads(observation[0])
                    print(dgl)


                dataset["graphs"].append(dgl)
                dataset["labels"].append(actions)
                # breakpoint()

            

    bad_banchmarks_file.close()
    breakpoint()

    dgl_dataset = GraphormerDGLDataset(graphs=dataset["graphs"], labels=dataset["labels"], device=device)
    # with open('dgl.pkl', 'rb') as handle: dgl_dataset = pickle.load(handle)    
    
    train_data = dgl_dataset.get_train()
    valid_data = dgl_dataset.get_valid()
    
    # with open('dgl.pkl', 'wb') as handle: pickle.dump(dgl_dataset, handle, protocol=pickle.HIGHEST_PROTOCOL)


    if args.arch == 'encoder':
        model = GraphormerEncoder(
            num_classes=dgl_dataset.num_classes,
        ).to(device=device)
    elif args.arch == 'transformer':
        model = GraphormerTransformer(
            num_nodes=dgl_dataset.max_nodes,
            num_classes=dgl_dataset.num_classes,
            dim_model=args.dim_emb, 
            num_heads=args.heads, 
            num_encoder_layers=args.encoder_layers, 
            num_decoder_layers=args.decoder_layers, 
            dropout_p=args.dropout
        ).to(device)
    else:
        print('Argument arch must be transformer or encoder')
        exit(1)

    opt = torch.optim.SGD(model.parameters(), lr=0.01)
    loss_fn = nn.CrossEntropyLoss()

    train_loss_list, validation_loss_list = model.fit(
        opt=opt, 
        loss_fn=loss_fn, 
        epochs=args.epochs, 
        train_dataloader=train_data,
        valid_dataloader=valid_data,
    )

    plt.plot(train_loss_list, label = "Train loss")
    plt.plot(validation_loss_list, label = "Validation loss")
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.title('Loss vs Epoch')
    plt.legend()
    plt.savefig(Path(__file__).parent/'result.png')


    def predict(dataset):
        y_predicted = model.predict(dataset['x'])

        for y_pred, y in zip(y_predicted, dataset['y']):
            print(f'y_pred: {y_pred} -> y: {y.tolist()}')

    print('Train data-----------------------------------------------------')
    predict(train_data)

    print('Validation data------------------------------------------------')
    predict(valid_data)
    
    print('Test data------------------------------------------------------')
    predict(dgl_dataset.get_test())            

if __name__ == "__main__":
    main()
