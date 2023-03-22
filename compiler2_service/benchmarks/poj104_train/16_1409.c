#include <header.h>

int main_bench()
{
	int a,b,c,d,n;
	my_scanf("%d",&n);
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n-a*1000-b*100-c*10;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				my_printf("%d\n",d);
			}
			else
			{	
			my_printf("%d%d\n",d,c);
			}
		}
		else
		{
			my_printf("%d%d%d\n",d,c,b);
		}
	}
	else
	{
		my_printf("%d%d%d%d\n",d,c,b,a);
	}
	return 0;
}