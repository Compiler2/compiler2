#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	a=n/1000;
	b=(n%1000)/100;
	c=(n%100)/10;
    d=n%10;
	if (n<10) my_printf("%d",d);
	else if(n<100) my_printf("%d%d",d,c);
	else if(n<1000) my_printf("%d%d%d",d,c,b);
	else if(n<10000) my_printf("%d%d%d%d",d,c,b,a);
	return 0;
}