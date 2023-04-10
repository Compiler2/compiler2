'''
Usage:
python compiler2_service/launcher/slurm_launch.py -nc=40 -ng=4 -p=interactive -t=30 --profiler=runtime_tensor --trainer=dqn.ApexTrainer --iter=1 --steps=2 --dataset=poj104_small
'''

import argparse
from datetime import datetime
import subprocess
import sys

from pathlib import Path

TEMPLATE_FILE = Path(__file__).parent / "slurm_template.sh"
JOB_NAME = "${JOB_NAME}"
OUTPUT_FILE = "${OUTPUT_FILE}"
ERROR_FILE = "${ERROR_FILE}"
NUM_NODES = "${NUM_NODES}"
GPUS_PER_NODE_OPTION = "${GPUS_PER_NODE_OPTION}"
CPUS_PER_NODE_OPTION = "${CPUS_PER_NODE_OPTION}"
PARTITION_OPTION = "${PARTITION_OPTION}"
QOS_OPTION = "${QOS_OPTION}"
TIME_OPTION = "${TIME_OPTION}"
MAIL_OPTION = "${MAIL_OPTION}"
COMMAND_PLACEHOLDER = "${COMMAND_PLACEHOLDER}"
GIVEN_NODE = "${GIVEN_NODE}"
# MAX_PENDING_TRIALS = "${MAX_PENDING_TRIALS}"

DEFAULT_RUNNER = "specs/runner.yaml"
DEFAULT_RUNNER_RESUME = "specs/runner_resume.yaml"


parser = argparse.ArgumentParser(description="Slurm launcher")
# parser.add_argument(
#     "--exp-files",
#     "-e",
#     nargs="+",
#     type=str,
#     required=True,
#     help="Experiment spec files.",
# )

parser.add_argument(
    '--profiler', type=str, choices=['runtime_tensor', 'hpctoolkit', 'programl', 'programl_hpctoolkit'], default='runtime_tensor', help='Profiler for creating representation.'
)
parser.add_argument(
    '--trainer', type=str, choices=['ppo.PPOTrainer', 'dqn.ApexTrainer', 'apex_dqn.ApexDQN', 'dqn.DQN', 'ppo.PPO', 'impala.Impala'], default='ppo.PPOTrainer', help='The RLlib-registered trainer to use. Store config in rllib/config directory.'
)
parser.add_argument(
    "--wandb_url",  type=str, nargs='?', default='', help="Wandb uri to load policy network."
)
parser.add_argument(
    "--wandb_overwrite", default=False, action="store_true", help="Overwrite wandb results."
)
parser.add_argument(
    "--sweep",  type=int, nargs='?', const=1, default=0, help="Run with wandb sweeps."
)
parser.add_argument(
    "--iter", type=int, default=1, help="Number of iterations to train."
)

parser.add_argument(
    "--steps", type=int, default=10, help="Number of actions to find."
)

parser.add_argument(
    "--dataset",  type=str, nargs='?', help="Dataset to run must be defined in compiler2_service.agent_py.datasets.", required=True
)

parser.add_argument(
    '--network', choices=['TorchActionMaskModel', 'TorchBatchNormModel', 'TorchCustomModel'], default='TorchCustomModel', help='Deep network model.'
)

parser.add_argument(
    "--size", type=int, nargs='?', default=1000000, help="Size of benchmarks to train."
)

parser.add_argument(
    "--eval_size", type=int, default=10, help="Size of benchmarks to evaluate."
)

parser.add_argument(
    "--eval_time", type=int, default=10, help="Time to evaluate single benchmark."
)

parser.add_argument(
    "--stop_reward", type=float, default=1, help="Reward at which we stop training."
)
# SLURM options
parser.add_argument(
    "--resume",
    "-r",
    action="store_true",
    help="Experiment runner spec file.",
)
parser.add_argument(
    "--repo-dir",
    "-d",
    type=str,
    help="The root directory of the repository.",
)
parser.add_argument(
    "--num-nodes", "-n", type=int, default=1, help="Number of nodes to use."
)
parser.add_argument(
    "--jobs", "-j", type=int, default=1, help="Number of nodes to use."
)
parser.add_argument(
    "--node",
    "-w",
    type=str,
    help="The specified nodes to use. Same format as the "
    "return of 'sinfo'. Default: ''.",
)
parser.add_argument(
    "--num-gpus",
    "-ng",
    type=int,
    default=1,
    help="Number of GPUs to use in each node.",
)
parser.add_argument(
    "--num-cpus",
    "-nc",
    type=int,
    help="Number of CPUs to use in each node.",
)
parser.add_argument(
    "--partition",
    "-p",
    type=str,
)
parser.add_argument(
    "--qos",
    "-q",
    type=str,
)
parser.add_argument(
    "--time",
    "-t",
    type=str,
    default="5:00:00",
    help="Set a limit on the total run time of the job allocation. "
    "Acceptable time formats include "
    "`minutes`, `minutes:seconds`, `hours:minutes:seconds`, `days-hours`, "
    "`days-hours:minutes` and `days-hours:minutes:seconds`",
)
parser.add_argument(
    "--mail",
    "-m",
    default="dgrubisic03@gmail.com",
    type=str,
    help="User to receive email notification of state changes.",
)

args = parser.parse_args()
runner_file = DEFAULT_RUNNER_RESUME if args.resume else DEFAULT_RUNNER
repo_dir = (
    Path(__file__).absolute().parents[2]
    if args.repo_dir is None
    else Path(args.repo_dir)
)


def submit_job():
    log_dir = repo_dir / Path("results") / "slurm_runs"

    log_dir.mkdir(parents=True, exist_ok=True)
    print("\ncommand\n")
    command = f"bash singularity_start.sh python -u compiler2_service/model/train.py --ray-mode=non-local --profiler={args.profiler} --trainer={args.trainer} --iter={args.iter} --dataset={args.dataset} --steps={args.steps} --stop_reward={args.stop_reward} --wandb_url={args.wandb_url} --size={args.size} --eval_size={args.eval_size} --eval_time={args.eval_time} --sweep={args.sweep}"
    exp_name = f"run_{datetime.now():%m_%d_%H_%M}"
    job_name = f"job_{exp_name}"

    output_file = log_dir / f"{exp_name}.log"
    error_file = log_dir / f"{exp_name}.err"

    partition_option = (
        f"#SBATCH --partition={args.partition}" if args.partition else ""
    )
    qos_option = f"#SBATCH --qos={args.qos}" if args.qos else ""
    time_option = f"#SBATCH --time={args.time}" if args.time else ""
    mail_option = (
        f"#SBATCH --mail-user={args.mail}\n#SBATCH --mail-type=ALL"
        if args.mail
        else ""
    )
    cpus_option = (
        f"#SBATCH --cpus-per-task={args.num_cpus}" if args.num_cpus else ""
    )
    gpus_option = f"#SBATCH --gres=gpu:{args.num_gpus}" if args.num_gpus else ""
    node_info = f"#SBATCH -w {args.node}" if args.node else "".format()

    # ===== Modified the template script =====
    with open(TEMPLATE_FILE, "r") as f:
        text = f.read()
    text = text.replace(JOB_NAME, job_name)
    text = text.replace(OUTPUT_FILE, str(output_file))
    text = text.replace(ERROR_FILE, str(error_file))
    text = text.replace(NUM_NODES, str(args.num_nodes))
    text = text.replace(GPUS_PER_NODE_OPTION, gpus_option)
    text = text.replace(CPUS_PER_NODE_OPTION, cpus_option)
    text = text.replace(PARTITION_OPTION, partition_option)
    text = text.replace(QOS_OPTION, qos_option)
    text = text.replace(TIME_OPTION, time_option)
    text = text.replace(MAIL_OPTION, mail_option)
    text = text.replace(COMMAND_PLACEHOLDER, str(command))
    text = text.replace(GIVEN_NODE, node_info)
    text = text.replace(
        "# THIS SCRIPT IS A TEMPLATE!",
        "# THIS FILE IS MODIFIED AUTOMATICALLY FROM TEMPLATE AND SHOULD BE "
        "RUNNABLE!",
    )

    # ===== Save the script =====
    script_file = log_dir / f"{exp_name}.sh"
    with script_file.open(mode="w") as f:
        f.write(text)


    # ===== Submit the job =====
    print("Starting to submit job!")
    subprocess.Popen(["sbatch", "-D", str(repo_dir), str(script_file)])
    print(f'Job submitted!')
    print(f'SLURM file is at: {script_file}')
    print(f'Log file is at: {output_file}')
    print(f'Err file is at: {error_file}')




if __name__ == "__main__":
    for i in range(args.jobs):
        submit_job()

# python rllib_agent.py --iter=0 --dataset=mm64_256_16_range  --wandb_url=dejang/loop_tool_agent_split/61e41_00000 --trainer=dqn.ApexTrainer --steps=10  --eval_size=25 --eval_time=60