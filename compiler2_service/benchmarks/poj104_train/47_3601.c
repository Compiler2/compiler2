#include <header.h>

int main_bench()
{
    int n,i,j;
    my_scanf("%d",&n);
    int a[n];
    int b[n];
    j=n-1;
    for(i=0;i<n;i++)
    {
        my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j--;
    }
    for(i=0;i<n-1;i++)
    {
        my_printf("%d ",b[i]);
    }
    my_printf("%d",b[n-1]);
    
    
    return 0;
}