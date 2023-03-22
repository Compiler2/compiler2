#include <header.h>

int a[100],n,m;
int main_bench()
{
    int i;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<n-m;i++)
    {
        my_scanf("%d",a+m+i);
    }
    for(i=0;i<m;i++)
    {
        my_scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        my_printf("%d",a[i]);
        if(i<n-1)   putchar(' ');
    }
    putchar('\n');
    return 0;
}
