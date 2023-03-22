#define NUM_ITER 80923

#include <header.h>

int main_bench()
{
    int n,i;
    int sum=0;
    my_scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
                    if((i%7)==0)
                    {
                             continue;
                    }
                    if((i%10)==7)
                    {
                              continue;
                    }
                    if((i/10)==7)
                    {
                                   continue;
                    }                    
                    sum+=i*i;
    }
    my_printf("%d",sum);
    return 0;
}