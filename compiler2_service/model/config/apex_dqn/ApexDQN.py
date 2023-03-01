import ray
import os

def get_config(profiler, sweep=False):
    hiddens_layers = [10, 15]
    hiddens_width = [500, 1000]
    num_workers = int(ray.cluster_resources()['CPU']  - 10)
    rollout_fragment_length = 5
    return {
        "log_level": "CRITICAL",
        "env": "compiler_gym", 
        "observation_space": profiler,
        "framework": 'torch',
        "model": {
            # '_use_default_native_models': True,
            # '_disable_preprocessor_api': True,
            # '_disable_action_flattening': True,
            'custom_model': 'my_model',
            "custom_model_config": {'a': 4},
            "attention_use_n_prev_actions": 5,
            # "custom_action_dist": None,
            # "vf_share_layers": True,
            # "fcnet_hiddens": ray.tune.choice([ [w] * l for w in hiddens_width for l in hiddens_layers ]) if sweep else [100] * 4,
            # "post_fcnet_hiddens":
            # "fcnet_activation": 
            # "post_fcnet_activation":
            # "no_final_linear":
            # "free_log_std":
        },
        'disable_env_checking': True,
        # Use GPUs iff `RLLIB_NUM_GPUS` env var set to > 0.
        "num_gpus": 1, #torch.cuda.device_count(),
        'num_workers': num_workers,
        "rollout_fragment_length": rollout_fragment_length, 
        "train_batch_size": num_workers * rollout_fragment_length, # train_batch_size == num_workers * rollout_fragment_length
        "explore": True,
        "gamma": ray.tune.uniform(0.9, 0.99) if sweep else 0.95,
        "lr": ray.tune.uniform(1e-6, 1e-8) if sweep else 1e-6,        
    }