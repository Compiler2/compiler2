#define NUM_ITER 57037

#include <header.h>

int main_bench()
{
    int n,m;
    my_scanf("%d %d",&n,&m);
    int a[100],i;
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    my_printf("%d",a[n-m]);
    for(i=n-m+1;i<n;i++)
    my_printf(" %d",a[i]);
    for(i=0;i<(n-m);i++)
    my_printf(" %d",a[i]);
    getchar();
    getchar();
}