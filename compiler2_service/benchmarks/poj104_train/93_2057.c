#define NUM_ITER 1326684

#include <header.h>

int main_bench()
{
    int n,tot=0,b=0;
    my_scanf("%d",&n);
    if(!(n%3))  tot++;
    if(!(n%5))  tot++;
    if(!(n%7))  tot++;
    if(!(n%3))
    {
        my_printf("3");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!(n%5))
    {
        my_printf("5");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!(n%7))
    {
        my_printf("7");
        if(tot-1)
        {
            putchar(' ');
            tot--;
        }
        b=1;
    }
    if(!b)
    {
        putchar('n');
    }
    putchar('\n');
    return 0;
}
