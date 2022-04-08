# clang_opt.sh -inline -reg2mem   1_17.c < ../input/in.txt 

SOURCE_CODE=${@: -1}
echo $SOURCE_CODE

last_id=$(($#-1))
OPT_FLAGS=${@:1:$last_id}
echo $OPT_FLAGS

tmp_ll=$(mktemp /tmp/tmp_XXXXXX.ll)
tmp_bc=$(mktemp /tmp/tmp_XXXXXX.bc)
tmp_exe=$(mktemp /tmp/tmp_XXXXXX.exe)

clang -o $tmp_ll -S -emit-llvm $SOURCE_CODE -I$COMPILER2_ROOT/compiler2_service/benchmarks/utils
opt --debugify $OPT_FLAGS -o $tmp_bc $tmp_ll
clang $tmp_bc -o $tmp_exe -lm
time $tmp_exe


rm "$tmp_ll"
rm "$tmp_bc"
rm "$tmp_exe"