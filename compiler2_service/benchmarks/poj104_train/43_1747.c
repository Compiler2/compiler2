#define NUM_ITER 18551

#include <header.h>

main_bench()
{
int i,j,k,m,n,p;
my_scanf("%d",&m);
n=m/2;
for (i=1;i<=n;i++)
{
p=m-i;
for (j=2;j<=i;j++)
if (i%j==0) break;
for (k=2;k<=p;k++)
if (p%k==0) break;
if (j==i&&k==p)
my_printf("%d %d\n",i,p);
}
}