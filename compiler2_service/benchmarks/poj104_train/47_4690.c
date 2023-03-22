#include <header.h>

int main_bench()
{
	int n,i,b;
	my_scanf("%d",&n);
	int a[1000];
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&b);
		a[i]=b;
	}
	for(i=n;i>1;i--)
	{
		b=a[i];
		my_printf("%d ",b);
	}
	b=a[1];
	my_printf("%d",b);
	return 0;
}
