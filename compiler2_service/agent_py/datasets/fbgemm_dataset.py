from compiler_gym.datasets import Benchmark, BenchmarkUri, Dataset
from compiler_gym.util.runfiles_path import site_data_path
from compiler_gym.third_party import llvm
from typing import Iterable
import subprocess
from pathlib import Path
import pdb
import sys
import os
import compiler2_service.paths

# from compiler_gym.envs.llvm.llvm_benchmark import get_system_library_flags
from . import benchmark_from_file_contents
from compiler_gym.service.proto import BenchmarkDynamicConfig, Command

BENCHMARKS_PATH = compiler2_service.paths.BENCHMARKS_PATH/"FBGEMM"

class Dataset(Dataset):
    def __init__(self, *args, **kwargs):
        super().__init__(
            name="benchmark://fbgemm-v0",
            license="MIT",
            description="fbgemm",
            site_data_base=site_data_path("example_dataset"),
        )


        self._benchmarks = {}
        self._benchmark_prefix = "benchmark://fbgemm-v0"
        self._cflags = ["-m64", "-mavx2", "-mfma", "-masm=intel"]
        self._build_flags = [
            "-L",
            str(BENCHMARKS_PATH/"build"),
            "-lfbgemm",
            "-L",
            str(BENCHMARKS_PATH/"build/cpuinfo"),
            "-lcpuinfo",
            "-L",
            str(BENCHMARKS_PATH/"build/cpuinfo/deps/clog"),
            "-lclog",
            "-L",
            str(BENCHMARKS_PATH/"build/asmjit"),
            "-lasmjit",
            "-lpthread",
            "-lrt",
        ]
        
        self._init_gemm()
        self._init_conv()

    def _init_gemm(self):
        for size in range(100, 1000, 100):
            benchmark_config = BenchmarkDynamicConfig(
                        build_cmd=Command(
                            # $CC is replaced with clang command,
                            # $IN is replaced with benchmark path
                            # Following are linking flags (only one in this case).
                            argument=["$CXX", "$IN"] + self._build_flags + self._cflags +
                            ["-DGEMM_M={}".format(size), "-DGEMM_N={}".format(size), "-DGEMM_K={}".format(size)],
                            timeout_seconds=300,
                            outfile=["a.out"],
                        ),
                        run_cmd=Command(
                            argument=["./a.out"],
                            timeout_seconds=3000,
                            infile=["a.out"],
                        )
                    )
            example_uri = self._benchmark_prefix + '/gemm/size=' + str(size)
            self._benchmarks[example_uri] = \
                benchmark_from_file_contents(
                    example_uri,
                    self.preprocess(BENCHMARKS_PATH / "compiler_gym/gemm.cc"),
                    benchmark_config) 


    def _init_conv(self):
        for case in range(0, 12):
            benchmark_config = BenchmarkDynamicConfig(
                        build_cmd=Command(
                            # $CC is replaced with clang command,
                            # $IN is replaced with benchmark path
                            # Following are linking flags (only one in this case).
                            argument=["$CXX", "$IN"] + self._build_flags + self._cflags + ["-DCASE={}".format(case)],
                            timeout_seconds=300,
                            outfile=["a.out"],
                        ),
                        run_cmd=Command(
                            argument=["./a.out"],
                            timeout_seconds=3000,
                            infile=["a.out"],
                        )
                    )
            example_uri = self._benchmark_prefix + '/conv/case=' + str(case)
            self._benchmarks[example_uri] = \
                benchmark_from_file_contents(
                    example_uri,
                    self.preprocess(BENCHMARKS_PATH / "compiler_gym/conv.cc"),
                    benchmark_config) 


    @property
    def size(self) -> int:
        return len(self._benchmarks)

    def __len__(self) -> int:
        return self.size
        
    @staticmethod
    def preprocess(src: Path) -> bytes:
        """Front a C source through the compiler frontend."""
        # TODO(github.com/facebookresearch/CompilerGym/issues/325): We can skip
        # this pre-processing, or do it on the service side, once support for
        # multi-file benchmarks lands.
        cmd = [
            "clang++",
            "-E",
            "-o",
            "-",
            "-I",
            str(compiler2_service.paths.BENCHMARKS_PATH/"utils"),
            "-I",
            str(BENCHMARKS_PATH/"include"),
            src,
        ]
        return subprocess.check_output(
            cmd,
            timeout=300,
        )

    def benchmark_uris(self) -> Iterable[str]:
        yield from self._benchmarks.keys()

    def benchmark(self, uri: str) -> Benchmark:
        if uri in self._benchmarks:
            return self._benchmarks[uri]
        else:
            raise LookupError("Unknown program name")

    def benchmark_from_parsed_uri(self, uri: BenchmarkUri) -> Benchmark:
        # TODO: IMPORTANT
        return self.benchmark(str(uri))
