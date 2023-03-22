#define NUM_ITER 227012

#include <header.h>

void f(int n)
{
    if(n==1) my_printf("End\n");
    else
    {
        if(n%2==0)
        {
            my_printf("%d/2=%d\n",n,n/2);
            n=n/2;
            f(n);
        }
        else
        {
            my_printf("%d*3+1=%d\n",n,n*3+1);
            n=n*3+1;
            f(n);
        }
    }
}
int main_bench()
{
    int n;
    my_scanf("%d",&n);
    f(n);
}

