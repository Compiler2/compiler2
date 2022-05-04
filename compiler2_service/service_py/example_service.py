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
    DoubleTensor,
    FloatRange
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
    blacklisted_actions = [
        "-insert-gcov-profiling"
    ]

    # A list of observation spaces supported by this service. Each of these
    # ObservationSpace protos describes an observation space.
    observation_spaces = [
        #####################################################################################################
        # DoubleTensor Observation Spaces
        #####################################################################################################        
        ObservationSpace(
            name="runtime_tensor",
            space=Space(
                double_box=DoubleBox(
                    low = DoubleTensor(shape = [1], value=[0]),
                    high = DoubleTensor(shape = [1], value=[float("inf")]),
                )
            ),
            deterministic=False,
            platform_dependent=True,
            default_observation=Event(
                double_value=0,
            ),
        ),
        ObservationSpace( # Note: Be CAREFUL with dimensions, they need to be exactly the same like in perf.py
            name="perf_tensor",
            space=Space(
                double_box=DoubleBox(
                    low = DoubleTensor(shape = [1, 28], value=[0] * 28),
                    high = DoubleTensor(shape = [1, 28], value=[float("inf")] * 28),
                )
            ),
            deterministic=False,
            platform_dependent=True,
            default_observation=Event(
                double_tensor=DoubleTensor(shape = [1, 28], value=[0] * 28),
            ),
        ),


        #####################################################################################################
        # ByteSequenceSpace Observation Spaces
        #####################################################################################################
        # ObservationSpace(
        #     name="runtime",
        #     space=Space(
        #         double_value=DoubleRange(min=0),
        #     ),
        #     deterministic=False,
        #     platform_dependent=True,
        #     default_observation=Event(
        #         double_value=0,
        #     ),
        # ),       
        ObservationSpace(
            name="perf_pickle",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),        
        ObservationSpace(
            name="hpctoolkit_pickle",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),
        ObservationSpace(
            name="programl_pickle",
            space=Space(
                byte_sequence=ByteSequenceSpace(length_range=Int64Range(min=0)),
            ),
        ),
        ObservationSpace(
            name="programl_hpctoolkit_pickle",
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
        logging.info(f"Started a compilation session for {benchmark.uri}")
        self._action_space = action_space

        os.chdir(str(working_directory))
        logging.critical(f"\n\nWorking_dir = {str(working_directory)}\n")
        # pdb.set_trace()

        self.save_state = False
        self.timeout_sec = 5.0

        self.benchmark = benchmark_builder.BenchmarkBuilder(
            working_directory, benchmark, self.timeout_sec
        )

        self.profiler = None
        self.prev_observation = {}


    def handle_session_parameter(self, key: str, value: str) -> Optional[str]:
        if key == "save_state":
            self.save_state = False if value == "0" else True
            return "Succeeded"
        else:
            logging.critical("handle_session_parameter Unsuported key:", key)
            return ""


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
        if opt in self.blacklisted_actions:
            logging.info(f"Info: action {self.blacklisted_actions} is blacklisted")
            action_had_no_effect = True
        else:
            logging.info(
                f"Applying action {choice_index}, equivalent command-line arguments: '{opt}'"
            )

            self.benchmark.apply_action(opt=opt, save_state=self.save_state)
            action_had_no_effect = not self.benchmark.is_action_effective            

        logging.info(f"\naction_had_no_effect ({opt}) = {action_had_no_effect}\n")

        if action_had_no_effect == False:
            self.prev_observation = {} # Clear cache if action had an effect

        end_of_session = False
        new_action_space = None
        return (end_of_session, new_action_space, action_had_no_effect)


    def get_observation(self, observation_space: ObservationSpace) -> Event:
        logging.info(f"Computing observation from space {observation_space.name}")  

        if observation_space.name in self.prev_observation:            
            logging.info(f"get_observation: Fast return prev_observation {self.prev_observation}")
            return self.prev_observation[observation_space.name]

        if self.profiler == None or observation_space.name != self.profiler.name:
            if observation_space.name == "runtime":
                self.profiler = runtime.Profiler(observation_space.name,
                                                 self.benchmark.run_cmd,
                                                 self.timeout_sec)

            elif observation_space.name == "runtime_tensor":
                self.profiler = runtime.ProfilerTensor(observation_space.name,
                                                 self.benchmark.run_cmd,
                                                 self.timeout_sec)

            elif observation_space.name == "perf_pickle":
                self.profiler = perf.Profiler(observation_space.name,
                                              self.benchmark.run_cmd,
                                              self.timeout_sec)

            elif observation_space.name == "perf_tensor":
                self.profiler = perf.ProfilerTensor(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec)                                              
                                

            elif observation_space.name == "hpctoolkit_pickle":
                self.profiler = hpctoolkit.Profiler(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec,
                                                    self.benchmark.llvm_path)

            elif observation_space.name == "programl_pickle":
                self.profiler = programl.Profiler(observation_space.name,
                                                  self.benchmark.run_cmd,
                                                  self.timeout_sec,
                                                  self.benchmark.llvm_path)

            elif observation_space.name == "programl_hpctoolkit_pickle":
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

        self.prev_observation[observation_space.name] = self.profiler.get_observation()

        logging.info(f"get_observation: Slow return prev_observation {self.prev_observation}")
        return self.prev_observation[observation_space.name]


    def fork(self):
        # There is a problem with forking.
        from copy import deepcopy
        # FIXME vi3: I don't know what is the proper way to fork a session.
        new_fork = deepcopy(self)
        return new_fork


if __name__ == "__main__":
    create_and_run_compiler_gym_service(HPCToolkitCompilationSession)
