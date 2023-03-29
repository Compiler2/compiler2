#!/bin/bash

export COMPILER2_ROOT=$PWD

# Spack and HPCToolkit
export PATH=$COMPILER2_ROOT/spack/bin:$PATH

if [ -d "$COMPILER2_ROOT/spack" ]; then
    echo "Spack exists"
    eval `./spack/bin/spack load --sh   hpctoolkit`  # bash/zsh/sh
else
    echo "Spack does not exist"
    git clone https://github.com/spack/spack.git
    ./spack/bin/spack compiler rm gcc -a
    ./spack/bin/spack compiler find
    ./spack/bin/spack install --fail-fast -y hpctoolkit@2020.08.03 +mpi
    eval `./spack/bin/spack load --sh   hpctoolkit`  # bash/zsh/sh
fi



# Miniconda3
export PATH=$COMPILER2_ROOT/miniconda3/bin:$PATH
export PYTHONPATH=$COMPILER2_ROOT/miniconda3/bin:$PYTHONPATH
export PATH=$COMPILER2_ROOT/miniconda3/envs/compiler2/bin:$PATH

if [ -d "$COMPILER2_ROOT/miniconda3" ]; then
    echo "Miniconda3 exists"
    conda activate compiler2

else
    echo "Miniconda3 does not exist"
    wget https://repo.anaconda.com/miniconda/Miniconda3-py39_23.1.0-1-Linux-x86_64.sh
    /bin/bash Miniconda3-py39_23.1.0-1-Linux-x86_64.sh -bfp ./miniconda3

    conda env create -f environment.yml
    conda activate compiler2

    # Stuff we couldn't install through conda
    pip install torch==1.9.1
    pip install torch-scatter==2.0.9
    pip install torch-sparse==0.6.12
    pip install algos==0.0.5

    # . ./miniconda3/etc/profile.d/conda.sh
    # conda update -n base conda -y
    # conda clean --all --yes
fi


python setup.py install

