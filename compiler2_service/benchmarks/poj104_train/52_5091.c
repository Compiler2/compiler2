#include <header.h>


void move(int a[],int b[],int n,int m)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        if(i>=m)
            b[i]=a[i-m];
        else
            b[i]=a[n-m+i];
    }
}

int main_bench()
{
    int a[100],b[100],n,m,i;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
        my_scanf("%d",&a[i]);
    move(a,b,n,m);
    for(i=0;i<=n-2;i++)
        my_printf("%d ",b[i]);
    my_printf("%d",b[n-1]);
    return 0;
}