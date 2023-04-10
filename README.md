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

