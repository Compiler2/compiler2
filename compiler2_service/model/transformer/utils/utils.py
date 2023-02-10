import re
import os
import time


import git
import torch


from .constants import BINARIES_PATH, PAD_TOKEN
# from .decoding_utils import greedy_decoding
# from .data_utils import get_masks_and_count_tokens_src


def get_available_binary_name():
    prefix = 'transformer'

    def valid_binary_name(binary_name):
        # First time you see raw f-string? Don't worry the only trick is to double the brackets.
        pattern = re.compile(rf'{prefix}_[0-9]{{6}}\.pth')
        return re.fullmatch(pattern, binary_name) is not None

    # Just list the existing binaries so that we don't overwrite them but write to a new one
    valid_binary_names = list(filter(valid_binary_name, os.listdir(BINARIES_PATH)))
    if len(valid_binary_names) > 0:
        last_binary_name = sorted(valid_binary_names)[-1]
        new_suffix = int(last_binary_name.split('.')[0][-6:]) + 1  # increment by 1
        return f'{prefix}_{str(new_suffix).zfill(6)}.pth'
    else:
        return f'{prefix}_000000.pth'


def get_training_state(training_config, model):
    training_state = {
        # "commit_hash": git.Repo(search_parent_directories=True).head.object.hexsha,
        "dataset_name": training_config['dataset_name'],
        "language_direction": training_config['language_direction'],

        "num_of_epochs": training_config['num_of_epochs'],
        "batch_size": training_config['batch_size'],

        "state_dict": model.state_dict()
    }

    return training_state


def print_model_metadata(training_state):
    header = f'\n{"*"*5} Model training metadata: {"*"*5}'
    print(header)

    for key, value in training_state.items():
        if key != 'state_dict':  # don't print state_dict it's a bunch of numbers...
            if key == 'language_direction':  # convert into human readable format
                value = 'English to German' if value == 'E2G' else 'German to English'
            print(f'{key}: {value}')
    print(f'{"*" * len(header)}\n')
