#!/bin/bash

# AUTOTUNER is one of greedy, random, nevergrad, or opentuner;
# TARGET is one of codesize, binsize, or runtime
OUTPUT=results

AUTOTUNER=nevergrad
TARGET=perf


export PYTHONPATH=$PWD/hpctoolkit_service:$PYTHONPATH;\
python -m llvm_autotuning.tune -m \
    outputs=$OUTPUT \
    experiment="$AUTOTUNER-${TARGET}" \
    autotuner="$AUTOTUNER" \
    autotuner.optimization_target="$TARGET" \
    autotuner.search_time_seconds=10 \
    autotuner.algorithm_config.episode_length=2




python -m llvm_autotuning.info --log-dirs $OUTPUT --group-by-working-directory