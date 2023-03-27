#!/bin/bash


# git clone https://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@github.com/Compiler2/compiler2.git

# cd compiler2


mkdir /external && cd /external

git clone https://github.com/spack/spack.git
./spack/bin/spack  clean -m
# ./spack/bin/spack external find python perl git openssl curl coreutils gmake diffutils findutils tar
./spack/bin/spack install --fail-fast hpctoolkit@2020.08.03 ~papi ^binutils@2.35 -y
eval `./spack/bin/spack load --sh   hpctoolkit`  # bash/zsh/sh


#Installing Anaconda 3 
wget https://repo.anaconda.com/miniconda/Miniconda3-py39_23.1.0-1-Linux-x86_64.sh
/bin/bash Miniconda3-py39_23.1.0-1-Linux-x86_64.sh -bfp ./miniconda3

export PATH=./miniconda3/bin:$PATH
export PYTHONPATH=./miniconda3/bin:$PYTHONPATH
. ./miniconda3/etc/profile.d/conda.sh
conda update -n base conda -y
conda clean --all --yes


cd ..

conda env create -f environment.yml
conda activate compiler2

pip install torch-scatter=2.0.9
pip install torch-sparse==0.6.12
pip install algos==0.0.5

python setup.py install

export COMPILER2_ROOT=$PWD