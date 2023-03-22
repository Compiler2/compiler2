#define NUM_ITER 385855

#include <header.h>

int main_bench()
{
    int n=0,a=0,b=10;
    my_scanf("%d",&n);
    while(n>1)
    {
                    if(n-(n/2)*2==0)
                    {
                                  b=n/2;
                                  my_printf("%d/2=%d\n",n,b);
                                  n=b;
                    }
                    else
                    {
                                  b=n*3+1;
                                  my_printf("%d*3+1=%d\n",n,b);
                                  n=b;
                    }
    }
    my_printf("End");
}