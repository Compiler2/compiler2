# This script downloads the environment and creates container. 

# This needs to be done only if there is no container available on
# singularity pull --arch amd64 library://dejang_96/compiler2/ubuntu_cuda:20.04

Building container is done in 3 steps, as follows:


# 1. Build container from scratch

```bash
if [ "compiler2" != $(basename $PWD) ]; then
    echo "Make sure you are in COMPILER2_ROOT directory"
    return
fi
COMPILER2_ROOT=$PWD


export COMPILER2_SANDBOX=${1:-"$PWD/create_container/sandbox"}

SANDBOX_NAME=$(basename $COMPILER2_SANDBOX)
SANDBOX_DIR=$(dirname $COMPILER2_SANDBOX)


cd $SANDBOX_DIR

singularity build --remote ./ubuntu_20.04.sif ./ubuntu.def

singularity build --sandbox $SANDBOX_NAME ubuntu_20.04.sif

singularity shell -e --writable ./$SANDBOX_NAME/
```

# 2. Install COMPILER2 enviroment in container

```bash
cp ./environment.yml /opt/
cd /opt/


echo "***************** Install spack *****************"

git clone https://github.com/spack/spack.git
export PATH=/opt/spack/bin:$PATH

spack compiler rm gcc -a
spack compiler find
spack install --fail-fast -y hpctoolkit@2020.08.03 +mpi ^binutils@2.35
eval `spack load --sh   hpctoolkit`  # bash/zsh/sh


echo "***************** Install miniconda *****************"
wget https://repo.anaconda.com/miniconda/Miniconda3-py39_23.1.0-1-Linux-x86_64.sh
/bin/bash Miniconda3-py39_23.1.0-1-Linux-x86_64.sh -bfp ./miniconda3

export PATH=/opt/miniconda3/bin:$PATH
export PYTHONPATH=/opt/miniconda3/bin:$PYTHONPATH

conda env create -f environment.yml
# pip install pip==23.0.1
# pip install torch-sparse==0.6.12


export PATH=/opt/miniconda3/envs/compiler2/bin:$PATH

# Stuff we couldn't install through conda
# pip install torch==1.9.1
# pip install torch-scatter==2.0.9
# pip install torch-sparse==0.6.12

pip install wandb==0.13.10
pip install algos==0.0.5
pip install torch==1.13.0+cu116 --extra-index-url https://download.pytorch.org/whl/cu116
pip install torch-scatter torch-sparse -f https://data.pyg.org/whl/torch-1.13.0+cu116.html
# pip install torch-geometric==2.3.0


cd $COMPILER2_ROOT
python setup.py install

echo "You successfully built the container"
exit #singularity container
```

# 3. Convert sandbox to image file and push it to the cloud
```bash
singularity build ubuntu_20.04.sif ./sandbox/
singularity push -U ubuntu_20.04.sif library://[user_name]/[project_name]/[image_name:version]
```


