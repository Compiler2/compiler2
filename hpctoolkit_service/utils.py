from pathlib import Path

import subprocess
from typing import Iterable

import subprocess



hpctoolkit_service_path = Path(__file__).parent.absolute()
compiler_gym_path = hpctoolkit_service_path.parent.parent


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