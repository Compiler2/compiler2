#include <header.h>


int main_bench()
{
int n,i,a[100],max,sm;
my_scanf("%d\n",&n);
for(i=0;i<=n-2;i++)
my_scanf("%d\n",&a[i]);
my_scanf("%d",&a[n-1]);
max=a[0];
for(i=0;i<=n-1;i++)
{if(a[i]>max) max=a[i];}
my_printf("%d\n",max);
sm=a[0];
for(i=0;i<=n-1;i++)
{if(a[i]!=max&&a[i]>sm) sm=a[i];}
my_printf("%d",sm);
}


