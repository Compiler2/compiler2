#define NUM_ITER 3222

#include <header.h>

int main_bench()
{
int a[1000],b[1000],i,j,k,n,q=0;
my_scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
my_scanf("%d",&a[i]);
for(i=1;i<=n;i++)
b[i]=a[i];
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
if(a[i]+b[j]==k)
q++;}
if(q==0) my_printf("no");
else my_printf("yes");
}




