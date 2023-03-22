#include <header.h>

int main_bench()
{
	int n,m,i,a[201];
	my_scanf("%d %d\n",&n,&m);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for (i=0;i<n-m;i++)
	{
		a[i+n+m]=a[i];
	}
	for (i=n-m;i<n;i++)
	{
		a[i+m]=a[i];
	}
	for (i=0;i<n;i++)
	{
		a[i]=a[i+n];
	}
	for (i=0;i<n-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
	return 0;
} 