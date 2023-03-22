#include <header.h>

int main_bench()
{
	int n,m,i;
	int a[400];
	my_scanf("%d",&n);
	my_scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		a[i+200]=a[i];
	}
	for(i=1;i<=m;i++)
	{
		a[i]=a[i+n-m+200];
	}
	for(i=1;i<=n-m;i++)
	{
		a[m+i]=a[200+i];
	}
	for(i=1;i<=n-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n]);
}
