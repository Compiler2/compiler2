# Welcome to Compiler2

This tool uses CompilerGym reinforcement learning framework to train neural network for finding performant compiler parameters for CPU optimization

# Start

```shell
git clone https://github.com/Compiler2/compiler2.git && cd compiler2 

# Singularity container
singularity pull --arch amd64 library://dejang96/compiler2/ubuntu:20.04
# if previous command doesn't work try:
# singularity build --remote ./ubuntu.sif ./ubuntu.def

singularity shell -e ./ubuntu_20.04.sif
Singularity> source ./setup.sh
```

# WANDB
Copy your wandb token to $COMPILER2_ROOT/wandb_key.txt. And set WANB_PROJECT_URL environment variable.
```bash
export WANDB_PROJECT_URL=username/project
```

If you change the code in compiler2, make sure you run:
```
python setup.py install
```


# Examples:

```
python  compiler2_service/model/transformer/graphormer_transformer.py

python  compiler2_service/model/transformer/graphormer_encoder.py

python compiler2_service/demo_programl_hpctoolkit.py

```

