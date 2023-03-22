#define NUM_ITER 46460

#include <header.h>

int main_bench()
{
    int m,n,i,a[101],b[101];
    my_scanf("%d %d",&n,&m);   
    for(i=1;i<=n;i++)
    {
                     my_scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
     if(i<=m)
     b[i]=a[n-m+i];
     else
     b[i]=a[i-m];
    }
    my_printf("%d",b[1]);
    for(i=2;i<=n;i++)
    {
                     my_printf(" %d",b[i]);
    }
    return 0;
}