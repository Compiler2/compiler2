#define NUM_ITER 6147

#include <header.h>


int main_bench() {
    int n, i, j, sign,counter;
    int a[20000];
    my_scanf("%d", &n);
    for (i=0;i<n;i++) {
        my_scanf("%d", &a[i]);
    }
    counter=0;
    for (i=0;i<n&&counter==0;i++) {
        sign=0;
        for (j=0;j<i;j++) {
            if (a[j]==a[i]) {
                sign=sign+1;
            }
        }
        if (sign==0) {
            my_printf("%d", a[i]);
            counter=counter+1;
        }
    }
    for (;i<n;i++) {
        sign=0;
        for (j=0;j<i;j++) {
            if (a[j]==a[i]) {
                sign=sign+1;
            }
        }
        if (sign==0) {
            my_printf(" %d", a[i]);
        }
    }

    return 0;
}