from cgi import test
from math import ceil
import sys
import os 
import random
import shutil
import pickle
import pdb
from pathlib import Path


def split_data(path_to_data, memory_B):
    
    memory_B_adjusted = 0.8 * memory_B
    pkl_files = [ f for f in Path(path_to_data).rglob('*.pkl') ]
    
    for fp in pkl_files:
        file_size_B = os.path.getsize(fp)
        if file_size_B < memory_B:
            continue

        with open(fp, 'rb') as f:
            df = pickle.load(f)


            rows_per_file = ceil((memory_B_adjusted * df.shape[0]) / file_size_B)

            for i, slice in enumerate(range(0, df.shape[0], rows_per_file)):
                new_file = str(fp.parent) + f"/results_{i}.pkl"
                with open(new_file, 'wb') as nf:
                    pickle.dump(df[slice:slice+rows_per_file], nf)
                    print(f"Created file: {new_file}")
        
        fp.unlink()
        

def main():
    
    print(sys.argv)
    if len(sys.argv) != 3:
        print('Format: split_pickled_df.py path_to_data memory_MB')
        return 

    path_to_data = sys.argv[1]
    memory_B = 1e6 * int(sys.argv[2])

    split_data(path_to_data, memory_B)


if __name__ == '__main__':
    main()






