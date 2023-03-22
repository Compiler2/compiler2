#define NUM_ITER 1214934

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,x;
	my_scanf("%d",&n);
	x=n;
	a=n/10000;
	n=n%10000;
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	if(x<10)
		my_printf("%d\n",n);
	else
	{
		if(x<100)
			my_printf("%d%d\n",n,d);
		else
		{
			if(x<1000)
				my_printf("%d%d%d\n",n,d,c);
			else
			{
				if(x<10000)
					my_printf("%d%d%d%d\n",n,d,c,b);
				else
					my_printf("%d%d%d%d%d\n",n,d,c,b,a);
			}
		}
	}
	return 0;
}