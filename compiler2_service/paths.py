from pathlib import Path
import os
import subprocess
from typing import Iterable

import subprocess
import pdb

'''
Purpose:
    In this file we define all paths important for the project.
    To run the project user needs to set COMPILER2_ROOT to the path of compiler2 directory.
    BENCHMARKS_PATH - path to user-defined benchmarks source-code
    COMPILER2_SERVICE_PY - path to compiler2 backend service 
'''

COMPILER2_ROOT = Path(os.environ.get("COMPILER2_ROOT"))
assert COMPILER2_ROOT, "\n\nInitialize envvar COMPILER2_ROOT to path of the compiler2 folder \n"


BENCHMARKS_PATH: Path = Path(
    COMPILER2_ROOT / "compiler2_service/benchmarks"
)


COMPILER2_SERVICE_PY: Path = Path(
    COMPILER2_ROOT / "compiler2_service/service_py/example_service.py"
)

print("What is the path", COMPILER2_SERVICE_PY)
print("Is that file: ", COMPILER2_SERVICE_PY.is_file())
assert COMPILER2_SERVICE_PY.is_file(), "Service script not found"
