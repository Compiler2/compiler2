#!/usr/bin/env python3
#
# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

import distutils.util
import setuptools
import os
from pathlib import Path
from distutils.core import setup, Extension
from Cython.Build import cythonize
import numpy


version = "0.0.1"

with open("requirements.txt") as f:
    requirements = [ln.split("#")[0].rstrip() for ln in f.readlines()]

setuptools.setup(
    name="compiler_gym_compiler2",
    version=version,
    description="Example code for CompilerGym",
    author="Facebook AI Research",
    url="https://github.com/facebookresearch/CompilerGym",
    license="MIT",
    install_requires=requirements,
    packages=[
        "compiler2_service",
        "compiler2_service.service_py",
        "compiler2_service.agent_py",
        "compiler2_service.agent_py.datasets",
        "compiler2_service.agent_py.rewards",
        "compiler2_service.analyzers",        
        "compiler2_service.analyzers.dataset_exploration",
        "compiler2_service.benchmarks",
        "compiler2_service.benchmarks.cpu-benchmarks",
        "compiler2_service.model",
        "compiler2_service.model.config",
        "compiler2_service.model.config.apex_dqn",
        "compiler2_service.model.config.dqn",
        "compiler2_service.model.config.impala",
        "compiler2_service.model.config.ppo",
        "compiler2_service.model.action_graphormer",
        "compiler2_service.model.mlp",
        "compiler2_service.model.transformer",
        "compiler2_service.model.transformer.graph_encoder",
        "compiler2_service.launcher",
        # "compiler2_service.benchmarks.poj104_test",
        # "compiler2_service.benchmarks.poj104_training",
        # "compiler2_service.benchmarks.poj104_small",
        "llvm_autotuning",
        "llvm_autotuning.autotuners",
        "llvm_rl",
        "llvm_rl.model",
    ],
    include_dirs=[numpy.get_include()],
    # ext_modules=cythonize(f"{Path(__file__).parent}/compiler2_service/model/transformer/graph_encoder/algos.pyx"),
    ext_modules=cythonize([Extension(name="algos", sources= [ f"{Path(__file__).parent}/compiler2_service/model/transformer/graph_encoder/algos.pyx"]) ]),
    python_requires=">=3.8",
    platforms=[distutils.util.get_platform()],
    zip_safe=False,
)

# vi3: Install by using this command.
# python -m pip install .
# According to this: https://stackoverflow.com/questions/66125129/unknownextra-error-when-installing-via-setup-py-but-not-via-pip


###############################################################
# Set up root directory
###############################################################
print("\nSet root directory: \n\nexport COMPILER2_ROOT=%s"%os.getcwd())
print("\n")
