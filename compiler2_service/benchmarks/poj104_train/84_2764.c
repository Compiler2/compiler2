#include <header.h>

int main_bench()
{
	int n,a[100],i,b=0,c=0;
	my_scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>=b)
		{
			b=a[i];
		}
	}
	my_printf("%d\n",b);
	for (i=0;i<=n-1;i++)
	{
		if(a[i]==b)
		{
			b=b+1;
		}
		else if(a[i]>=c&&a[i]<b)
		{
			c=a[i];
		}
	}
	my_printf("%d",c);
}