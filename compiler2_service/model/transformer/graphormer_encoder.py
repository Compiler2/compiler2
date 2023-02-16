import torch
import torch.nn as nn
import numpy as np
import matplotlib.pyplot as plt
from pathlib import Path


from fairseq import utils
from fairseq.models import FairseqEncoder
from fairseq.modules import (
    LayerNorm,
)


from compiler2_service.model.transformer.graph_encoder.graphormer_graph_encoder import GraphormerGraphEncoder, init_graphormer_params
from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset



class GraphormerEncoder(FairseqEncoder):
    def __init__(self,
            num_classes,
            max_nodes=50,
            num_in_degree=512,
            num_out_degree=512,
            num_edges=1536,
            num_spatial=512,
            num_edge_dis=128,
            edge_type='single_hop',
            multi_hop_max_dist=5,
            encoder_layers=12,
            encoder_embed_dim=768,
            encoder_ffn_embed_dim=768,
            encoder_attention_heads=32,
            dropout=0.0,
            attention_dropout=0.1,
            act_dropout=0.1,
            encoder_normalize_before=True,
            pre_layernorm=False,
            apply_graphormer_init=True,
            activation_fn='gelu',
            share_encoder_input_output_embed=False,
            encoder_lerned_pos=False,
            no_token_positional_embeddings=False,
            max_positions=512,
            remove_head=False,
    ):
        super().__init__(dictionary=None)
        # args = self.parse_args()

        self.max_nodes = max_nodes

        self.graph_encoder = GraphormerGraphEncoder(
            # < for graphormer
            num_atoms=max_nodes,
            num_in_degree=num_in_degree,
            num_out_degree=num_out_degree,
            num_edges=num_edges,
            num_spatial=num_spatial,
            num_edge_dis=num_edge_dis,
            edge_type=edge_type,
            multi_hop_max_dist=multi_hop_max_dist,
            # >
            num_encoder_layers=encoder_layers,
            embedding_dim=encoder_embed_dim,
            ffn_embedding_dim=encoder_ffn_embed_dim,
            num_attention_heads=encoder_attention_heads,
            dropout=dropout,
            attention_dropout=attention_dropout,
            activation_dropout=act_dropout,
            encoder_normalize_before=encoder_normalize_before,
            pre_layernorm=pre_layernorm,
            apply_graphormer_init=apply_graphormer_init,
            activation_fn=activation_fn,
        )
        self.num_classes = num_classes

        if apply_graphormer_init:
            self.apply(init_graphormer_params)

        self.share_input_output_embed = share_encoder_input_output_embed
        self.embed_out = None
        self.lm_output_learned_bias = None

        # # Remove head is set to true during fine-tuning
        self.load_softmax = not remove_head

        self.masked_lm_pooler = nn.Linear(
            encoder_embed_dim, encoder_embed_dim
        )

        self.lm_head_transform_weight = nn.Linear(
            encoder_embed_dim, encoder_embed_dim
        )
        self.activation_fn = utils.get_activation_fn(activation_fn)
        self.layer_norm = LayerNorm(encoder_embed_dim)

        self.lm_output_learned_bias = None
        if self.load_softmax:
            self.lm_output_learned_bias = nn.Parameter(torch.zeros(1))

            if not self.share_input_output_embed:
                self.embed_out = nn.Linear(
                    encoder_embed_dim, num_classes, bias=False
                )
            else:
                raise NotImplementedError

    def reset_output_layer_parameters(self):
        self.lm_output_learned_bias = nn.Parameter(torch.zeros(1))
        if self.embed_out is not None:
            self.embed_out.reset_parameters()

    def forward(self, batched_data, perturb=None, masked_tokens=None, **unused):
        inner_states, graph_rep = self.graph_encoder(
            batched_data,
            perturb=perturb,
        )

        x = inner_states[-1].transpose(0, 1)
        
        # project masked tokens only
        if masked_tokens is not None:
            raise NotImplementedError

        x = self.layer_norm(self.activation_fn(self.lm_head_transform_weight(x)))

        # project back to size of vocabulary
        if self.share_input_output_embed and hasattr(
            self.graph_encoder.embed_tokens, "weight"
        ):
            x = F.linear(x, self.graph_encoder.embed_tokens.weight)
        elif self.embed_out is not None:
            x = self.embed_out(x)
        if self.lm_output_learned_bias is not None:
            x = x + self.lm_output_learned_bias

        return x

    def max_nodes(self):
        """Maximum output length supported by the encoder."""
        return self.max_nodes

    def upgrade_state_dict_named(self, state_dict, name):
        if not self.load_softmax:
            for k in list(state_dict.keys()):
                if "embed_out.weight" in k or "lm_output_learned_bias" in k:
                    del state_dict[k]
        return state_dict
    

    '''
        Train the network
    '''
    def fit(self, opt, loss_fn, train_dataloader, valid_dataloader=None, epochs=4):
        # Used for plotting later on
        train_loss_list, validation_loss_list = [], []
        
        print("Training and validating model")
        for epoch in range(epochs):
            print("-"*25, f"Epoch {epoch + 1}","-"*25)
            
            train_loss = self.train_loop(opt, loss_fn, train_dataloader)
            train_loss_list += [train_loss]    
        
            validation_loss = self.train_loop(opt, loss_fn, valid_dataloader, backprop=False)
            validation_loss_list += [validation_loss]

            print(f"Training loss: {train_loss:.4f}")
            print(f"Validation loss: {validation_loss:.4f}")
            print()
            
        return train_loss_list, validation_loss_list


    def train_loop(self, opt, loss_fn, dataloader, backprop=True):
        if backprop: self.train()
        else: self.eval()

        total_loss = 0
            
        logits = self(dataloader['x'])

        num_token = dataloader['y'].size(1)
        logits = logits[:, :num_token, :]
        logits = logits.permute(0, 2, 1) 
        labels = dataloader['y']

        # breakpoint()
        lname = loss_fn._get_name()
        if lname == 'CrossEntropyLoss':
            loss = loss_fn(logits, labels)
            
        elif lname == 'L1Loss':
            onehot_labels = torch.nn.functional.one_hot(labels, num_classes=self.num_classes)
            loss = loss_fn(logits, onehot_labels)

        if backprop:
            opt.zero_grad()
            loss.backward()
            opt.step()

        total_loss += loss.detach().item()
            
        return total_loss / len(dataloader)


    def predict(self, graphs, SOS_token=0, EOS_token=1, max_len=15):
        device = next(self.parameters()).device

        self.eval()
        num_examples = graphs['idx'].size(0)

        logits = self(graphs)
        logits = logits[:, :max_len, :]
        y_pred = logits.permute(0, 2, 1).argmax(2)

        eos = torch.full((num_examples, 1), EOS_token, dtype=torch.long, device=device)
        y_pred =  torch.cat((y_pred, eos), dim=1)

        return [ [SOS_token] + x[:x.index(EOS_token)+1] for x in  y_pred.tolist() ]




if __name__ == "__main__":
    device = "cuda" if torch.cuda.is_available() else "cpu"

    # breakpoint()
    dgl_dataset = GraphormerDGLDataset(device=device)

    model = GraphormerEncoder(
        num_classes=dgl_dataset.num_classes
    ).to(device=device)


    opt = torch.optim.SGD(model.parameters(), lr=0.01)
    loss_fn = nn.CrossEntropyLoss()
    # loss_fn = nn.L1Loss(reduction="sum")

    # breakpoint()
    train_loss_list, validation_loss_list = model.fit(
        opt=opt, 
        loss_fn=loss_fn, 
        epochs=500, 
        train_dataloader=dgl_dataset.get_train(),
        valid_dataloader=dgl_dataset.get_valid()
    )

    plt.plot(train_loss_list, label = "Train loss")
    plt.plot(validation_loss_list, label = "Validation loss")
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.title('Loss vs Epoch')
    plt.legend()
    plt.savefig(Path(__file__).parent/'result.png')


    # breakpoint()
    test_data = dgl_dataset.get_test()
    y_predicted = model.predict(test_data['x'])

    for y_pred, y in zip(y_predicted, test_data['y']):
        print(f'y_pred: {y_pred} -> y: {y.tolist()}')



    # def parse_args(self):
    #     parser = argparse.ArgumentParser()
    #     """Add model-specific arguments to the parser."""
    #     #---------------------------------EXTRA DEFINED---------------------------------------------------
    #     parser.add_argument(
    #         "--num_classes",
    #         type=int,
    #         default=10,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--max-nodes",
    #         type=int,
    #         default=50,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--num-in-degree",
    #         type=int,
    #         default=512,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--num-out-degree",
    #         type=int,
    #         default=512,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--num-edges",
    #         type=int,
    #         default=1536,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--num-spatial",
    #         type=int,
    #         default=512,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--num-edge-dis",
    #         type=int,
    #         default=128,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--edge-type",
    #         type=str,
    #         default='single_hop',
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--multi-hop-max-dist",
    #         type=int,
    #         default=5,
    #         help="encoder embedding dimension",
    #     )
    #     #---------------------------------INIT DEFINED---------------------------------------------------
    #     # Arguments related to hidden states and self-attention
    #     parser.add_argument(
    #         "--encoder-layers", type=int, default=12, help="num encoder layers"
    #     )        
    #     parser.add_argument(
    #         "--encoder-embed-dim",
    #         type=int,
    #         default=768,
    #         help="encoder embedding dimension",
    #     )
    #     parser.add_argument(
    #         "--encoder-ffn-embed-dim",
    #         type=int,
    #         default=768,
    #         help="encoder embedding dimension for FFN",
    #     )
    #     parser.add_argument(
    #         "--encoder-attention-heads",
    #         type=int,
    #         default=32,
    #         help="num encoder attention heads",
    #     )
    #     parser.add_argument(
    #         "--dropout", type=float, default=0.0, help="dropout probability"
    #     )
    #     parser.add_argument(
    #         "--attention-dropout",
    #         type=float,
    #         default=0.1,
    #         help="dropout probability for" " attention weights",
    #     )
    #     parser.add_argument(
    #         "--act-dropout",
    #         type=float,
    #         default=0.1,
    #         help="dropout probability after" " activation in FFN",
    #     )
    #     parser.add_argument(
    #         "--encoder-normalize-before",
    #         action="store_true",
    #         default=True,
    #         help="apply layernorm before each encoder block",
    #     )
    #     parser.add_argument(
    #         "--pre-layernorm",
    #         action="store_true",
    #         default=False,
    #         help="apply layernorm before self-attention and ffn. Without this, post layernorm will used",
    #     )
    #     parser.add_argument(
    #         "--apply-graphormer-init",
    #         action="store_true",
    #         default=True,
    #         help="use custom param initialization for Graphormer",
    #     )
    #     parser.add_argument(
    #         "--activation-fn",
    #         choices=utils.get_available_activation_fns(),
    #         default='gelu',
    #         help="activation function to use",
    #     )
    #     parser.add_argument(
    #         "--share-encoder-input-output-embed",
    #         action="store_true",
    #         default=False,
    #         help="share encoder input" " and output embeddings",
    #     )
    #     #-----------------------NOT USED-------------------------------------------------------------
    #     parser.add_argument(
    #         "--encoder-learned-pos",
    #         action="store_true",
    #         default=False,
    #         help="use learned positional embeddings in the encoder",
    #     )
    #     parser.add_argument(
    #         "--no-token-positional-embeddings",
    #         action="store_true",
    #         default=False,
    #         help="if set, disables positional embeddings" " (outside self attention)",
    #     )
    #     parser.add_argument(
    #         "--max-positions", type=int, default=512, help="number of positional embeddings to learn"
    #     )

    #     return parser.parse_args()