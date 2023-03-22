#include <header.h>

int main_bench()
{
    int a[200];
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
    for(i=0;i<=n-1;i++)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		a[i]=a[2*n-1-i];
	}
	for(i=0;i<=n-2;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
}