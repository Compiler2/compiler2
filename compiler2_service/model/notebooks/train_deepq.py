import os
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
from torch.utils.data import DataLoader, Dataset
import random
import numpy as np
import pandas as pd
from tqdm import tqdm
from matplotlib import pyplot as plt
import json
import model
import warnings
from collections import deque
from absl import app, flags

flags.DEFINE_string("device","cuda","hardware to use (cuda:gpu,cpu:cpu)")
flags.DEFINE_string("model_path",None,"weights to initilize model with")
flags.DEFINE_string("initial_dataset",None,"Initial experiences to train with")
flags.DEFINE_bool("online",True,"wether to actively collect experiences and train the model online")
flags.DEFINE_string("hyperparameters","","json of hyperparameters to use for training")

FLAGS = flags.FLAGS

class experienceDataset(Dataset):
    def __init__(self,experience,experience_size):
        if experience.shape[0] > experience_size:
            warnings.warn("Warning: experience greater than allowed size, dropping some data")
        self.experience = experience.head(experience_size)
        self.experience_size = experience_size
    def __getitem__(self, i):
        # return S,A,R,S'
        return self.experience['State'].iloc[i].to(device),self.experience['Action'].iloc[i].to(device),self.experience['Reward'].iloc[i].to(device),self.experience['State_'].iloc[i].to(device),
    def __len__(self):
        return self.experience.shape[0]
    def update_experience(self,new_experience):
        for exp in new_experience:
          self.experience[:-1] = self.experience[1:]
          self.experience[-1] = exp
          
with open(FLAGS.hyperparameters) as json_file:
    experience_size = json_file['experience_size']
    batch_size = json_file['batch_size']
    exp_update_size = json_file['exp_update_size']
    gamma = json_file['gamma']
    epsilon = json_file['epsilon_max']
    epsilon_min = json_file['epsilon_min']
    epsilon_decay = json_file['epsilon_decay']
    num_epochs = json_file['num_epochs']
    
df = pd.read_csv(FLAGS.initial_dataset)
experience = experienceDataset(df)
dataLoad = DataLoader(experience,batch_size=batch_size,shuffle=True)

if FLAGS.model_path is None:
    policy_net = Q_net(28,124,512,0.5).to(device)
    target_net = Q_net(28,124,512,0.5).to(device)
else:
    policy_net = torch.jit.load(FLAGS.model_path).to(device)
    target_net = torch.jit.load(FLAGS.model_path).to(device)
target_net.eval()
criterion = nn.SmoothL1Loss()
optimizer = optim.Adam(policy_net.parameters())

def optimize_model():
    for S,A,R,S_ in dataLoad:
        r = torch.sum(torch.mul(policy_net(S),A),1)
        r_hat = R + torch.max(target_net(S_),1).values*gamma
        
        loss = criterion(r,r_hat)
        
        optimizer.zero_grad()
        loss.backward()
        optimizer.step()
    target_net.load_state_dict(policy_net.state_dict())
    
def collect_experience():
    # Create the environment using the regular gym.make(...) interface.
    with gym.make("compiler2-v0") as env:
        inc = 0
        for bench in env.datasets["benchmark://poj104-small-v0"]:
            print("bench>>>>>>>>>> ", bench)
            try:

                env.reset(benchmark=bench)
                env.send_param("save_state", "0")

            except ServiceError:
                print("AGENT: Timeout Error Reset")
            
            pdb.set_trace()
            for i in range(exp_update_size):
                try:

                    next_action = target_net.predict(observation,epsilon)
                
                    observation, reward, done, info = env.step(
                        action=next_action,
                        observation_spaces=["perf_tensor"],
                        reward_spaces=["perf_tensor"],
                    )
                except ServiceError:
                    print("AGENT: Timeout Error Step")
                    continue

                #TODO: add experience to the experienceDataset

                if done:
                    env.reset()
    dataLoad = DataLoader(experience,batch_size=batch_size,shuffle=True)

for epoch in range(num_epochs):
    if FLAGS.online:
        collect_experience()
    optimize_model()
    epsilon = max(epsilon*epsilon_decay,epsilon_min)
    
model_scripted = torch.jit.script(target_net) # Export to TorchScript
model_scripted.save('../weights/deep_q.pt') # Save

