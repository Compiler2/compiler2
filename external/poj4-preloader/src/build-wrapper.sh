# build .so
gcc -fPIC -shared stdio-wrapper.c -o stdio-wrapper.so
# move .so to bin
mv *.so ../bin
