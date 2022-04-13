from threading import Thread
import profile
# from proton import Timeout
import sys
import string
import os
import pandas as pd

import pdb
import numpy as np
import matplotlib.pyplot as plt
import collections
import seaborn as sns

import pandas as pd
import tempfile
import signal

import subprocess
from signal import Signals
from typing import List


class Action():
    def __init__(self, name):
        self.name = name
        self.personal_reward = 0
        self.helper_reward = 0

        self.good_before = []
        self.good_after = []

        self.bad_before = []
        self.bad_after = []

    def print(self):

        print(
            f"{self.name}\n"
            f"personal_reward = {self.personal_reward}\n"
            f"helper_reward = {self.personal_reward}\n"
            f"good_before = {self.good_before}\n"
            f"good_after = {self.good_after}\n"
            f"bad_before = {self.bad_before}\n"
            f"bad_after = {self.bad_after}\n"            
            )

def flag_analysis(csv_path):
    last_action_factor = 0.2
    last_action_diff = 0.1
    columns = ["BenchmarkName", "PrevState", "State", "Action", "PrevActions", "Reward"]
    df = pd.read_csv(csv_path, names=columns, header=1)
    df['PrevActions'] = df['PrevActions'].apply(lambda x: x.split()[1:-3] if x != np.nan else [])
    action_importance = {key: Action(key) for key in df["Action"].unique()} # Format Reward, PrevReward


    for index, row in df.iterrows():
        cur_action = row["Action"]
        reward = row["Reward"]
        action_importance[cur_action].personal_reward += reward

        if len(row["PrevActions"]) > 2:
            last_action = row["PrevActions"][-2]

            if last_action not in action_importance:                
                action_importance[last_action] = Action(last_action)
            
            action_importance[last_action].helper_reward = last_action_factor * reward

            if reward > last_action_diff:
                action_importance[cur_action].good_after.append(last_action)
                action_importance[last_action].good_before.append(cur_action)

            elif reward < -last_action_factor:
                action_importance[cur_action].bad_after.append(last_action)
                action_importance[last_action].bad_before.append(cur_action)




    for flag in sorted(action_importance.values(), key=lambda item: item.personal_reward):
        flag.print()





def main():
    
    print(sys.argv)
    if len(sys.argv) != 2:
        print('Format: analyze_db.py csv_path')
        return 

    csv_path = sys.argv[1]
    
    flag_analysis(csv_path)

if __name__ == '__main__':
    main()