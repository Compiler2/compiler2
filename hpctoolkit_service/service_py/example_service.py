#! /usr/bin/env python3
#
#  Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""An example CompilerGym service in python."""

import logging
import os
import pdb
from pathlib import Path
from typing import Dict, List, Optional, Tuple

import benchmark_builder
from profilers import hpctoolkit, perf, programl, programl_hpctoolkit, runtime

import compiler_gym.third_party.llvm as llvm
from compiler_gym import site_data_path
from compiler_gym.service import CompilationSession
from compiler_gym.service.proto import (
    Action,
    ActionSpace,
    Benchmark,
    ChoiceSpace,
    NamedDiscreteSpace,
    Observation,
    ObservationSpace,
    ScalarLimit,
    ScalarRange,
    ScalarRangeList,
    Int64List
)
from compiler_gym.service.runtime import create_and_run_compiler_gym_service
from compiler_gym.util.commands import run_command


import utils
import signal
import sys

import gym

class HPCToolkitCompilationSession(CompilationSession):
    """Represents an instance of an interactive compilation session."""

    compiler_version: str = "1.0.0"

    llvm_env = gym.make("llvm-v0")

    action_spaces = [
        ActionSpace(
            name="llvm-hpctoolkit",
            choice=[
                ChoiceSpace(
                    name="hpctoolkit-optimization_choice",
                    named_discrete_space=NamedDiscreteSpace(
                        # Use all flags from the llvm_env.
                        value=llvm_env.action_space.flags,
                        # Interpret NamedDiscrete as CommandLine.
                        is_commandline=True
                    )
                )
            ],
        ),
    ]

    # A list of observation spaces supported by this service. Each of these
    # ObservationSpace protos describes an observation space.
    observation_spaces = [
        ObservationSpace(
            name="runtime",
            scalar_double_range=ScalarRange(min=ScalarLimit(value=0)),
            deterministic=False,
            platform_dependent=True,
            default_value=Observation(
                scalar_double=0,
            ),
        ),
        ObservationSpace(
            name="perf",
            binary_size_range=ScalarRange(
                min=ScalarLimit(value=0), max=ScalarLimit(value=1e5)
            ),
        ),
        ObservationSpace(
            name="hpctoolkit",
            binary_size_range=ScalarRange(
                min=ScalarLimit(value=0), max=ScalarLimit(value=1e5)
            ),
        ),
        ObservationSpace(
            name="programl",
            binary_size_range=ScalarRange(
                min=ScalarLimit(value=0), max=ScalarLimit(value=1e5)
            ),
        ),
        ObservationSpace(
            name="programl_hpctoolkit",
            binary_size_range=ScalarRange(
                min=ScalarLimit(value=0), max=ScalarLimit(value=1e5)
            ),
        ),
        ObservationSpace(
            name="IsRunnable",
            scalar_int64_range=ScalarRange(min=ScalarLimit(value=0), max=ScalarLimit(value=1)),
            deterministic=True,
            platform_dependent=True,
            default_value=Observation(
                scalar_int64=1,
            ),
        ),
    ]

    def __init__(
        self,
        working_directory: Path,
        action_space: ActionSpace,
        benchmark: Benchmark,  # TODO: Dejan use Benchmark rather than hardcoding benchmark path here!
        timeout_sec: float = 3.0,
    ):
        super().__init__(working_directory, action_space, benchmark)
        logging.info("Started a compilation session for %s", benchmark.uri)
        self._action_space = action_space

        os.chdir(str(working_directory))
        print("\n", str(working_directory), "\n")
        # pdb.set_trace()

        self.timeout_sec = timeout_sec

        self.benchmark = benchmark_builder.BenchmarkBuilder(
            working_directory, benchmark, timeout_sec
        )

        self.runtime = runtime.Profiler(self.benchmark.run_cmd, timeout_sec)
        
        self.perf = perf.Profiler(self.benchmark.run_cmd, timeout_sec)
        
        self.hpctoolkit = hpctoolkit.Profiler(
            self.benchmark.run_cmd, timeout_sec, self.benchmark.llvm_path
        )
        
        self.programl = programl.Profiler(
            self.benchmark.run_cmd, timeout_sec, self.benchmark.llvm_path
        )
        
        self.programl_hpctoolkit = programl_hpctoolkit.Profiler(
            self.benchmark.run_cmd, timeout_sec, self.benchmark.llvm_path
        )

    def apply_action(self, action: Action) -> Tuple[bool, Optional[ActionSpace], bool]:

        num_choices = len(self.action_spaces[0].choice[0].named_discrete_space.value)

        if len(action.choice) != 1:
            raise ValueError("Invalid choice count")

        choice_index = action.choice[0].named_discrete_value_index
        if choice_index < 0 or choice_index >= num_choices:
            raise ValueError("Out-of-range")

        # Compile benchmark with given optimization
        opt = self._action_space.choice[0].named_discrete_space.value[choice_index]
        logging.info(
            "Applying action %d, equivalent command-line arguments: '%s'",
            choice_index,
            opt,
        )

        self.benchmark.apply_action(opt)

        action_had_no_effect = not self.benchmark.is_action_effective

        end_of_session = False
        new_action_space = None
        return (end_of_session, new_action_space, action_had_no_effect)

    def get_observation(self, observation_space: ObservationSpace) -> Observation:
        logging.info("Computing observation from space %s", observation_space.name)

        if observation_space.name == "runtime":
            return self.runtime.get_observation()

        if observation_space.name == "perf":
            return self.perf.get_observation()

        elif observation_space.name == "hpctoolkit":
            return self.hpctoolkit.get_observation()

        elif observation_space.name == "programl":
            return self.programl.get_observation()

        elif observation_space.name == "programl_hpctoolkit":
            return self.programl_hpctoolkit.get_observation()

        elif observation_space.name == "IsRunnable":
            # llvm_autotuners check whether the benchmark is runnable by
            # using IsRunnable observation space.
            # For now, assume that all benchmarks are runnable.
            return Observation(
                scalar_int64=1,
            )

        else:
            raise KeyError(observation_space.name)

    def handle_session_parameter(self, key: str, value: str) -> Optional[str]:
        if key == "hpctoolkit.apply_baseline_optimizations":
            # Apply -O3 optimization, considered as a baseline optimization.
            self.benchmark.apply_action(value)
            return "Succeeded"

    def fork(self):
        # There is a problem with forking.
        from copy import deepcopy
        # FIXME vi3: I don't know what is the proper way to fork a session.
        new_fork = deepcopy(self)
        return new_fork


if __name__ == "__main__":
    create_and_run_compiler_gym_service(HPCToolkitCompilationSession)
