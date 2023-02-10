import argparse
import torch
import torch.nn as nn


from fairseq import utils
from fairseq.models import FairseqEncoder
from fairseq.modules import (
    LayerNorm,
)


from graphormer_graph_encoder import GraphormerGraphEncoder, init_graphormer_params



class GraphormerEncoder(FairseqEncoder):
    def parse_args(self):
        parser = argparse.ArgumentParser()
        """Add model-specific arguments to the parser."""
        #---------------------------------EXTRA DEFINED---------------------------------------------------
        parser.add_argument(
            "--num_classes",
            type=int,
            default=4,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--max-nodes",
            type=int,
            default=50,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--num-in-degree",
            type=int,
            default=512,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--num-out-degree",
            type=int,
            default=512,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--num-edges",
            type=int,
            default=1536,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--num-spatial",
            type=int,
            default=512,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--num-edge-dis",
            type=int,
            default=128,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--edge-type",
            type=str,
            default='single_hop',
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--multi-hop-max-dist",
            type=int,
            default=5,
            help="encoder embedding dimension",
        )
        #---------------------------------INIT DEFINED---------------------------------------------------
        # Arguments related to hidden states and self-attention
        parser.add_argument(
            "--encoder-layers", type=int, default=12, help="num encoder layers"
        )        
        parser.add_argument(
            "--encoder-embed-dim",
            type=int,
            default=768,
            help="encoder embedding dimension",
        )
        parser.add_argument(
            "--encoder-ffn-embed-dim",
            type=int,
            default=768,
            help="encoder embedding dimension for FFN",
        )
        parser.add_argument(
            "--encoder-attention-heads",
            type=int,
            default=32,
            help="num encoder attention heads",
        )
        parser.add_argument(
            "--dropout", type=float, default=0.0, help="dropout probability"
        )
        parser.add_argument(
            "--attention-dropout",
            type=float,
            default=0.1,
            help="dropout probability for" " attention weights",
        )
        parser.add_argument(
            "--act-dropout",
            type=float,
            default=0.1,
            help="dropout probability after" " activation in FFN",
        )
        parser.add_argument(
            "--encoder-normalize-before",
            action="store_true",
            default=True,
            help="apply layernorm before each encoder block",
        )
        parser.add_argument(
            "--pre-layernorm",
            action="store_true",
            default=False,
            help="apply layernorm before self-attention and ffn. Without this, post layernorm will used",
        )
        parser.add_argument(
            "--apply-graphormer-init",
            action="store_true",
            default=True,
            help="use custom param initialization for Graphormer",
        )
        parser.add_argument(
            "--activation-fn",
            choices=utils.get_available_activation_fns(),
            default='gelu',
            help="activation function to use",
        )
        parser.add_argument(
            "--share-encoder-input-output-embed",
            action="store_true",
            default=False,
            help="share encoder input" " and output embeddings",
        )
        #-----------------------NOT USED-------------------------------------------------------------
        parser.add_argument(
            "--encoder-learned-pos",
            action="store_true",
            default=False,
            help="use learned positional embeddings in the encoder",
        )
        parser.add_argument(
            "--no-token-positional-embeddings",
            action="store_true",
            default=False,
            help="if set, disables positional embeddings" " (outside self attention)",
        )
        parser.add_argument(
            "--max-positions", type=int, default=512, help="number of positional embeddings to learn"
        )

        return parser.parse_args()


    def __init__(self):
        super().__init__(dictionary=None)
        args = self.parse_args()


        self.max_nodes = args.max_nodes

        self.graph_encoder = GraphormerGraphEncoder(
            # < for graphormer
            num_atoms=args.max_nodes,
            num_in_degree=args.num_in_degree,
            num_out_degree=args.num_out_degree,
            num_edges=args.num_edges,
            num_spatial=args.num_spatial,
            num_edge_dis=args.num_edge_dis,
            edge_type=args.edge_type,
            multi_hop_max_dist=args.multi_hop_max_dist,
            # >
            num_encoder_layers=args.encoder_layers,
            embedding_dim=args.encoder_embed_dim,
            ffn_embedding_dim=args.encoder_ffn_embed_dim,
            num_attention_heads=args.encoder_attention_heads,
            dropout=args.dropout,
            attention_dropout=args.attention_dropout,
            activation_dropout=args.act_dropout,
            encoder_normalize_before=args.encoder_normalize_before,
            pre_layernorm=args.pre_layernorm,
            apply_graphormer_init=args.apply_graphormer_init,
            activation_fn=args.activation_fn,
        )
        if getattr(args, "apply_graphormer_init", False):
            self.apply(init_graphormer_params)

        self.share_input_output_embed = args.share_encoder_input_output_embed
        self.embed_out = None
        self.lm_output_learned_bias = None

        # Remove head is set to true during fine-tuning
        self.load_softmax = not getattr(args, "remove_head", False)

        self.masked_lm_pooler = nn.Linear(
            args.encoder_embed_dim, args.encoder_embed_dim
        )

        self.lm_head_transform_weight = nn.Linear(
            args.encoder_embed_dim, args.encoder_embed_dim
        )
        self.activation_fn = utils.get_activation_fn(args.activation_fn)
        self.layer_norm = LayerNorm(args.encoder_embed_dim)

        self.lm_output_learned_bias = None
        if self.load_softmax:
            self.lm_output_learned_bias = nn.Parameter(torch.zeros(1))

            if not self.share_input_output_embed:
                self.embed_out = nn.Linear(
                    args.encoder_embed_dim, args.num_classes, bias=False
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