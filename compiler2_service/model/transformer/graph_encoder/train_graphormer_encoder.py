# Initial version of the code is copied from https://towardsdatascience.com/a-detailed-guide-to-pytorchs-nn-transformer-module-c80afbc9ffb1


import torch
import torch.nn as nn

import numpy as np
import matplotlib.pyplot as plt
from pathlib import Path

from graphormer import GraphormerEncoder
from dgl_dataset import GraphormerDGLDataset, EOS_token


def train_loop(model, opt, loss_fn, dataloader):
    model.train()
    total_loss = 0
        
    logits = model(dataloader['x'])
    # breakpoint()
    num_token = dataloader['y'].size(1)
    logits = logits[:, :num_token, :]
    logits = logits.permute(0, 2, 1) 
    labels = dataloader['y']

    lname = loss_fn._get_name()
    if lname == 'CrossEntropyLoss':
        loss = loss_fn(logits, labels)
        
    elif lname == 'L1Loss':
        onehot_labels = torch.nn.functional.one_hot(labels, num_classes=model.num_classes)
        loss = loss_fn(logits, onehot_labels)

    opt.zero_grad()
    loss.backward()
    opt.step()

    total_loss += loss.detach().item()
        
    return total_loss / len(dataloader)


def fit(model, opt, loss_fn, train_dataloader, val_dataloader=None, epochs=4):
    # Used for plotting later on
    train_loss_list, validation_loss_list = [], []
    
    print("Training and validating model")
    for epoch in range(epochs):
        print("-"*25, f"Epoch {epoch + 1}","-"*25)
        
        train_loss = train_loop(model, opt, loss_fn, train_dataloader)
        train_loss_list += [train_loss]    
    
        print(f"Training loss: {train_loss:.4f}")
        # print(f"Validation loss: {validation_loss:.4f}")
        print()
        
    return train_loss_list, validation_loss_list

def predict(model, graphs, max_len=15):
    num_examples = graphs['idx'].size(0)

    logits = model(graphs)
    logits = logits[:, :max_len, :]
    y_pred = logits.permute(0, 2, 1).argmax(2)

    eos = torch.full((num_examples, 1), EOS_token, dtype=torch.long, device=device)
    y_pred =  torch.cat((y_pred, eos), dim=1)

    return [ x[:x.index(EOS_token)+1] for x in  y_pred.tolist() ]

    



if __name__ == "__main__":
    device = "cuda" if torch.cuda.is_available() else "cpu"

    # breakpoint()
    dgl_dataset = GraphormerDGLDataset()

    model = GraphormerEncoder(
        num_classes=dgl_dataset.num_classes
    ).to(device=device)


    opt = torch.optim.SGD(model.parameters(), lr=0.01)
    loss_fn = nn.CrossEntropyLoss()
    # loss_fn = nn.L1Loss(reduction="sum")

    train_loss_list, validation_loss_list = fit(
        model=model, 
        opt=opt, 
        loss_fn=loss_fn, 
        epochs=500, 
        train_dataloader=dgl_dataset.collate(device=device)
    )

    plt.plot(train_loss_list, label = "Train loss")
    plt.plot(validation_loss_list, label = "Validation loss")
    plt.xlabel('Epoch')
    plt.ylabel('Loss')
    plt.title('Loss vs Epoch')
    plt.legend()
    plt.savefig(Path(__file__).parent/'result.png')


    # breakpoint()
    collated_data = dgl_dataset.collate(size=2, device=device)
    y_predicted = predict(model, collated_data['x'])

    for y_pred, y in zip(y_predicted, collated_data['y']):
        print(f'y_pred: {y_pred} -> y: {y.tolist()}')
