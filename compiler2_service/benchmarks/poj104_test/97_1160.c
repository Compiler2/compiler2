#define NUM_ITER 1028052

#include <header.h>

int main_bench ()
{
    int n;
    my_scanf("%d",&n);
    my_printf("%d\n",n/100);
    n=n%100;
    my_printf("%d\n",n/50);
    n=n%50;
    my_printf("%d\n",n/20);
    n=n%20;
    my_printf("%d\n",n/10);
    n=n%10;
    my_printf("%d\n",n/5);
    n=n%5;
    my_printf("%d\n",n/1);
    n=n%1;
    return 0;
}