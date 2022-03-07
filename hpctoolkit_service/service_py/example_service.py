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
    SendSessionParameterReply,
)
from compiler_gym.service.runtime import create_and_run_compiler_gym_service


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
    ]

    def __init__(
        self,
        working_directory: Path,
        action_space: ActionSpace,
        benchmark: Benchmark,
    ):
        super().__init__(working_directory, action_space, benchmark)
        logging.info("Started a compilation session for %s", benchmark.uri)
        self._action_space = action_space

        os.chdir(str(working_directory))
        print("\n", str(working_directory), "\n")
        pdb.set_trace()

        self.save_state = False
        self.timeout_sec = 5.0

        self.benchmark = benchmark_builder.BenchmarkBuilder(
            working_directory, benchmark, self.timeout_sec
        )

        self.runtime = runtime.Profiler(self.benchmark.run_cmd, self.timeout_sec)
        
        self.perf = perf.Profiler(self.benchmark.run_cmd, self.timeout_sec)
        
        self.hpctoolkit = hpctoolkit.Profiler(
            self.benchmark.run_cmd, self.timeout_sec, self.benchmark.llvm_path
        )
        
        self.programl = programl.Profiler(
            self.benchmark.run_cmd, self.timeout_sec, self.benchmark.llvm_path
        )
        
        self.programl_hpctoolkit = programl_hpctoolkit.Profiler(
            self.benchmark.run_cmd, self.timeout_sec, self.benchmark.llvm_path
        )

    def handle_session_parameter(self, key: str, value: str) -> Optional[str]:
        """Handle a session parameter send by the frontend.
        Session parameters provide a method to send ad-hoc key-value messages to
        a compilation session through the :meth:`env.send_session_parameter()
        <compiler_gym.envs.CompilerEnv.send_session_parameter>` method. It us up
        to the client/service to agree on a common schema for encoding and
        decoding these parameters.
        Implementing this method is optional.
        :param key: The parameter key.
        :param value: The parameter value.
        :return: A string response message if the parameter was understood. Else
            :code:`None` to indicate that the message could not be interpretted.
        """
        if key == "save_state":
            self.save_state = False if value == "0" else True
        else:
            print("handle_session_parameter Unsuported key:", key)
        return ""

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

        self.benchmark.apply_action(opt=opt, save_state=self.save_state)
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
        else:
            raise KeyError(observation_space.name)


if __name__ == "__main__":
    create_and_run_compiler_gym_service(HPCToolkitCompilationSession)
