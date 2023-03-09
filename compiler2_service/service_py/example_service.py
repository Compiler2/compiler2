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

import benchmark_builder, search
from profilers import hpctoolkit, perf, programl, programl_hpctoolkit, runtime
import json

import compiler_gym
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
    DictSpace,
    Int64Box,
    Int64Range,
    Int64Tensor,
    CommandlineSpace,
    StringSpace,
    DoubleSequenceSpace,
    DoubleBox,
    DoubleTensor,
    FloatRange
)
from compiler_gym.spaces import Scalar

from compiler_gym.service.runtime import create_and_run_compiler_gym_service

from compiler2_service.service_py.utils import MAX_PICKLE_SIZE
import signal
import sys
import time

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
                    name=['start'] + llvm_env.action_space.flags[:2],
                    # Interpret NamedDiscrete as CommandLine.
                    # is_commandline=True
                )
            )
        ),
    ]
    blacklisted_actions = [
        'start',
        "-insert-gcov-profiling"
    ]

    # A list of observation spaces supported by this service. Each of these
    # ObservationSpace protos describes an observation space.
    observation_spaces = [
        #####################################################################################################
        # DoubleTensor Observation Spaces
        #####################################################################################################        
        # ObservationSpace(
        #     name="runtime_tensor",
        #     space=Space(
        #         double_box=DoubleBox(
        #             low = DoubleTensor(shape = [1], value=[0]),
        #             high = DoubleTensor(shape = [1], value=[float("inf")]),
        #         )
        #     ),
        #     deterministic=False,
        #     platform_dependent=True,
        #     default_observation=Event(
        #         double_value=0,
        #     ),
        # ),

        ObservationSpace( # Note: Be CAREFUL with dimensions, they need to be exactly the same like in perf.py
            name="perf",
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

        ObservationSpace(
            name="perf_cycles",
            space=Space(
                double_value=DoubleRange(min=0),
            ),
            deterministic=False,
            platform_dependent=True,
            default_observation=Event(
                double_value=0            
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
            name="hpctoolkit_hatchet",
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
            name="programl",
            space=Space(
                int64_box=Int64Box(
                    low = Int64Tensor(shape = [1, MAX_PICKLE_SIZE], value=[-sys.maxsize] * MAX_PICKLE_SIZE),
                    high = Int64Tensor(shape = [1, MAX_PICKLE_SIZE], value=[sys.maxsize] * MAX_PICKLE_SIZE),
                )
            ),
            deterministic=True,
            platform_dependent=False,
            default_observation=Event(
                int64_tensor=Int64Tensor(shape = [1, MAX_PICKLE_SIZE], value=[0] * MAX_PICKLE_SIZE),
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
        # breakpoint()

        self.save_state = False
        self.timeout_sec = 30.0

        self.benchmark = benchmark_builder.BenchmarkBuilder(
            working_directory=working_directory, 
            benchmark=benchmark,
            action_space=action_space, 
            timeout_sec=self.timeout_sec
        )
        self.benchmark_search = search.BenchmarkSearch(benchmark=self.benchmark)

        self.profiler = None
        self.prev_observation = {}


    def handle_session_parameter(self, key: str, value: str) -> Optional[str]:
        if key == "save_state":
            self.save_state = False if value == "0" else True
            return "Succeeded"
        elif key == "eval_O3": # value = "walk_count, step_count, search_depth, search_width"
            start = time.time()
            self.benchmark.compile_O3()
            compile_time = time.time() - start

            cycles = perf.CycleProfiler('perf_cycles',
                                    self.benchmark.run_cmd,
                                    self.timeout_sec).get_observation().double_value

            return f'{cycles}, {compile_time}'

        elif key == "search": # value = "walk_count, step_count, search_depth, search_width"
            walk_count, step_count, search_depth, search_width = value.split(',')

            # import cProfile
            # import cProfile, pstats
            # profiler = cProfile.Profile()
            # breakpoint()
            # profiler.enable()
            # breakpoint()

            reward_actions = self.benchmark_search.search(
                int(walk_count), 
                int(step_count),
                search_depth=int(search_depth), 
                search_width=int(search_width),
            )

            # profiler.disable()
        
            # stats = pstats.Stats(profiler).sort_stats('cumtime')
            # stats.print_stats()
            # breakpoint()

            return json.dumps(reward_actions)

        else:
            logging.critical("handle_session_parameter Unsuported key:", key)
            return ""


    def apply_action(self, action: Event) -> Tuple[bool, Optional[ActionSpace], bool]:
        num_choices = len(self.action_spaces[0].space.named_discrete.name)

        choice_index = action.int64_value
        if choice_index < 0 or choice_index >= num_choices:
            breakpoint()
            raise ValueError("Out-of-range")

        # Compile benchmark with given optimization
        opt = self._action_space.space.named_discrete.name[choice_index]
        if opt in self.blacklisted_actions:
            logging.info(f"Info: action {self.blacklisted_actions} is blacklisted")
            action_had_no_effect = True
        else:
            print(
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
        # breakpoint()
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

            elif observation_space.name == "perf":
                self.profiler = perf.ProfilerTensor(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec)                                              
            
            elif observation_space.name == "perf_dict":
                self.profiler = perf.ProfilerDict(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec)                                              
            

            elif observation_space.name == "perf_cycles":
                self.profiler = perf.CycleProfiler(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec)                                              


            elif observation_space.name == "hpctoolkit_hatchet":
                self.profiler = hpctoolkit.Profiler(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec,
                                                    self.benchmark.llvm_path)
            
            elif observation_space.name == "hpctoolkit_pickle":
                self.profiler = hpctoolkit.ProfilerDGL(observation_space.name,
                                                    self.benchmark.run_cmd,
                                                    self.timeout_sec,
                                                    self.benchmark.llvm_path)

            elif observation_space.name == "programl":# "programl_pickle":
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
