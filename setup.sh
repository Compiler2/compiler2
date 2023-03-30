#!/bin/bash


if [ "compiler2" != $(basename $PWD) ]; then
    echo "Make sure you are in COMPILER2_ROOT directory"
    return
fi

export COMPILER2_ROOT=$PWD
export PATH=/opt/miniconda3/envs/compiler2/bin:$PATH

export PATH=/opt/spack/bin:$PATH
eval `spack load --sh hpctoolkit`  # bash/zsh/sh

export PATH=/opt/miniconda3/bin:$PATH
export PYTHONPATH=/opt/miniconda3/bin:$PYTHONPATH
export PATH=/opt/miniconda3/envs/compiler2/bin:$PATH


python setup.py install 

echo "All set, ready to run the code!"


