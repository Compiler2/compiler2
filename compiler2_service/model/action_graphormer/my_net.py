from ray.rllib.models.tf.fcnet import FullyConnectedNetwork
from ray.rllib.models.torch.torch_modelv2 import TorchModelV2
from ray.rllib.models.torch.fcnet import FullyConnectedNetwork as TorchFC
from ray.rllib.utils.framework import try_import_torch

from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset
from compiler2_service.model.transformer.graphormer_transformer import GraphormerTransformer
import numpy as np
import pickle

from ray.rllib.policy.view_requirement import ViewRequirement


torch, nn = try_import_torch()

class TorchCustomModel(TorchModelV2, nn.Module):
    """Example of a PyTorch custom model that just delegates to a fc-net."""

    def __init__(self, obs_space, action_space, num_outputs, model_config, name):

        TorchModelV2.__init__(
            self, obs_space, action_space, num_outputs, model_config, name
        )
        nn.Module.__init__(self)

        # self.torch_sub_model_default = TorchFC(
        #     obs_space, action_space, num_outputs, model_config, name
        # )

        
        # self.device = 'cuda' if torch.cuda.is_available() else 'cpu'
        self.torch_sub_model = GraphormerTransformer(                    
            num_nodes=800,
            num_classes=256,
            dim_model=64,
            num_heads=8,
            num_encoder_layers=1,
            num_decoder_layers=1,
            dropout_p=0.1,
        )#.to(self.device)

        self.use_n_prev_actions = model_config["attention_use_n_prev_actions"]
        print(self.use_n_prev_actions)
        self.action_dim = 0

        # Add prev-action/reward nodes to input to LSTM.
        if self.use_n_prev_actions:
            self.num_outputs += self.use_n_prev_actions * self.action_dim

        if self.use_n_prev_actions:
            self.view_requirements['prev_actions'] = ViewRequirement(
                'actions',
                space=self.action_space,
                shift="-{}:-1".format(self.use_n_prev_actions),
            )

        self.prev_actions_num = -1

    def get_default_actions(self, batch_size=32):
        return torch.zeros((batch_size, 1), dtype=torch.int64)

    def get_default_input(self, batch_size=32):
        return {
        'attn_bias': torch.zeros((batch_size, 382, 382), dtype=torch.float32, device='cpu'), 
        'attn_edge_type': torch.zeros((batch_size, 381, 381, 1), dtype=torch.int64, device='cpu'), 
        'edge_input': torch.zeros((batch_size, 381, 381, 20, 1), dtype=torch.int64, device='cpu'), 
        'idx': torch.zeros((batch_size), dtype=torch.int64, device='cpu'), 
        'in_degree': torch.zeros((batch_size, 381), dtype=torch.int64, device='cpu'), 
        'out_degree': torch.zeros((batch_size, 381), dtype=torch.int64, device='cpu'), 
        'spatial_pos': torch.zeros((batch_size, 381, 381), dtype=torch.int64, device='cpu'), 
        'x': torch.zeros((batch_size, 381, 1), dtype=torch.int64, device='cpu'), 
        'y': torch.zeros((2, 1), dtype=torch.int64, device='cpu'),
    }

    def forward(self, input_dict, state, seq_lens):
        self.device = next(self.parameters()).device

        # print( '1____________________________', {k: v.shape for k, v in sorted(input_dict['obs'].items())} )
        batch_size = input_dict['obs'].shape[0]
        # print(self.device)
        # print(batch_size, input_dict.keys(), f"Prev_actions: {input_dict['prev_actions'] if  'prev_actions' in input_dict else ''}")

        # breakpoint()
        if not input_dict['obs'].any():
            # print('DEFAULT INPUT *******************')
            input_obs_dict = self.get_default_input(batch_size)
        else:
            # print('REAL INPUT *******************')
            pickle_tensor = np.array(input_dict['obs'].numpy(), dtype=np.int32)
            # if batch_size > 1: breakpoint()

            graphs = np.apply_along_axis(
                lambda row: pickle.loads(row[:row[-1]].astype(np.int8)), 
                axis=1, 
                arr=pickle_tensor
            )

            dgl_dataset = GraphormerDGLDataset(graphs=graphs, train_idx=np.arange(batch_size), device=self.device)
            input_obs_dict = dgl_dataset.get_train()['x']
            
        
        if 'prev_actions' in input_dict:
            # Skip the first time, and rstrip self.prev_actions_num + 1 actions
            if self.prev_actions_num == -1:
                actions = self.get_default_actions(batch_size)
            else:
                actions = input_dict['prev_actions'] [:,-(self.prev_actions_num + 1):] + 1 # put offset for Start token
            self.prev_actions_num += 1
        else: 
            actions = self.get_default_actions(batch_size)
            self.prev_actions_num = -1


        # print(self.prev_actions_num, actions)

        sequence_length = actions.size(1)
        tgt_mask = self.torch_sub_model.get_tgt_mask(sequence_length).to(self.device)
        tgt = actions.to(self.device)
        for k, v in sorted(input_obs_dict.items()): 
            input_obs_dict[k] = v.to(self.device)

        # Standard training except we pass in y_input and tgt_mask
        fc_out = self.torch_sub_model(graphs=input_obs_dict, tgt=tgt, tgt_mask=tgt_mask)

        fc_out = fc_out[0, :, :] # take just first token
        fc_out = fc_out.expand(batch_size, -1)
        
        return fc_out, []

    def value_function(self):
        breakpoint()
        return torch.zeros([31])
        return torch.reshape(self.torch_sub_model_default.value_function(), [-1])



# from gym.spaces import Dict
# from ray.rllib.utils.torch_utils import FLOAT_MIN



# class TorchActionMaskModel(TorchModelV2, nn.Module):
#     """PyTorch version of above ActionMaskingModel."""

#     def __init__(
#         self,
#         obs_space,
#         action_space,
#         num_outputs,
#         model_config,
#         name,
#         **kwargs,
#     ):
#         orig_space = getattr(obs_space, "original_space", obs_space)
#         # assert (
#         #     isinstance(orig_space, Dict)
#         #     and "action_mask" in orig_space.spaces
#         #     and "observations" in orig_space.spaces
#         # )
#         self.action_mask = model_config['custom_model_config']['action_mask']
#         TorchModelV2.__init__(
#             self, obs_space, action_space, num_outputs, model_config, name
#         )
#         nn.Module.__init__(self)

#         self.internal_model = TorchFC(
#             obs_space,
#             action_space,
#             num_outputs,
#             model_config,
#             name + "_internal",
#         )

#         # disable action masking --> will likely lead to invalid actions
#         self.no_masking = False
#         if "no_masking" in model_config["custom_model_config"]:
#             self.no_masking = model_config["custom_model_config"]["no_masking"]


#     def forward(self, input_dict, state, seq_lens):
#         # Extract the available actions tensor from the observation.
#         # action_mask = input_dict["obs"]["action_mask"]

#         # Compute the unmasked logits.
#         logits, _ = self.internal_model({"obs": input_dict["obs"]})

#         # If action masking is disabled, directly return unmasked logits
#         if self.no_masking:
#             return logits, state

#         action_mask = torch.tensor(self.action_mask).to('cuda' if logits.is_cuda else 'cpu')
#         # Convert action_mask into a [0.0 || -inf]-type mask.
#         inf_mask = torch.clamp(torch.log(action_mask), min=FLOAT_MIN)
        
#         masked_logits = logits + inf_mask

#         # Return masked logits.
#         return masked_logits, state


#     def value_function(self):
#         return self.internal_model.value_function()



# import numpy as np
# from ray.rllib.models.torch.misc import (
#     SlimFC,
#     normc_initializer as torch_normc_initializer,
# )
# from ray.rllib.utils.annotations import override
# from ray.rllib.models.modelv2 import ModelV2
# from ray.rllib.policy.sample_batch import SampleBatch
# import ray

# class TorchBatchNormModel(TorchModelV2, nn.Module):
#     """Example of a TorchModelV2 using batch normalization."""

#     capture_index = 0

#     def __init__(
#         self, obs_space, action_space, num_outputs, model_config, name, **kwargs
#     ):
#         TorchModelV2.__init__(
#             self, obs_space, action_space, num_outputs, model_config, name
#         )
#         nn.Module.__init__(self)
#         layers = []
#         prev_layer_size = int(np.product(obs_space.shape))
#         self._logits = None

#         # Create layers 0 to second-last.
#         for size in model_config['fcnet_hiddens']:
#             layers.append(
#                 SlimFC(
#                     in_size=prev_layer_size,
#                     out_size=size,
#                     initializer=torch_normc_initializer(1.0),
#                     activation_fn=nn.ReLU,
#                 )
#             )
#             prev_layer_size = size
#             # Add a batch norm layer.
#             layers.append(nn.BatchNorm1d(prev_layer_size))

#         self._logits = SlimFC(
#             in_size=prev_layer_size,
#             out_size=self.num_outputs,
#             initializer=torch_normc_initializer(0.01),
#             activation_fn=None,
#         )

#         self._value_branch = SlimFC(
#             in_size=prev_layer_size,
#             out_size=1,
#             initializer=torch_normc_initializer(1.0),
#             activation_fn=None,
#         )

#         self._hidden_layers = nn.Sequential(*layers)
#         self._hidden_out = None

#     @override(ModelV2)
#     def forward(self, input_dict, state, seq_lens):
#         if isinstance(input_dict, SampleBatch):
#             is_training = bool(input_dict.is_training)
#         else:
#             is_training = bool(input_dict.get("is_training", False))
#         # Set the correct train-mode for our hidden module (only important
#         # b/c we have some batch-norm layers).
#         self._hidden_layers.train(mode=is_training)
#         self._hidden_out = self._hidden_layers(torch.flatten(input_dict["obs"], start_dim=1))
#         logits = self._logits(self._hidden_out)
#         return logits, []

#     @override(ModelV2)
#     def value_function(self):
#         assert self._hidden_out is not None, "must call forward first!"
#         return torch.reshape(self._value_branch(self._hidden_out), [-1])