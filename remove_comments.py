'''
python remove_comments.py --path=/home/dx4/tools/compiler2/compiler2_service/benchmarks/poj104_train/code --line="#include <header.h>"
'''
import argparse
import os
import re

parser = argparse.ArgumentParser()
parser.add_argument(
    '--path', type=str, help='Specify directory to insert the line.'
)

parser.add_argument(
    '--line', type=str, default='', help='Line to insert.'
)


def remove_comments(csrc):
    '''Remove comments from a c source file'''
    content = csrc[:]
    content = remove_block_comments(content)
    content = remove_singleline_comments(content)

    return content

def remove_block_comments(csrc):
    '''Remove block comments from a c source string - /* */'''
    regex=r'/\*.*?\*/'
    matches = re.findall(regex, csrc, re.DOTALL)
    for match in matches:
        csrc = csrc.replace(match, '')

    return csrc

def remove_singleline_comments(csrc):
    '''Remove single line comments from a c source string - //'''
    regex=r'//.*$'
    csrc = re.sub(regex, '', csrc, flags=re.MULTILINE)
    return csrc



if __name__ == '__main__':
    args = parser.parse_args()

    if args.path.endswith('.c'):
        files = [str(args.path)]
    else:
        files = [args.path + '/' + name for name in os.listdir(args.path)]

    for file_path in files:
        
        if file_path.endswith(".c"):
            print(file_path)

            try:
                file_content = open(file_path, encoding='utf-8').read()
            except:
                try: 
                    file_content = open(file_path, encoding='ISO-8859-1').read()
                except:
                    breakpoint
            
            try:
                file_content = remove_comments(file_content)

                if not file_content.startswith(str(args.line)):
                    file_content = str(args.line) + "\n\n" + file_content
                open(file_path, "w").write(file_content)
            except:
                breakpoint()
                pass
