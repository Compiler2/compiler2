import ray
import os
# import torch

def get_config(profiler, sweep=False):
    num_workers = 32 #int(ray.cluster_resources()['CPU'] * 0.9 - 1)
    rollout_fragment_length = 5
    return {
        "log_level": "ERROR",
        "env": "compiler_gym", 
        "observation_space": profiler,
        "framework": 'torch',
        "model": {
            # '_use_default_native_models': True,
            # '_disable_preprocessor_api': True,
            # '_disable_action_flattening': True,
            'custom_model': 'my_model',
            "custom_model_config": {'a': 4},
            "attention_use_n_prev_actions": 2,
            # "custom_action_dist": None,
            # "vf_share_layers": True,
            "fcnet_hiddens": [64, 64],
            # "post_fcnet_hiddens":
            # "fcnet_activation": 
            # "post_fcnet_activation":
            # "no_final_linear":
            # "free_log_std":
        },
        # 'disable_env_checking': True,
        # Use GPUs iff `RLLIB_NUM_GPUS` env var set to > 0.
        "num_gpus": 1, #int(ray.cluster_resources()['GPU']), #torch.cuda.device_count(),
        'num_workers': num_workers,
        "rollout_fragment_length": rollout_fragment_length, 
        "sgd_minibatch_size": num_workers, #// 10,
        "train_batch_size": num_workers * rollout_fragment_length, # train_batch_size == num_workers * rollout_fragment_length
        "num_sgd_iter":2, # This is key to be small!!!
        "explore": True,
        "gamma": ray.tune.uniform(0.9, 0.99) if sweep else 0.95,
        "lr": ray.tune.uniform(1e-6, 1e-8) if sweep else 1e-6,        
    }