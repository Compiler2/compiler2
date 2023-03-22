#include <header.h>

int main_bench()
{
    int n,k;
    my_scanf("%d",&n);
    int a[n];
    my_scanf("%d",&a[0]);
    my_printf("%d",a[0]);
    for (int i=1;i<n;i++)
    {
        my_scanf("%d",&a[i]);
        k=1;
        for (int j=0;j<i;j++)
        {    if (a[i]==a[j])
            k=0;}
        if(k!=0) my_printf(" %d",a[i]);
           
        }
    }
