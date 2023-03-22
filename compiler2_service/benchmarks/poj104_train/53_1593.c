#include <header.h>

int main_bench()
{
int n,x=0;
my_scanf("%d",&n);
int a[n];
my_scanf("%d",&a[0]);
my_printf("%d",a[0]);
for (int i=1;i<n;i++)
{
my_scanf("%d",&a[i]);
for (int j=0;j<i;j++)
{x=0;
if (a[j]==a[i]) {x=1;break;}
}
if (x==0) my_printf(",%d",a[i]);
}
}