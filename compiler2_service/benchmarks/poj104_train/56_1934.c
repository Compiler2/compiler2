#define NUM_ITER 1839204

#include <header.h>

main_bench()
{
	int n,a,b,c,d,f;
	my_scanf("%d",&n);
	if(n<10)
	{
		my_printf("%d",n);
	}
	else
	{
		if(n<100)
		{
		a=n/10;
		b=n%10;
		my_printf("%d%d",b,a);
		}
		else
		{
			if(n<1000)
			{
				a=n/100;
			    b=(n%100)/10;
				c=n%10;
				my_printf("%d%d%d",c,b,a);
			}
			else
			{
				if(n<10000)
				{
					a=n/1000;
					b=(n%1000)/100;
					c=(n%100)/10;
					d=n%10;
					my_printf("%d%d%d%d",d,c,b,a);
				}
				else
				{
					a=n/10000;
					b=(n%10000)/1000;
					c=(n%1000)/100;
					d=(n%100)/10;
					f=n%10;
					my_printf("%d%d%d%d%d",f,d,c,b,a);
				}
			}
		}
	}
}