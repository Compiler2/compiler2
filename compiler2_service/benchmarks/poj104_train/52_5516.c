#define NUM_ITER 55426

#include <header.h>

int main_bench()
{
    int n,m,num[220],i,j;
    my_scanf("%d%d",&n,&m);
    j=0;
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&num[i]);
    }
    for(i=n;i<n+n-m;i++)
    {
        num[i]=num[j];
        j=j+1;
    }

    my_printf("%d",num[n-m]);
    for(i=n-m+1;i<n+n-m;i++)
    {
        my_printf(" %d",num[i]);
    }
    return 0;
}
