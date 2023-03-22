#define NUM_ITER 1549401

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,x,y;
	my_scanf("%d",&x);
	a=(int)(x/10000);
	b=(int)((x-a*10000)/1000);
	c=(int)((x-a*10000-b*1000)/100);
	d=(int)((x-a*10000-b*1000-c*100)/10);
	e=(int)(x-a*10000-b*1000-c*100-d*10);
if(a==0)
{
	if(b!=0)
	{
		y=e*1000+d*100+c*10+b*1+a;
		my_printf("%d",y);
	}
	else
	{
		if(c!=0)
		{
		y=e*100+d*10+c*1;
		my_printf("%d",y);
		}
		else
		{
			if(d!=0)
			{
				y=e*10+d;
				my_printf("%d",y);
			}
			else
			{
				if(e!=0)
				{
				y=e;
				my_printf("%d",y);
				}
				else
					my_printf("wrong");
			}
		}
	}
}
else
{
	y=e*10000+d*1000+c*100+b*10+a;
	my_printf("%d",y);
}
}