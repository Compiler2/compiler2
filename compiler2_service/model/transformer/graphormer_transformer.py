# python ./compiler2_service/model/transformer/graph_encoder/train_graphormer_full.py


import torch
import torch.nn as nn

import numpy as np
import matplotlib.pyplot as plt
from pathlib import Path

# from graphormer import GraphormerEncoder
from compiler2_service.model.transformer.graph_encoder.dgl_dataset import GraphormerDGLDataset
from compiler2_service.model.transformer.graph_encoder.graphormer_graph_encoder import GraphormerGraphEncoder

import torch
import torch.nn as nn

import random
import math
import numpy as np
import matplotlib.pyplot as plt
from pathlib import Path


class PositionalEncoding(nn.Module):
    def __init__(self, dim_model, dropout_p, max_len):
        super().__init__()
        # Modified version from: https://pytorch.org/tutorials/beginner/transformer_tutorial.html
        # max_len determines how far the position can have an effect on a token (window)
        
        # Info
        self.dropout = nn.Dropout(dropout_p)

        # Encoding - From formula
        pos_encoding = torch.zeros(max_len, dim_model)
        positions_list = torch.arange(0, max_len, dtype=torch.float).view(-1, 1) # 0, 1, 2, 3, 4, 5
        division_term = torch.exp(torch.arange(0, dim_model, 2).float() * (-math.log(10000.0)) / dim_model) # 1000^(2i/dim_model)
        
        # PE(pos, 2i) = sin(pos/1000^(2i/dim_model))
        pos_encoding[:, 0::2] = torch.sin(positions_list * division_term)
        
        # PE(pos, 2i + 1) = cos(pos/1000^(2i/dim_model))
        pos_encoding[:, 1::2] = torch.cos(positions_list * division_term)
        
        # Saving buffer (same as parameter without gradients needed)
        pos_encoding = pos_encoding.unsqueeze(0).transpose(0, 1)
        self.register_buffer("pos_encoding",pos_encoding)
        
    def forward(self, token_embedding: torch.tensor) -> torch.tensor:
        # Residual connection + pos encoding
        return self.dropout(token_embedding + self.pos_encoding[:token_embedding.size(0), :])


class GraphormerTransformer(nn.Module):
    """
    Model from "A detailed guide to Pytorch's nn.Transformer() module.", by
    Daniel Melchor: https://medium.com/p/c80afbc9ffb1/
    """
    # Constructor
    def __init__(
        self,
        num_nodes,
        num_classes,
        dim_model,
        num_heads,
        num_encoder_layers,
        num_decoder_layers,
        dropout_p,
    ):
        super().__init__()

        # INFO
        self.model_type = "Transformer"
        self.dim_model = dim_model

        # LAYERS
        self.positional_encoder = PositionalEncoding(
            dim_model=dim_model, dropout_p=dropout_p, max_len=5000
        )

        self.embedding = nn.Embedding(num_classes, dim_model)


        encoder_layer = nn.TransformerEncoderLayer(d_model=dim_model, nhead=num_heads, dropout=dropout_p)
        encoder_norm = nn.LayerNorm(dim_model)
        self.encoder0 = nn.TransformerEncoder(encoder_layer, num_encoder_layers, encoder_norm)
        

        self.encoder = GraphormerGraphEncoder(
                    # < for graphormer
                    num_atoms=num_nodes,
                    num_in_degree=num_nodes,
                    num_out_degree=num_nodes,
                    num_edges=num_nodes * 3,
                    num_spatial=512,
                    num_edge_dis=128,
                    edge_type='single_hop',
                    multi_hop_max_dist=3,
                    # >
                    num_encoder_layers=num_encoder_layers,
                    embedding_dim=dim_model,
                    ffn_embedding_dim=dim_model,
                    num_attention_heads=num_heads,
                    dropout=0.0,
                    attention_dropout=dropout_p,
                    activation_dropout=dropout_p,
                    encoder_normalize_before=True,
                    pre_layernorm=False,
                    apply_graphormer_init=True,
                    activation_fn='gelu',
                )




        decoder_layer = nn.TransformerDecoderLayer(d_model=dim_model, nhead=num_heads, dropout=dropout_p)
        decoder_norm = nn.LayerNorm(dim_model)
        self.decoder = nn.TransformerDecoder(decoder_layer, num_decoder_layers, decoder_norm)



        self.out = nn.Linear(dim_model, num_classes)
        
    def forward(self, graphs, tgt, tgt_mask=None, tgt_pad_mask=None):
        # Src size must be (batch_size, src sequence length)
        # Tgt size must be (batch_size, tgt sequence length)

        # Embedding + positional encoding - Out size = (batch_size, sequence length, dim_model)
        # src = self.embedding(src) * math.sqrt(self.dim_model)
        tgt = self.embedding(tgt) * math.sqrt(self.dim_model)
        # src = self.positional_encoder(src)
        tgt = self.positional_encoder(tgt)
        
        # We could use the parameter batch_first=True, but our KDL version doesn't support it yet, so we permute
        # to obtain size (sequence length, batch_size, dim_model),

        # src = src.permute(1,0,2)
        tgt = tgt.permute(1,0,2)

        inner_states, graph_rep = self.encoder(graphs)
        
        memory = inner_states[-1]
        transformer_out = self.decoder(tgt, memory, tgt_mask=tgt_mask)
        
        # # Transformer blocks - Out size = (sequence length, batch_size, num_tokens)
        # transformer_out = self.transformer(src, tgt, tgt_mask=tgt_mask, src_key_padding_mask=src_pad_mask, tgt_key_padding_mask=tgt_pad_mask)
        
        out = self.out(transformer_out)
        
        return out
      
    def get_tgt_mask(self, size) -> torch.tensor:
        # Generates a squeare matrix where the each row allows one word more to be seen
        mask = torch.tril(torch.ones(size, size) == 1) # Lower triangular matrix
        mask = mask.float()
        mask = mask.masked_fill(mask == 0, float('-inf')) # Convert zeros to -inf
        mask = mask.masked_fill(mask == 1, float(0.0)) # Convert ones to 0
        
        # EX for size=5:
        # [[0., -inf, -inf, -inf, -inf],
        #  [0.,   0., -inf, -inf, -inf],
        #  [0.,   0.,   0., -inf, -inf],
        #  [0.,   0.,   0.,   0., -inf],
        #  [0.,   0.,   0.,   0.,   0.]]
        
        return mask
    
    def create_pad_mask(self, matrix: torch.tensor, pad_token: int) -> torch.tensor:
        # If matrix = [1,2,3,0,0,0] where pad_token=0, the result mask is
        # [False, False, False, True, True, True]
        return (matrix == pad_token)


    '''
    Train model
    '''

    def fit(self, opt, loss_fn, train_dataloader, valid_dataloader, epochs):
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
        device = next(self.parameters()).device

        total_loss = 0
        y_input = dataloader['y'][:,:-1]
        y_expected = dataloader['y'][:,1:]


        # Get mask to mask out the next words
        sequence_length = y_input.size(1)
        tgt_mask = self.get_tgt_mask(sequence_length).to(device)
        
        # Standard training except we pass in y_input and tgt_mask
        pred = self(graphs=dataloader['x'], tgt=y_input, tgt_mask=tgt_mask)

        # Permute pred to have batch size first again
        pred = pred.permute(1, 2, 0)    # Cross-entropy input(N, C, d1) target(N, d1)
        loss = loss_fn(pred, y_expected)

        if backprop:
            opt.zero_grad()
            loss.backward()
            opt.step()

        total_loss += loss.detach().item()
            
        return total_loss / len(dataloader)


    def predict(self, graphs, SOS_token=0, EOS_token=1, max_length=15):
        self.eval()
        device = next(self.parameters()).device

        num_examples = graphs['idx'].size(0)
        y_input = torch.full((num_examples, 1), SOS_token, dtype=torch.long, device=device)

        for _ in range(max_length):
            sequence_length = y_input.size(1)
            tgt_mask = self.get_tgt_mask(sequence_length).to(device)

            pred = self(graphs, y_input, tgt_mask)
            pred = pred.permute(1, 0, 2).argmax(2)

            # Concatenate previous input with predicted best word
            y_input = torch.cat((y_input, pred[:, -1:]), dim=1)

        eos = torch.full((num_examples, 1), EOS_token, dtype=torch.long, device=device)
        y_input =  torch.cat((y_input, eos), dim=1)

        return [ x[:x.index(EOS_token)+1] for x in  y_input.tolist() ]



if __name__ == "__main__":
    device = "cuda" if torch.cuda.is_available() else "cpu"

    dgl_dataset = GraphormerDGLDataset(device=device)

    model = GraphormerTransformer(
        num_nodes=dgl_dataset.num_classes,
        num_classes=dgl_dataset.num_classes, 
        dim_model=8, 
        num_heads=2, 
        num_encoder_layers=3, 
        num_decoder_layers=3, 
        dropout_p=0.1
    ).to(device)
    
    opt = torch.optim.SGD(model.parameters(), lr=0.01)
    loss_fn = nn.CrossEntropyLoss()
    # loss_fn = nn.L1Loss(reduction="sum")

    train_loss_list, validation_loss_list = model.fit(
        opt, 
        loss_fn,
        train_dataloader=dgl_dataset.get_train(), 
        valid_dataloader=dgl_dataset.get_valid(), 
        epochs=500,
    )

    plt.plot(train_loss_list, label = "Train loss")
    plt.plot(validation_loss_list, label = "Validation loss")
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.title('Loss vs Epoch')
    plt.legend()
    plt.savefig(Path(__file__).parent/'result.png')


    test_data = dgl_dataset.get_test()
    y_predicted = model.predict(test_data['x'])

    for y_pred, y in zip(y_predicted, test_data['y']):
        print(f'y_pred: {y_pred} -> y: {y.tolist()}')


    print('Done.')
