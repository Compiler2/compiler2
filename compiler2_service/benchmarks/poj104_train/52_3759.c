#include <header.h>

int main_bench()
{
    int num[1000],n,m,i;
    my_scanf("%d",&n);
    my_scanf("%d",&m);
    for(i=1;i<=n;i++)
{my_scanf("%d",&num[i]);}
    for(i=n+1;i<=2*n;i++)
    {num[i]=num[i-n];}
    for(i=n+1-m;i<=2*n-m;i++)
    {if(i==n+1-m)
    my_printf("%d",num[i]);
    else
    my_printf(" %d",num[i]);}
    getchar();
    getchar();
    return 0;}
