import argparse
import os

parser = argparse.ArgumentParser()
parser.add_argument(
    '--path', type=str, help='Specify directory to insert the line.'
)

parser.add_argument(
    '--line', type=str, help='Line to insert.'
)

if __name__ == '__main__':
    args = parser.parse_args()

    # breakpoint()

    files_path = [ args.path ] if args.path.endswith('.c') else [args.path + '/' + name for name in os.listdir(args.path)]

    for file_path in files_path:
        
        if file_path.endswith(".c"):
            print(file_path)

            try:
                file_content = open(file_path, encoding='utf-8').read()
                if not file_content.startswith(str(args.line)):
                    open(file_path, "w").write(str(args.line) + "\n\n" + file_content)
            except:
                # breakpoint()
                pass