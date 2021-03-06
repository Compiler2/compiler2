# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

from ctypes import util
import logging
import os
import pdb
import subprocess
from copy import deepcopy as deepcopy
from pathlib import Path
from signal import Signals
from typing import List, Optional, Tuple
from xmlrpc.client import Boolean

import compiler2_service.paths
import pickle

import compiler_gym.third_party.llvm as llvm
from compiler_gym.service.proto import Benchmark

from compiler_gym.service.proto import (
    Event,
)

# from compiler_gym.util.commands import Popen, run_command
from compiler2_service.service_py.utils import run_command, proto_buff_container_to_list, print_list, run_command_stdout_redirect


def clang_plus_plus_path():
    global _CLANG_PLUS_PLUS_PATH

    path_to_llvm = llvm.download_llvm_files()
    _CLANG_PLUS_PLUS_PATH = str(path_to_llvm / "bin/clang++")
    return _CLANG_PLUS_PLUS_PATH

## Build benchmarks
class BenchmarkBuilder:
    def __init__(self, working_directory: Path, benchmark: Benchmark, timeout_sec: float):
        self.timeout_sec = timeout_sec

        compile_cmd = proto_buff_container_to_list(benchmark.dynamic_config.build_cmd.argument)
        if compile_cmd[0] == "$CC":
            self.clang = str(llvm.clang_path())
            self.llvm_dis = str(llvm.llvm_dis_path())
            self.llc = str(llvm.llc_path())
            self.llvm_diff = str(llvm.llvm_diff_path())
            self.opt = str(llvm.opt_path())
        elif compile_cmd[0] == "$CXX":
            # Keren: Unfortunately, compiler_gym.third_party.llvm does not come with clang++.
            # I am not sure why clang++ is not built by its default settings.
            # So hack here to use clang++ installed by the local system.
            self.clang = "clang++"
            self.llvm_dis = "llvm-dis"
            self.llc = "llc"
            self.llvm_diff = "llvm-diff"
            self.opt = "opt"
        else:
            assert compile_cmd[0], "Unsupported compiler "


        self.working_dir = working_directory
        self.llvm_path = str(self.working_dir / "benchmark.ll")
        self.llvm_path_base = str(self.working_dir / "benchmark_base.ll")
        self.llvm_new_path = str(self.working_dir / "benchmark_new.ll")
        self.llvm_before_path = str(self.working_dir / "benchmark.previous.ll")
        self.bc_path = str(self.working_dir / "benchmark.bc")
        # vi3: Used only if the benchmark is downloaded in .bc format.
        self.bc_download_path = str(self.working_dir / "benchmark-downloaded.bc")
        self.exe_path = str(self.working_dir / "benchmark.exe")

        self.compile_ll = {
            'opt':  [self.opt, "--debugify", "-o", self.bc_path, self.llvm_path],
            # "opt": [self.opt, "-o", self.bc_path, self.llvm_path],
            "cmp": [
                self.clang,
                self.bc_path,
                "-o",
                self.exe_path,
                # "-lm",
            ],  # "-nostartfiles"
            "save": [self.llvm_dis, "-o", self.llvm_new_path, self.bc_path],
        }

        self.pre_run_cmd = []
        self.run_cmd = [self.exe_path]
        self.is_action_effective = None

        self.prepare_benchmark(benchmark)

        self.last_opt_action = None

    def prepare_benchmark(self, benchmark: Benchmark):
        self.save_to_ll(benchmark)
        self.print_header_ll()
        self.set_build_run_cmd(benchmark)
        logging.info("\n compile: ")
        print_list(list(self.compile_ll.values()))
        logging.info("\n pre_run_cmd: ")
        print_list(self.pre_run_cmd)
        logging.info("\n run_cmd: ")
        print_list(self.run_cmd)

        self.execute_pre_run_cmd()
        self.apply_action(opt="-O0", save_state=True)
        self.check_if_terminate()

    def save_to_ll(self, benchmark: Benchmark):

        if benchmark.program.contents.startswith(b"BC"):
            _src_path = str(self.working_dir / "benchmark-downloaded.bc")
            with open(_src_path, "wb") as f:
                f.write(benchmark.program.contents)

            compile_to_ll = [self.llvm_dis, "-o", self.llvm_path, _src_path]

        else:  # If Benchmark is in C
            _src_path = str(self.working_dir / "benchmark.c")
            with open(_src_path, "wb") as f:
                f.write(benchmark.program.contents)

            compile_to_ll = [
                self.clang,
                "-o",
                self.llvm_path,
                "-S",
                "-emit-llvm",
                _src_path,
            ]

        # Transform input code representation to ll format
        run_command(
            compile_to_ll,
            timeout=self.timeout_sec,
        )
        # Save baseline implementation
        run_command(
            ['cp', self.llvm_path, self.llvm_path_base],
            timeout=self.timeout_sec,
        )
    

    def print_header_ll(self):
        with open(self.llvm_path, "r") as f:
            for i in range(2):
                s = f.readline()

            logging.info(s)

    def set_build_run_cmd(self, benchmark):

        if hasattr(benchmark, "dynamic_config"):
            if hasattr(benchmark.dynamic_config, "build_cmd"):
                self.prepare_build_cmd(benchmark.dynamic_config.build_cmd)

            if hasattr(benchmark.dynamic_config, "pre_run_cmd"):
                self.prepare_pre_run_cmd(benchmark.dynamic_config.pre_run_cmd)

            if hasattr(benchmark.dynamic_config, "run_cmd"):
                self.prepare_run_cmd(benchmark.dynamic_config.run_cmd)

    def execute_pre_run_cmd(self):
        # The stdout may be redirected to a file.
        for cmd in self.pre_run_cmd:
            self.pre_run_cmd_with_redirection(cmd, self.working_dir, self.timeout_sec)

    def pre_run_cmd_with_redirection(self, cmd, working_dir, timeout_sec):
        """
        Pre run command might redirect the stdout to a file.
        Try to recignize this.
        """
        # FIXME: This function assumes that the last argument may contain the files
        #   to which the stdout should be redirected.
        if cmd[-1].startswith(">"):
            # Remove '>' from file name and prepend working_dir path
            file_path = working_dir / cmd[-1][1:]
            with open(file_path, "w") as f:
                # Remove the stdout redirection from the cmd.
                cmd = cmd[:-1]
                run_command_stdout_redirect(cmd, timeout=timeout_sec, output_file=f)
        else:
            # Execute the command with no redirection
            run_command(cmd, timeout=timeout_sec)


    def reset_actions(self, ) -> None:
        run_command(
            ['cp', self.llvm_path_base, self.llvm_path],
            timeout=self.timeout_sec,
        )


    def apply_action(self, opt: str, save_state: bool):
        # opt format "-opt1 -opt2 ..."
        compile_ll = deepcopy(self.compile_ll)        
        compile_ll["opt"][1:1] = opt.split()
        self.last_opt_action = opt

        for cmd in compile_ll.values():
            run_command(
                cmd,
                timeout=self.timeout_sec,
            )
    
        self.is_action_effective = self.action_had_effect()

        if save_state:
            run_command(
                ['mv', self.llvm_new_path, self.llvm_path],
                timeout=self.timeout_sec,
            )

    def action_had_effect(self) -> Boolean:
        # compare the IR files to check if the action had an effect
        try:
            subprocess.check_call(
                ['cmp', '--silent', self.llvm_path, self.llvm_new_path],
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
                timeout=self.timeout_sec,
            )
            action_had_effect = False  # cmp return 0 (same files)
        except subprocess.CalledProcessError:
            action_had_effect = True  # cmp return 1 (different files)

        return action_had_effect

    def check_if_terminate(self):
        run_command(
            self.run_cmd,
            timeout=self.timeout_sec,
        )

    # Prepare build, pre_run and run commands
    def prepare_build_cmd(self, build_cmd):
        """
        build_cmd is in the following format.
        build_cmd {
          argument: "$CC"
          argument: "$IN"
          argument: "-lm"
          timeout_seconds: 60
          outfile: "a.out"
        }
        Only argument list with the following form: ["$CC", "$IN", "-lm"] is processed.
        """
        # pdb.set_trace()
        compile_cmd = proto_buff_container_to_list(build_cmd.argument)
        if compile_cmd:
            # Just for the debugging purposes.
            assert compile_cmd[0] == "$CC" or compile_cmd[0] == "$CXX"
            assert compile_cmd[1] == "$IN"
            # Replace $CC with the llvm_clang.
            #compile_cmd[0] = self.clang
            compile_cmd[0] = self.clang
            # Replace $IN with path to the .bc files
            compile_cmd[1] = self.bc_path
            # Append the output file of the compile command.
            compile_cmd.extend(["-o", self.exe_path])
            # Add the last compile command.
            self.compile_ll["cmp"] = compile_cmd

    def prepare_pre_run_cmd(self, pre_run_cmd):
        """
        pre_run_cmd is in the following format
        pre_run_cmd {
          argument: "echo"
          argument: "1"
          argument: ">_finfo_dataset"
          timeout_seconds: 30
        }
        Only argument is considered for now.
        """
        for cmd in pre_run_cmd:
            pre_run_cmd_list = proto_buff_container_to_list(cmd.argument)
            if pre_run_cmd_list:
                # append pre_run_cmd list to the pre_run_cmd
                self.pre_run_cmd.append(pre_run_cmd_list)

    def prepare_run_cmd(self, run_cmd):
        """
        run_cmd is in the following format:
        run_cmd {
          argument: "./a.out"
          argument: "/home/vi3/.local/share/compiler_gym/llvm-v0/cbench-v1-runtime-data/runtime_data/automotive_qsort_data/1.dat"
          timeout_seconds: 300
          infile: "a.out"
          infile: "_finfo_dataset"
          outfile: "sorted_output.dat"
        }
        Only argument is considered for now.
        """
        run_cmd = proto_buff_container_to_list(run_cmd.argument)
        if run_cmd:
            # Just for the debugging purposes.
            assert run_cmd[0] == "./a.out"
            # Replace ./a.out with the exe_path
            run_cmd[0] = self.exe_path
            self.run_cmd = run_cmd

    def bitcode_file_path(self, save_state) -> Event:
        # This function should return the path of the .bc file.
        # Since .ll is always present and .bc might not be, compile it .ll to .bc file,
        # and then return the bc_path.
        # FIXME: I guess memoizing the last action and applying it again would
        #  produce expected .bc file.
        if self.last_opt_action is None:
            self.last_opt_action = "-O0"
        self.apply_action(self.last_opt_action, save_state=save_state)
        return Event(string_value=self.bc_path)

