#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d\n",&n);
	my_scanf("%d\n",&a);
	my_scanf("%d\n",&b);
	if(a>=b)
	{
		c=a;
		d=b;
	}
	else
	{
		c=b;
		d=a;
	}
	for(int i=0;i<n-2;i++)
	{
		my_scanf("%d\n",&e);
		if(e>=c)
		{
			d=c;
			c=e;}
		else if(e<c&&e>=d)
			d=e;
	}
	my_printf("%d\n%d\n",c,d);
	return 0;
}
	