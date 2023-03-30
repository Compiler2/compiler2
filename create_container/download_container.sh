#!/bin/bash
echo "Make sure you are in COMPILER2_ROOT directory"


export COMPILER2_SANDBOX=${1:-"$PWD/create_container/sandbox"}

SANDBOX_NAME=$(basename $COMPILER2_SANDBOX)
SANDBOX_DIR=$(dirname $COMPILER2_SANDBOX)


cd $SANDBOX_DIR

singularity pull --arch amd64 library://dejang96/compiler2/ubuntu:20.04
singularity build --sandbox $SANDBOX_NAME ubuntu_20.04.sif

# singularity build --sandbox $SANDBOX_NAME library://dejang96/compiler2/ubuntu:20.04 # once https://github.com/sylabs/singularity/issues/1497 is resolved
cd ..


# Append the export statement to the bashrc file
echo "export COMPILER2_SANDBOX=$COMPILER2_SANDBOX" >> ~/.bashrc
source ~/.bashrc

echo "COMPILER2_SANDBOX is saved on $COMPILER2_SANDBOX"
echo "For your convenience we export COMPILER2_SANDBOX to ~/.bashrc"