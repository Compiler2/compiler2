import sys
import os 
import random
import shutil

import pdb 

def separate_test_data(train_dir, test_dir, test_size):
    
    onlyfiles = sorted([f for f in os.listdir(train_dir) if os.path.isfile(os.path.join(train_dir, f))])

    if 0 < test_size and test_size < 1: # percentage
        test_num = int(len(onlyfiles) * test_size)
        test_files = random.sample(onlyfiles, test_num)
    elif 1 <= test_size: # number
        test_num = int(test_size) # Dont take perc, just take say 20
    else:
        print("Test_size must be (0, inf)")
        exit(1)

    breakpoint()
    prev_group_id = str(onlyfiles[0].split('_')[0])
    i = 0
    for file in onlyfiles:
        group_id = str(file.split('_')[0])
        if group_id == prev_group_id:
            if i < test_num:
                i += 1
                print(train_dir + '/' + file)
                shutil.move(train_dir + '/' + file, test_dir + '/' + file)
        else:
            print(f'^^ Samples = {i}\n')
            i = 0
        prev_group_id = group_id


def main():
    
    print(sys.argv)
    if len(sys.argv) != 4:
        print('Format: split_data.py path_to_data path_to_test test_size')
        return 

    train_dir = sys.argv[1]
    test_dir = sys.argv[2]
    test_size = float(sys.argv[3])
    
    if os.path.exists(test_dir):
        if len(os.listdir(test_dir)) != 0:
            print("Error: Remove test_dir first")
            return
    else:
        os.makedirs(test_dir)

    separate_test_data(train_dir, test_dir, test_size)


if __name__ == '__main__':
    main()