#define NUM_ITER 619729

#include <header.h>

int main_bench()
{
	int a,b,i,c,d,e,f;
	c=0;
	d=0;
	e=0;
	f=0;
	my_scanf("%d",&a);
	for(i=1;i<=10000;i=i*10)
	{
		b=(a%(10*i)-a%(i))/i;
		c=c+b*10000/i;
	}
	if((c%10)!=0)
		my_printf("%d",c);
	else
	{
		d=c/10;
	    if((d%10)!=0)
			my_printf("%d",d);
		else
		{
			e=d/10;
			if((e%10)!=0)
				my_printf("%d",e);
			else
			{
				f=e/10;
				if((f%10)!=0)
					my_printf("%d",f);
				else
				{
					my_printf("%d",f/10);
				}
			}
		}
	}
}