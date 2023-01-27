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

from compiler_gym.envs.llvm.llvm_benchmark import get_system_library_flags
from . import benchmark_from_file_contents
from compiler_gym.service.proto import BenchmarkDynamicConfig, Command

BENCHMARKS_PATH = compiler2_service.paths.BENCHMARKS_PATH/"csmith_small/code"

class Dataset(Dataset):
    def __init__(self, *args, **kwargs):
        super().__init__(
            name="benchmark://csmith-small-v0",
            license="MIT",
            description="CSmith generated codes 8 groups - branches loops_short loops_long dense_blas_int dense_blas_float sparse_blas_int sparse_blas_float default",
            site_data_base=site_data_path("example_dataset"),
        )

        benchmark_config = BenchmarkDynamicConfig(
                    build_cmd=Command(
                        # $CC is replaced with clang command,
                        # $IN is replaced with benchmark path
                        # Following are linking flags (only one in this case).
                        argument=["$CC", "$IN", "-lm"],
                        timeout_seconds=60,
                        outfile=["a.out"],
                    ),
                    run_cmd=Command(
                        argument=["./a.out"],
                        timeout_seconds=300,
                        infile=["a.out"],
                    )
                )

        self._benchmarks = {}
        benchmark_prefix = "benchmark://csmith-small-v0"

        example_files = os.listdir(BENCHMARKS_PATH)
        for i, example_filename in enumerate(example_files):
            if i == 100: break
            example_uri = benchmark_prefix + '/' + example_filename.rstrip('.c')
            self._benchmarks[example_uri] = \
                benchmark_from_file_contents(
                    example_uri,
                    self.preprocess(BENCHMARKS_PATH / example_filename),
                    benchmark_config
                ) 


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
            str(llvm.clang_path()),
            "-E",
            "-o",
            "-",
            # "-I",
            # str(compiler2_service.paths.BENCHMARKS_PATH/"utils"),
            src,
        ]
        for directory in get_system_library_flags():
            cmd += ["-isystem", str(directory)]
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
