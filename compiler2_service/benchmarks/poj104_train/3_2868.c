#include <header.h>


int main_bench()
{
int n,k,a[1010],s,i,u=0;
my_scanf("%d%d",&n,&k);
for (i=0;i<=n-1;i++)
{
my_scanf("%d",&s);
if (s<k)
{
a[u]=s;u++;
}
}
for (i=u-1;i>=1;i--)
{
for (s=0;s<=i-1;s++)
{
if (a[s]==k-a[i])
{
my_printf("yes\n");return 0;
}
}
}
my_printf("no\n");return 0;
}