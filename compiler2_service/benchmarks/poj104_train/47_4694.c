#include <header.h>

int main_bench()
{
	int a[100];
	int i;
	int n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);

	}
	for(i=n-1;i>0;i--)
	{
		my_printf("%d ",a[i]);
	}
	i=0;
	my_printf("%d\n",a[i]);

	return 0;
}

