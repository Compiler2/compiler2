from pathlib import Path
import os
import subprocess
from typing import Iterable

import subprocess



hpctoolkit_service_path = Path(__file__).parent.absolute()
compiler_gym_path = hpctoolkit_service_path.parent.parent


BENCHMARKS_PATH: Path = Path(
    hpctoolkit_service_path / "benchmarks"
)

HPCTOOLKIT_HEADER: Path = Path(
    hpctoolkit_service_path / "benchmarks/utils/header.h"
)


HPCTOOLKIT_PY_SERVICE_BINARY: Path = Path(
    hpctoolkit_service_path / "service_py/example_service.py"
)
print("What is the path", HPCTOOLKIT_PY_SERVICE_BINARY)
print("Is that file: ", HPCTOOLKIT_PY_SERVICE_BINARY.is_file())
assert HPCTOOLKIT_PY_SERVICE_BINARY.is_file()


assert HPCTOOLKIT_PY_SERVICE_BINARY.is_file(), "Service script not found"



def user_data_path(relpath: str) -> Path:
    """Resolve the path to a runfiles data path.

    No checks are to made to ensure that the path, or the containing directory,
    exist.

    Use environment variable COMPILER_GYM_RUNFILES=/path/to/runfiles if running
    outside of bazel.

    :param relpath: The relative path within the runfiles tree.

    :return: An absolute path.
    """
    forced = os.environ.get("COMPILER_GYM_USER_DATA")

    if forced:
        return Path(forced) / relpath
    else:
        assert forced, "Do:\n export COMPILER_GYM_USER_DATA=/home/dx4/tools/compiler2/hpctoolkit_service/benchmarks"
        return BENCHMARKS_PATH / relpath # This doesn't work for some reason
