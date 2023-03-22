#define NUM_ITER 1943260

#include <header.h>

int main_bench()
{
	int x,a,b,c,d,e;
    my_scanf("%d",&x);
	if (x>=10000)
	{
		a=x/10000;
		b=(x-a*10000)/1000;
		c=(x-a*10000-b*1000)/100;
		d=(x-a*10000-b*1000-c*100)/10;
		e=x-a*10000-b*1000-c*100-d*10;
		x=e*10000+d*1000+c*100+b*10+a;
	}
	else if(x>=1000)
	{
		b=x/1000;
		c=(x-b*1000)/100;
        d=(x-b*1000-c*100)/10;
		e=x-b*1000-c*100-d*10;
		x=e*1000+d*100+c*10+b;
	}
	else if(x>=100)
	{
		c=x/100;
	    d=(x-c*100)/10;
		e=x-c*100-d*10;
		x=e*100+d*10+c;
	}
	else if(x>=10)
	{
		d=x/10;
		e=x-d*10;
		x=e*10+d;
	}
	else 
	{
		e=x;
		x=e;
	}	
	my_printf("%d",x);
}


