#define NUM_ITER 55118

#include <header.h>


int is_relativeto_7(int n);

int main_bench()
{
    int n, i, sum = 0;
    my_scanf("%d", &n);

    for (i=1; i<=n; i++)
        if (!is_relativeto_7(i)) 
            sum += i*i;

    my_printf("%d", sum);
    return 0;
}

int is_relativeto_7(int n)
{
    int sh = n;
    if ((n % 7) == 0) return 1;
    do {
        if ((sh % 10) == 7) return 1;
        sh = sh / 10;
    } while (sh > 0);

    return 0;
}