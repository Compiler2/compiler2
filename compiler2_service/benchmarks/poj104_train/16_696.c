#include <header.h>

int main_bench()
{
	int n,i,a[6];
	my_scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(n==n%10)
		{
			i=i+5;
			my_printf("%d",n);
		}
		else
		{
			a[i]=n%10;
			n=n/10;
			my_printf("%d",a[i]);
		}
	}
	return 0;
}
