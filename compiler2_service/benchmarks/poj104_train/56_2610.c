#define NUM_ITER 1855839

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n>9999)
	{
		int a,b,c,d,e;
		a=n%10;
		b=(n%100-a)/10;
		c=(n%1000-10*b-a)/100;
		d=(n%10000-100*c-10*b-a)/1000;
		e=n/10000;
		my_printf("%d%d%d%d%d\n",a,b,c,d,e);
	}
	else
	if(n>999)
	{
		int a,b,c,d;
		a=n%10;
		b=(n%100-a)/10;
		c=(n%1000-10*b-a)/100;
		d=n/1000;
		my_printf("%d%d%d%d\n",a,b,c,d);
	}
	else
	if(n>99)
	{
		int a,b,c;
		a=n%10;
		b=(n%100-a)/10;
		c=n/100;
		my_printf("%d%d%d\n",a,b,c);
	}
	else
	if(n>9)
	{
		int a,b;
		a=n%10;
		b=n/10;
		my_printf("%d%d\n",a,b);
	}
	else
		my_printf("%d\n",n);
	
	return 0;
}