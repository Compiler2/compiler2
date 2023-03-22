#define NUM_ITER 1825356

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	if (n==10000)
	{
		n=00001;
	}
	else 
	{
		if(n>=1000)
		{
			a=n%10;
			b=(n-a)%100/10;
			d=n/1000;
			c=n/100-d*10;
			my_printf("%d",a);
			my_printf("%d",b);
			my_printf("%d",c);
			my_printf("%d",d);
		}
		else
		{
			if(n>=100)
			{
				a=n%10;
				b=(n-a)%100/10;
				c=n/100;
				my_printf("%d",a);
				my_printf("%d",b);
				my_printf("%d",c);
			}
			else 
			{
				if(n>=10)
				{
					a=n%10;
					b=n/10;
					my_printf("%d",a);
					my_printf("%d",b);
				}
				else
				{
					my_printf("%d",n);
				}
			}
		}
	}
	return 0;
}
				
