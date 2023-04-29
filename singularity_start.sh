#!/bin/bash

ARGS="$*"
echo $ARGS

if [ "$ARGS" != "" ]; then
    echo "SLURM starts..."
    echo "CMD = $@"
    singularity exec --writable --nv -e $COMPILER2_SANDBOX $@
else
    echo "SHELL starts..."
    singularity shell --writable --nv -e $COMPILER2_SANDBOX
fi






# singularity exec --writable --nv -e $COMPILER2_SANDBOX python compiler2_service/launcher/slurm_launch.py --app=compiler2_service/model/train.py --time=300:00 -nc=80 -ng=2 --profiler=programl --dataset=poj104_small --steps=2 --iter=1 --trainer=dqn.ApexTrainer