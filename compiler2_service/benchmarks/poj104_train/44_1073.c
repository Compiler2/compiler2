#define NUM_ITER 432357

#include <header.h>

int reverse(int b)
{
    int a=0;
    while (b>0)
    {
        a=a*10+b%10;
        b=b/10;
    }
    return a;
}
int main_bench()
{
    int x,tag=1,i;
    for (i=0;i<6;i++)
    {
        my_scanf("%d",&x);
        if (x<0)
        {
            my_printf("%d\n",-reverse(-x));
        }
        else
        {
            my_printf("%d\n",reverse(x));
        }

    }
    return 0;
}
