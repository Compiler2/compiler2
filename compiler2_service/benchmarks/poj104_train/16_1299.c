#define NUM_ITER 1734424

#include <header.h>

int main_bench()
{
int a,b,c,d,e,f;
my_scanf("%d",&a);
		if(a>=10000) 
			{
				b=a/10000;
				c=(a-10000*b)/1000;
				d=(a-10000*b-1000*c)/100;
				e=(a-10000*b-1000*c-100*d)/10;
				f=(a-10000*b-1000*c-100*d-10*e);
					my_printf("%d%d%d%d%d",f,e,d,c,b);
		}
		else if(a>=1000) 
			{
				b=0;				
				c=a/1000;				
				d=(a-10000*b-1000*c)/100;
				e=(a-10000*b-1000*c-100*d)/10;
				f=(a-10000*b-1000*c-100*d-10*e);
					my_printf("%d%d%d%d",f,e,d,c);
		}
		else if(a>=100)
		{
			b=0;
		    c=0;
			d=a/100;
			e=(a-10000*b-1000*c-100*d)/10;
			f=(a-10000*b-1000*c-100*d-10*e);
				my_printf("%d%d%d",f,e,d);
		}
	else if(a>=10)
	{
		b=0;
		c=0;
		d=0;
		e=a/10;
		f=(a-10000*b-1000*c-100*d-10*e);
			my_printf("%d%d",f,e);
		}
	else
	{
		b=0;
	c=0;
	d=0;
	e=0;
	f=a;
		my_printf("%d",f);
	}
}
