#define NUM_ITER 6228

#include <header.h>

int main_bench()
{int n,k,i,j,a[1009],t,l;
my_scanf("%d%d",&n,&k);t=0;l=0;
for(i=1;i<=n;i++)
my_scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
{
		if(k==a[i]+a[j])
{
			l=l+1;
	
		}
else
t=t+1;
}
}
if(t==n*(n-1)/2)
my_printf("no");
else if(l>=1)
my_printf("yes");
}
