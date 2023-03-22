#include <header.h>

int main_bench()
{
    int a[110],b[110],i,n,m,j;
    my_scanf("%d%d",&n,&m);
    j=m;
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    i=0;
    while(j>0)
    {
       b[i]=a[n-j];
       j--;
       i++;
    }
    while(j<=0&&i<n)
    {
        b[i]=a[i-m];
        j--;
        i++;
    }
    for(i=0;i<n-1;i++)
    {
       my_printf("%d ",b[i]);
    }
    my_printf("%d",b[n-1]);
    return 0;
}
