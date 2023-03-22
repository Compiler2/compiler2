#define NUM_ITER 8160

#include <header.h>


int main_bench()
{
    int a[300];
    int n, i, j;
    my_scanf("%d", &n);
    for (i=0; i<n; i++) {
        my_scanf("%d", &a[i]);
    }
    if (n>0) {
        my_printf("%d", a[0]);
    }
    for (i=1; i<n; i++) {
        for (j=0; j<i; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        if (i==j) {
            my_printf(",%d", a[i]);
        }
    }
    return 0;
}
