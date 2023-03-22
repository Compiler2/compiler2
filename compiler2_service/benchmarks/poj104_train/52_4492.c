#define NUM_ITER 44237

#include <header.h>

int main_bench()
{
    int a[100],b[100],n,m,i,j;
    my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(j=0,i=n-m;i<n;j++,i++)
    b[j]=a[i];
    for(i=0,j=m;j<n;i++,j++)
    b[j]=a[i];
    for(i=0;i<n-1;i++)
    my_printf("%d ",b[i]);
    if(i=n-1) my_printf("%d",b[i]);
}