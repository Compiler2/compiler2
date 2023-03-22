#define NUM_ITER 3162

#include <header.h>

int main_bench()
{
    int n,k,a[1000],i,m,s;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {
            if((a[i]+a[m])==k&&a[i]!=a[m])
            {
                s=1;
            }
        }
    }
    if(s==1)
    {
        my_printf("yes");
    }
    else
    {
        my_printf("no");
    }
    return 0;}



