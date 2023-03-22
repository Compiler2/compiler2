#define NUM_ITER 50786

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,a[100],tem=0;
	for(i=0;i<n;i++)
	{
	my_scanf("%d",&a[i]);
	}
	if(n%2!=0)
	{
		for(i=0;i<=n/2;i++)
		{
		tem=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tem;
		}
	}
	if(n%2==0)
	{
		for(i=0;i<=n/2-1;i++)
		{
		tem=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=tem;
		}
	}
	for(i=1;i<n;i++)
	{
	my_printf("%d ",a[i-1]);
	}
	my_printf("%d",a[i-1]);
	return 0;

} 