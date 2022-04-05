#!/usr/bin/env python3
#
# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

import distutils.util
import setuptools
import os

version = "0.2.3"

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
        "compiler2_service.benchmarks",
        "compiler2_service.benchmarks.cpu-benchmarks",
        "compiler2_service.benchmarks.poj104",
        "compiler2_service.benchmarks.poj104_small",
        "llvm_autotuning",
        "llvm_autotuning.autotuners",
        "llvm_rl",
        "llvm_rl.model",
    ],
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
