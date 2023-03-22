#define NUM_ITER 1609492

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g;
	my_scanf ("%d",&f);
	if (f>=10000)
	{
		a=(f-f%10000)/10000;
		f=f-a*10000;
		b=(f-f%1000)/1000;
		f=f-b*1000;
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*10000+d*1000+c*100+b*10+a;
	    my_printf ("%d",g);
	}
	else if (f>=1000)
	{
		b=(f-f%1000)/1000;
		f=f-b*1000;
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*1000+d*100+c*10+b*1;
    	my_printf ("%d",g);
	}
	else if (f>=100)
	{
		c=(f-f%100)/100;
		f=f-c*100;
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*100+d*10+c*1;
    	my_printf ("%d",g);
	}
	else if (f>=10)
	{
		d=(f-f%10)/10;
		f=f-d*10;
		e=f;
    	g=e*10+d*1;
    	my_printf ("%d",g);
	}
	else
	{
		e=f;
    	g=e;
    	my_printf ("%d",g);
	}
}
