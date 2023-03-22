#define NUM_ITER 320814

#include <header.h>


int step(int k)
{
    if (k == 1) {
        return 0;
    } else if (k % 2 == 0) {
        k /= 2;
        my_printf("%d/2=%d\n", k * 2, k);
    } else {
        k = k * 3 + 1;
        my_printf("%d*3+1=%d\n", (k - 1) / 3, k);
    }
    return step(k);
}

int main_bench()
{
    int n;
    my_scanf("%d", &n);
    step(n);
    my_printf("End");
    return 0;
}