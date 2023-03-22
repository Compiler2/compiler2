#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d\n",&n);
    int a[100],b[100];
    for(i=0;i<n;i++)
    {
        my_scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    for(i=0;i<n-1;i++)
    {
        my_printf("%d ",b[i]);
    }
    my_printf("%d",b[n-1]);
    return 0;
}
