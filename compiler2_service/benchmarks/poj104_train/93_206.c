#include <header.h>

int main_bench()
{
	int a,b,c,d;char n;
	b=3;
	c=5;
	d=7;n='n';
	my_scanf("%d",&a);
	if(a%b==0)
	{
		if(a%c==0)
		{
			if(a%d==0)
			{
				my_printf("%d %d %d",b,c,d);
			}
			else
				my_printf("%d %d",b,c);
		}
		else
		{
			if(a%d==0)
			{
				my_printf("%d %d",b,d);
			}
			else
				my_printf("%d",b);
		}
	}
	else
	{
        if(a%c==0)
		{
			if(a%d==0)
			{
				my_printf("%d %d",c,d);
			}
			else
				my_printf("%d",c);
		}
		else
		{
			if(a%d==0)
			{
				my_printf("%d",d);
			}
			else
				my_printf("%c",n);
		}
	}
	return 0;
}