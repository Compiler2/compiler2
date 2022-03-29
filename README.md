# Welcome to Compiler2

This tool uses CompilerGym reinforcement learning framework to train neural network for finding optimal 
compiler parameters for CPU optimization

# Start

First run setup script for compiling python files into packages, and setting root directory COMPILER2_ROOT to current path.
```
python setup.py install
```

# PoC: Dynamic Features in Compiler Gym

## llvm_autotunig

In order to run predefined autotuners, they must be installed by running
the following command:
```
python -m pip install .
```

An examples of running the autotuner is the following command:
```
python -m llvm_autotuning.tune -m \
    experiment=my-experiment \
    outputs=/tmp/logs \
    executor.cpus=4 \
    num_replicas=1 \
    autotuner=random \
    autotuner.optimization_target=codesize \
    autotuner.search_time_seconds=60

```

See [official Compiler Gym repository](https://github.com/facebookresearch/CompilerGym/tree/development/examples/llvm_autotuning) 
for more information.