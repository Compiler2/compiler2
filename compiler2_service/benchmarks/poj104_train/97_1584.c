#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f,x;
	my_scanf("%d",&n);
	a=n/100;
	x=n%100;
	b=x/50;
	x=x-b*50;
	c=x/20;
	x=x-20*c;
	d=x/10;
	x=x-10*d;
	e=x/5;
	x=x-5*e;
	f=x;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d",f);
	return 0;
    
}