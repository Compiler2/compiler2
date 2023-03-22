#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g;
	my_scanf("%d",&a);
	b=a/1000;
	c=a%1000;
	d=c/100;
	e=a%100;
	f=e/10;
	g=a%10;
	
	if(b==0)
	{
		if(d==0)
		{
			if(f==0)
			{
				my_printf("%d",g);
			}
			else
			{
				my_printf("%d%d",g,f);
			}
		}
		else
		{
			my_printf("%d%d%d",g,f,d);
		}
	}
	else
	{
		my_printf("%d%d%d%d",g,f,d,b);
	}
	return 0;
}
