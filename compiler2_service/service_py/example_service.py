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
    ActionSpace,
    Benchmark,
    Space,
    NamedDiscreteSpace,
    Event,
    ObservationSpace,
    DoubleRange,
    SendSessionParameterReply,
    ByteSequenceSpace,
    BytesSequenceSpace,
    Int64Range,
    CommandlineSpace,
    StringSpace,
    DoubleSequenceSpace,
    DoubleBox,
    DoubleTensor
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
            space=Space(
                named_discrete=NamedDiscreteSpace(
                    # Use all flags from the llvm_env.
                    name=llvm_env.action_space.flags,
                    # Interpret NamedDiscrete as CommandLine.
                    # is_commandline=True
                )
            )
        ),
    ]

    # A list of observation spaces supported by this service. Each of these
    # ObservationSpace protos describes an observation space.
    observation_spaces = [
        ObservationSpace(
            name="runtime",
            space=Space(
                # double_value=DoubleRange(min=0),
                # double_sequence=DoubleSequenceSpace(
                #     length_range=Int64Range(min=1, max=1), scalar_range=DoubleRange(min=0, max=10000)
                # )
                double_box=DoubleBox(
                    low=DoubleTensor(shape=[1], value=[0.5]),
                    high=DoubleTensor(shape=[1], value=[2.5]),
                )
            ),
            deterministic=False,
            platform_dependent=True,
            default_observation=Event(
                double_value=0,
            ),
        ),
        ObservationSpace(
            name="perf",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),        
        ObservationSpace(
            name="hpctoolkit",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),
        ObservationSpace(
            name="programl",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),
        ObservationSpace(
            name="programl_hpctoolkit",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),
        # ObservationSpace(
        #     name="IsRunnable",
        #     scalar_int64_range=ScalarRange(min=ScalarLimit(value=0), max=ScalarLimit(value=1)),
        #     deterministic=True,
        #     platform_dependent=True,
        #     default_value=Event(
        #         scalar_int64=1,
        #     ),
        # ),
        ObservationSpace(
            name="BitcodeFile",
            space=Space(
                string_value=StringSpace(length_range=Int64Range(min=0))
            )
            # string_size_range=ScalarRange(
            #     min=ScalarLimit(value=0), max=ScalarLimit(value=1e5)
            # ),
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
        # pdb.set_trace()

        self.save_state = False
        self.timeout_sec = 5.0

        self.benchmark = benchmark_builder.BenchmarkBuilder(
            working_directory, benchmark, self.timeout_sec
        )

        self.profiler = None

    def handle_session_parameter(self, key: str, value: str) -> Optional[str]:
        if key == "save_state":
            self.save_state = False if value == "0" else True
            return "Succeeded"
        elif key == "hpctoolkit.apply_baseline_optimizations":
            self.benchmark.apply_action(value, self.save_state)
            return "Succeeded"

        else:
            print("handle_session_parameter Unsuported key:", key)
            return ""

    def fork(self):
        # There is a problem with forking.
        from copy import deepcopy
        # FIXME vi3: I don't know what is the proper way to fork a session.
        new_fork = deepcopy(self)
        return new_fork

    def apply_action(self, action: Event) -> Tuple[bool, Optional[ActionSpace], bool]:

        num_choices = len(self.action_spaces[0].space.named_discrete.name)

        # Vladimir: I guess choosing multiple actions at once is not possible anymore.
        # if len(action.int64_value) != 1:
        #     raise ValueError("Invalid choice count")

        choice_index = action.int64_value
        if choice_index < 0 or choice_index >= num_choices:
            raise ValueError("Out-of-range")

        # Compile benchmark with given optimization
        opt = self._action_space.space.named_discrete.name[choice_index]
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

    def get_observation(self, observation_space: ObservationSpace) -> Event:
        logging.info("Computing observation from space %s", observation_space.name)

        if self.profiler == None or observation_space.name != self.profiler.name:
            if observation_space.name == "runtime":
                self.profiler = runtime.Profiler(observation_space.name,
                                                 self.benchmark.run_cmd,
                                                 self.timeout_sec)

            elif observation_space.name == "perf":
                self.profiler = perf.Profiler(observation_space.name,
                                              self.benchmark.run_cmd,
                                              self.timeout_sec)

            elif observation_space.name == "hpctoolkit":
                self.profiler = hpctoolkit.Profiler(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec,
                                                    self.benchmark.llvm_path)

            elif observation_space.name == "programl":
                self.profiler = programl.Profiler(observation_space.name,
                                                  self.benchmark.run_cmd,
                                                  self.timeout_sec,
                                                  self.benchmark.llvm_path)

            elif observation_space.name == "programl_hpctoolkit":
                self.profiler = programl_hpctoolkit.Profiler(observation_space.name,
                                                             self.benchmark.run_cmd,
                                                             self.timeout_sec,
                                                             self.benchmark.llvm_path)

            elif observation_space.name == "IsRunnable":
                # llvm_autotuners check whether the benchmark is runnable by
                # using IsRunnable observation space.
                # For now, assume that all benchmarks are runnable.
                return Event(
                    scalar_int64=1,
                )

            elif observation_space.name == "BitcodeFile":
                return self.benchmark.bitcode_file_path(self.save_state)


            else:
                raise KeyError(observation_space.name)

        return self.profiler.get_observation()


if __name__ == "__main__":
    create_and_run_compiler_gym_service(HPCToolkitCompilationSession)
