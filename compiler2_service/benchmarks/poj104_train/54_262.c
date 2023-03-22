#define NUM_ITER 317988

#include <header.h>


int main_bench() 
{
    int i,n,k,m;
    m=1;
    my_scanf("%d%d",&n,&k);
    if (n==2) 
    {
    for (i=1;i<=n+1;i++)
    m=m*n;
    m=m-k*n+k;
    my_printf("%d",m);
    }
    else
    {
    for (i=1;i<=n;i++)
    m=m*n;
    m=m-k*n+k;
    my_printf("%d",m);
    }
    return 0;
}