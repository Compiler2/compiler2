from ray.rllib.models.tf.fcnet import FullyConnectedNetwork
from ray.rllib.models.torch.torch_modelv2 import TorchModelV2
from ray.rllib.models.torch.fcnet import FullyConnectedNetwork as TorchFC
from ray.rllib.utils.framework import try_import_torch

from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset
from compiler2_service.model.transformer.graphormer_transformer import GraphormerTransformer
from compiler2_service.service_py.utils import from_int64_tensor

import numpy as np
import pickle

from ray.rllib.policy.view_requirement import ViewRequirement


torch, nn = try_import_torch()

class TorchCustomModel(TorchModelV2, nn.Module):
    """Example of a PyTorch custom model that just delegates to a fc-net."""

    def __init__(self, obs_space, action_space, num_outputs, model_config, name):

        # breakpoint()
        TorchModelV2.__init__(
            self, obs_space, action_space, num_outputs, model_config, name
        )
        nn.Module.__init__(self)
        # breakpoint()
        graphormer_config = model_config['custom_model_config']
        # self.device = 'cuda' if torch.cuda.is_available() else 'cpu'
        self.torch_sub_model = GraphormerTransformer(                    
            num_nodes=graphormer_config['num_nodes'],
            num_classes=num_outputs, #action_space.n if "hiddens": []
            dim_model=graphormer_config['dim_model'],
            num_heads=graphormer_config['num_heads'],
            num_encoder_layers=graphormer_config['num_encoder_layers'],
            num_decoder_layers=graphormer_config['num_decoder_layers'],
            dropout_p=graphormer_config['dropout_p'],
        )#.to(self.device)

        self.fc_out = None
        self.use_n_prev_actions = model_config["attention_use_n_prev_actions"]
        # print(self.use_n_prev_actions)
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
        # print(self.device, '_________________________')
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
            int64_tensor = np.array(input_dict['obs'].cpu().numpy(), dtype=np.int64)[:,0,:]
            # if batch_size > 1: breakpoint()

            graphs = np.apply_along_axis(
                lambda row: from_int64_tensor(row), #pickle.loads(row[:row[-1]].astype(np.int8)), 
                axis=1, 
                arr=int64_tensor
            )
            # breakpoint()

            dgl_dataset = GraphormerDGLDataset(graphs=graphs, train_idx=np.arange(batch_size), device=self.device)
            input_obs_dict = dgl_dataset.get_train()['x']
        
        if 'prev_actions' in input_dict:
            # Skip the first time, and rstrip self.prev_actions_num + 1 actions
            if self.prev_actions_num == -1:
                actions = self.get_default_actions(batch_size)
            else:
                actions = input_dict['prev_actions'] [:,-(self.prev_actions_num + 1):] # put offset for Start token
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
        # breakpoint()
        return fc_out, []

    def value_function(self):
        # self.device = next(self.parameters()).device
        # # if self.device.type != 'cpu':
        # #     breakpoint()

        return self.torch_sub_model.value_function()

