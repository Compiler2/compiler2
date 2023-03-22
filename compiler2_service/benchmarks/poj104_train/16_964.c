#define NUM_ITER 1834837

#include <header.h>

int main_bench()
{
	int x,a,b,c,d;
	my_scanf("%d",&x);
	if(x==10000)
		my_printf("00001\n");
	else
	{
		a=x/1000;
		b=(x-a*1000)/100;
		c=(x-a*1000-b*100)/10;
		d=x-a*1000-b*100-c*10;
		if(a)
			my_printf("%d%d%d%d\n",d,c,b,a);
		else
		{
			if(b)
				my_printf("%d%d%d\n",d,c,b);
			else
			{
				if(c)
					my_printf("%d%d\n",d,c);
				else
					my_printf("%d\n",d);
			}
		}
	}
}
