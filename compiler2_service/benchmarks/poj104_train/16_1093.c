#include <header.h>

main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	a=n/1000;
	b=(n-1000*a)/100;
	c=(n-1000*a-100*b)/10;
	d=n%10;
	if(n<10)
		my_printf("%d\n",n);
	else if(n<100)
		my_printf("%d%d\n",d,c);
	else if(n<1000)
		my_printf("%d%d%d\n",d,c,b);
	else if(n<10000)
		my_printf("%d%d%d%d\n",d,c,b,a);
}