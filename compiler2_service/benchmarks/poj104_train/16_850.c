#define NUM_ITER 1800577

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,n;
	my_scanf("%d",&a);
	if(a>=1000)
	{
		b=a/1000;
	c=a-b*1000;
	d=c/100;
	e=c-100*d;
	f=e/10;
	g=e-10*f;

	n=g*1000+f*100+d*10+b;
	my_printf("%04d",n);
	}
	else if(a>=100)
	{
		b=a/100;
	    c=a-b*100;
		d=c/10;
		e=c-10*d;
		n=100*e+10*d+b;
		my_printf("%03d",n);
	}
		else if(a>=10)
		{
			b=a/10;
		c=a-10*b;
		n=10*c+b;
		my_printf("%02d",n);
		}
		else
			
		{
			my_printf("%d",a);
		}
		return 0;
}