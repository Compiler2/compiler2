#include <header.h>

int main_bench()
{
	int m=1,n,a,b,c;
	my_scanf("%d",&n);
	my_scanf("%d%d",&b,&c);
	if(c>b)
	{
		c=c+b;b=c-b;c=c-b;
	}
	while (m<=n)
	{
		my_scanf("%d",&a);
		if (a>b)
		{
			a=a+b;b=a-b;a=a-b;
		}
		else if (a>c)
		{
			a=a+c;c=a-c;a=a-c;
		}
		m++;
	}
	my_printf("%d\n%d",b,c);
}