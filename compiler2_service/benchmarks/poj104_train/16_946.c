#include <header.h>

int main_bench()
{
	int a=0,b=0,c=0,d=0,e;
	my_scanf("%d",&e);
	while(1000*a<=e-1000)
	{
		a++;
	}
	while(1000*a+100*b<=e-100)
	{
		b++;
	}
	while(1000*a+100*b+10*c<=e-10)
	{
		c++;
	}
	d=e-10*c-100*b-1000*a;
	if(a>0)
	{
		my_printf("%d%d%d%d",d,c,b,a);
	}
	else
	{if(b>0)
	{
		my_printf("%d%d%d",d,c,b);
	}
	else
	{if(c>0)
	{
		my_printf("%d%d",d,c);
	}
	else{
		my_printf("%d",d);
	}
	}}}