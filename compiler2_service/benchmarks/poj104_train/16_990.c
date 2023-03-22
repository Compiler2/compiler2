#define NUM_ITER 2102136

#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf ("%d",&a);
	if (a==100)
	{
		my_printf("001");
	}
	else
		if (a<=9)
		{
		my_printf("%d",a);
		}
		else
			if (a<=99)
			{
				b=a%10*10+a/10;
			my_printf("%d",b);
			}
			else
				if (a<=999)
				{
					b=a%10*100+(a/10)%10*10+a/100;
				my_printf("%d",b);
				}
				else
					if(a<=9999)
					{
						b=a%10*1000+(a/10)%10*100+(a/100)%10*10+a/1000;
					my_printf("%d",b);
					}
					return 0;
}