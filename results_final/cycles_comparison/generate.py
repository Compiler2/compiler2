# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.
"""This script demonstrates how the Python example service without needing
to use the bazel build system. Usage:

    $ python compiler2_service/demo_without_bazel.py

It is equivalent in behavior to the demo.py script in this directory.
"""

import pandas as pd
import pathlib
import os
import matplotlib.pyplot as plt


def extend_df(df_large, df, column, profiler):
    dec = 0 if column == 'cycles' else 6

    if df_large.empty:
        df_large = df[['benchmark', f'O3_{column}']]
        df_large = df_large.rename(columns={f'O3_{column}': 'O3'})
        df_large['O3'] = df_large['O3'].apply(lambda x:  f'%0.{dec}f' % float(x) )

    df[profiler] = df[column].apply(lambda x: x.split(',')[-1] if ',' in x else x) \
                             .apply(lambda x: f'%0.{dec}f' % float(x))

    return pd.merge(df_large, df[['benchmark', profiler]], on=['benchmark'])

def main():
    dir = pathlib.Path(__file__).parent.resolve()

    df_dict = {
        'train_cycles': pd.DataFrame(),
        'train_compile': pd.DataFrame(),
        'test_cycles': pd.DataFrame(),
        'test_compile': pd.DataFrame(),
    }
    

    for root, dirs, files in os.walk(dir):
        print(root, dirs, files)

        for file in files:
            # breakpoint()

            if file.endswith('.csv'):
                df = pd.read_csv(os.path.join(root, file))

                profiler, dataset_kind = file.rstrip('.csv').split('_')
                if dataset_kind == 'train':
                    df_dict['train_cycles'] = extend_df(df_dict['train_cycles'], df, 'cycles', profiler)
                    df_dict['train_compile'] = extend_df(df_dict['train_compile'], df, 'compile_time', profiler)
                elif dataset_kind == 'test':
                    df_dict['test_cycles'] = extend_df(df_dict['test_cycles'], df, 'cycles', profiler)
                    df_dict['test_compile'] = extend_df(df_dict['test_compile'], df, 'compile_time', profiler)                
                else:
                    print('Dataset is not train/test.')
                    breakpoint()


    # Set formating


    fig, axs = plt.subplots(4)
    fig.patch.set_visible(False)

    for i, (name, df) in enumerate(df_dict.items()):
        # breakpoint()
        # if 'cycles' in name:
        #     df.loc[:, df.columns != 'benchmark'] = df.loc[:, df.columns != 'benchmark'].apply(lambda x: '{0:.0f}'.format(float(x)))
        # else:
        #     df.loc[:, df.columns != 'benchmark'].apply(lambda x: '{0:.6f}'.format(float(x)))

        print(name)
        print(df)
        axs[i].set_title(name,backgroundcolor= 'white')
        axs[i].axis('off')
        axs[i].axis('tight')
        axs[i].table(cellText=df.values, colLabels=df.columns, loc='center')
        axs[i].set_facecolor('silver')

        fig.tight_layout()

    plot_path = dir.parent/'cycles_comparison.png'
    # fig.patch.set_facecolor("lightslategray")
    plt.savefig(plot_path, transparent=False, bbox_inches = 'tight')


if __name__ == "__main__":
    main()