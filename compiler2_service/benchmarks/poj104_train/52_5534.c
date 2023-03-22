#define NUM_ITER 48590

#include <header.h>

int main_bench()
{
    int a[100],b[100],m,n,i,j;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(j=0,i=n-m;j<=m-1;j++,i++)
    b[j]=a[i];
    for(j=0;j<m;j++)
    {
        if(j==0)
        my_printf("%d",b[j]);
        else
        my_printf(" %d",b[j]);
    }
    for(i=0;i<n-m;i++)
    my_printf(" %d",a[i]);
    return 0;
}

