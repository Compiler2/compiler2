#!/bin/bash

# AUTOTUNER is one of greedy, random, nevergrad, or opentuner;
# TARGET is one of codesize, binsize, or runtime
OUTPUT=results

AUTOTUNER=greedy
TARGET=perf


export PYTHONPATH=$PWD/compiler2_service:$PYTHONPATH;\
python -m llvm_autotuning.tune -m \
    outputs=$OUTPUT \
    experiment="$AUTOTUNER-${TARGET}" \
    autotuner="$AUTOTUNER" \
    autotuner.optimization_target="$TARGET"




python -m llvm_autotuning.info --log-dirs $OUTPUT --group-by-working-directory