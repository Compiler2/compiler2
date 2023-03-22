#define NUM_ITER 495012

#include <header.h>


int a[10000] = {0};

int main_bench()
{
    int n;
    int i;
    int from;
    int to;
    my_scanf("%d", &n);
    while (my_scanf("%d %d", &from, &to) && (from || to)) {
        a[from] = -1;
        if (a[to] != -1) {
            a[to] += 1;
        }
    }
    for (i = 0; i < n; i++) {
        if (a[i] == n - 1) {
            my_printf("%d\n", i);
            break;
        }
    }
    if (i == n) {
        my_printf("NOT FOUND\n");
    }
    return 0;
}
