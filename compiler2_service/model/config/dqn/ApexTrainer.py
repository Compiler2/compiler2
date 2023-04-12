import ray
import os

def get_config(profiler, sweep=False):
    num_workers = 32 #int(ray.cluster_resources()['CPU'] * 0.9 - 1)
    rollout_fragment_length = 5
    return {
        "log_level": "ERROR",
        "env": "compiler_gym", 
        "observation_space": profiler,
        "framework": 'torch',
        "model": {
            'custom_model': 'my_model',
            "custom_model_config": {
                "num_nodes": 400,
                "dim_model": 64,
                "num_heads": 8,
                "num_encoder_layers": 2, # NOTE: memory sensitive
                "num_decoder_layers": 2, # NOTE: memory sensitive
                "dropout_p": 0.1,
            },
            "attention_use_n_prev_actions": 2,
            "fcnet_hiddens": [256, 256],
        },
        "dueling": True,
        "double_q": True,
        "hiddens": [512],        
        "target_network_update_freq": 20e3,
        "num_envs_per_worker": 1,
        # "compress_observations": True,
        "training_intensity": 1000.0,
        "buffer_size": 2000,
        "learning_starts": 20, # NOTE: Must be low!
        "min_iter_time_s": 1,
        "timesteps_per_iteration": 1, # NOTE: memory sensitive
        # Use GPUs iff `RLLIB_NUM_GPUS` env var set to > 0.
        "num_gpus": 1, #torch.cuda.device_count(),
        'num_workers': num_workers,
        "rollout_fragment_length": rollout_fragment_length, 
        "train_batch_size": num_workers * rollout_fragment_length, # train_batch_size == num_workers * rollout_fragment_length
        # "num_sgd_iter":2,
        "explore": True,
        "gamma": ray.tune.uniform(0.9, 0.99) if sweep else 0.95,
        "lr": ray.tune.uniform(1e-4, 1e-6) if sweep else 1e-4,        
    }