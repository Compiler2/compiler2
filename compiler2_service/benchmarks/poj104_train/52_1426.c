#include <header.h>

main_bench()
{
int n,m,a[100],i;
my_scanf("%d %d\n",&n,&m);
for(i=0;i<n;i++)
my_scanf("%d ",&a[i]);
for(i=(n-m);i<n;i++)
my_printf("%d ",a[i]);
for(i=0;i<(n-m-1);i++)
my_printf("%d ",a[i]);
if(i=(n-m-1)) my_printf("%d",a[i]);
}

