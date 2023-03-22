#define NUM_ITER 27440

#include <header.h>

main_bench()
{
int m=3,i,n,a,b;
my_scanf("%d",&n);
while(m<=n/2)
{for(i=2;i<=m-1;i++)
if(m%i==0)break;
if(i>=m)
{a=n-m;
for(i=2;i<=a-1;i++)
if(a%i==0)break;
if(i==a)
my_printf("%d %d\n",m,a);}
m=m+2;
}
}

