#include <header.h>

main_bench()
{
int n,a[1000]={0},i,m,t,b[1000];
my_scanf("%d",&n);

t=1;
for (i=1;i<=n;i++)
 {my_scanf("%d",&m);
  if (a[m]!=1) {b[t]=m;t++;a[m]=1;}
 }
for (i=1;i<t-1;i++)
my_printf("%d,",b[i]);
 my_printf("%d",b[t-1]);
}
