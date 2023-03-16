import pdb
import subprocess
import signal

from signal import Signals
# from turtle import pos
from typing import List, Optional, Tuple

from signal import Signals
from subprocess import Popen, run
from typing import List
import logging
import numpy as np
import pickle

from compiler_gym.service.proto import (
    Int64Tensor
)

MAX_PICKLE64_SIZE = int(20e3)
MAX_PICKLE8_SIZE = MAX_PICKLE64_SIZE * 8


def to_int64_tensor(object):
    pickled = pickle.dumps(object)
    base_observation = np.frombuffer(pickled, dtype=np.int8)
    assert(type(base_observation) != type(None))
    
    orig_size = len(base_observation)
    if MAX_PICKLE8_SIZE < orig_size:
        breakpoint()
    padded = np.append(base_observation, np.zeros(MAX_PICKLE8_SIZE - orig_size, dtype=np.int8))
    padded.dtype = np.int64 # shrink to int64 form
    padded[-1] = orig_size
    return Int64Tensor(shape = [ 1, MAX_PICKLE64_SIZE], value=padded)


def from_int64_tensor(int64_tensor):
    tensor = int64_tensor.flatten()
    size = tensor[-1]
    tensor.dtype = np.int8

    try:
        aa = pickle.loads(tensor[:size])
    except:
        breakpoint()
    return aa

def run_command(cmd: List[str], timeout: int, stdout=subprocess.PIPE, stderr=subprocess.PIPE):
    if '<' in cmd:
        pos_less = cmd.index('<')
        assert pos_less + 1 < len(cmd)
        stdin = open(cmd[ pos_less + 1  ])
        cmd_exe = cmd[:pos_less]
    else:
        stdin = None
        cmd_exe = cmd

        
    with Popen(
        cmd_exe, stdin=subprocess.PIPE, stdout=stdout, stderr=stderr, universal_newlines=True
    ) as process:
        if stdin:
            stdin.seek(0)
            try:
                process.stdin.write(stdin.read()) # BUG: Broken Pipe
            except BrokenPipeError:
                pass
        
        stdout, stderr = process.communicate(timeout=timeout)
        # print("ERRORCODE:", process.returncode, "cmd:", cmd)

        if process.returncode:
            returncode = process.returncode
            try:
                # Try and decode the name of a signal. Signal returncodes
                # are negative.
                returncode = f"{returncode} ({Signals(abs(returncode)).name})"
            except ValueError:
                pass
            raise OSError(
                f"Compilation job failed with returncode {returncode}\n"
                f"Command: {' '.join(cmd)}\n"
                f"Stderr: {stderr}"
            )
    print(stdout)
    return stdout



def run_command_stdout_redirect(cmd: List[str], timeout: int, output_file):
    with Popen(
        cmd,
        stdout=output_file,
        stderr=subprocess.PIPE,
        universal_newlines=True,
    ) as process:
        stdout, stderr = process.communicate(timeout=timeout)
        if process.returncode:
            returncode = process.returncode
            try:
                # Try and decode the name of a signal. Signal returncodes
                # are negative.
                returncode = f"{returncode} ({Signals(abs(returncode)).name})"
            except ValueError:
                pass
            raise OSError(
                f"Compilation job failed with returncode {returncode}\n"
                f"Command: {' '.join(cmd)}\n"
                f"Stderr: {stderr.strip()}"
            )
    return stderr

def run_command_get_stderr(cmd: List[str], timeout: int):
    with Popen(
        cmd,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        universal_newlines=True,
    ) as process:
        stdout, stderr = process.communicate(timeout=timeout)
        if process.returncode:
            returncode = process.returncode
            try:
                # Try and decode the name of a signal. Signal returncodes
                # are negative.
                returncode = f"{returncode} ({Signals(abs(returncode)).name})"
            except ValueError:
                pass
            raise OSError(
                f"Compilation job failed with returncode {returncode}\n"
                f"Command: {' '.join(cmd)}\n"
                f"Stderr: {stderr.strip()}"
            )
    return stderr

def proto_buff_container_to_list(container):
    # Copy proto buff container to python list.
    compile_cmd = [el for el in container]
    # NOTE: if run_command function can work with proto buf containers,
    # then generating the list can be omitted. Uncomment the following statement instead.
    # compile_cmd = build_cmd.argument
    return compile_cmd


def print_list(cmd):
    depth = lambda L: isinstance(L, list) and max(map(depth, L)) + 1

    d = 0
    if len(cmd):
        d = depth(cmd)

    if d == 1:
        logging.info(" ".join(cmd))
    elif d == 2:
        for x in cmd:
            logging.info(" ".join(x))
    else:
        logging.info(cmd)

    logging.info("\n")
