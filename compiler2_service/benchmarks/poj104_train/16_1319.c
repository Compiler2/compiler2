#include <header.h>


void reverse() {
    int k;
    if ((k = getchar()) == '\n') return;
    reverse();
    my_printf("%c", k);
}

int main_bench() {
    reverse();
    return 0;
}