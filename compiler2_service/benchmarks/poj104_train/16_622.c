#define NUM_ITER 1401501

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f;
	my_scanf("%d",&a);
    b=a/10000;
	c=(a-10000*b)/1000;
	d=(a-10000*b-1000*c)/100;
	e=(a-10000*b-1000*c-100*d)/10;
	f=a-10000*b-1000*c-100*d-10*e;
	if(b==1)
	{
	my_printf("%d%d%d%d%d%d",f,e,d,c,b);
	}
	else
	{
		if(c>=1)
		{my_printf("%d%d%d%d",f,e,d,c);
		}
		else
		{
			if(d>=1)
			{
				my_printf("%d%d%d",f,e,d);
			}
			else
			{
				if(e>=1)
				{
					my_printf("%d%d",f,e);
				}
				else
				{
					my_printf("%d",f);
				}
			}
		}
	}
	return 0;
}