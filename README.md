# Welcome to Compiler2

This tool uses CompilerGym reinforcement learning framework to train neural network for finding performant compiler parameters for CPU optimization

# Start

```shell
$ git clone https://github.com/Compiler2/compiler2.git && cd compiler2 
```

# Singularity container

We provide option to set COMPILER2_SANDBOX_PATH as argument to download, since you might have memory restriction to compiler2 directory, while you can install sandbox somewhere else such as /scratch where memory restrictions could be relaxed.
```bash
$ source ./create_container/download_container.sh [COMPILER2_SANDBOX_PATH]
```
If previous command doesn't work read: ./create_container/create_container.md

```bash
$ singularity shell --writable --nv -e $COMPILER2_SANDBOX
Singularity> . ./setup.sh
```


If you want to change the code, it is enough to run.

```bash
Singularity> python ./setup.py install
```


# WANDB
Start container. Login to wandb. And set WANB_PROJECT_URL environment variable.
```bash
./singularity_start.sh
wandb login
export WANDB_PROJECT_URL=username/project
```



# Examples:
If you run python compiler2_service/demo_hpctoolkit.py make sure you are running on compute nodes on cluster, since on login nodes you might not have priviledges.

```
python compiler2_service/demo_programl.py

python  compiler2_service/model/transformer/graphormer_transformer.py

python  compiler2_service/model/transformer/graphormer_encoder.py

python compiler2_service/demo_programl_hpctoolkit.py

```



# Programl PCA

Programl enables us to comprehend llvm IR as graph with nodes(instructions or data) and edges(control flow, data flow and function calls). In our dataset this included over 1000 nodes that was too big for training with Graphormer. To make graph manageble, we merge all nodes that belong to same LLVM block to single node putting their encoding of as features of larger, block node. The number of instructions per node is variable in range from few instructions (majority of nodes) up to 200 instructions. Padding these instructions to say 256 and listing them as a feature vector would result in sparse representation. Instead, we create histogram of frequencies of each instruction/data kind (381), and use PCA to reduce dimensions further to 100, 50, 20. Encodings of instructions are listed at compiler2_service/service_py/profilers/programl_encodings.csv.

To train PCA, run:
```
python compiler2_service/service_py/profilers/programl_pca.py
```
This will be used in programl_pca_X observation space, where X is [100, 50, 20].