#include <header.h>

int main_bench()
{
	int s,a,b,c,d,e;
	my_scanf("%d",&s);
	a=s/10000;
	b=(s-10000*a)/1000;
	c=(s-10000*a-1000*b)/100;
	d=(s-10000*a-1000*b-100*c)/10;
	e=(s-10000*a-1000*b-100*c-10*d);
	if (a!=0) my_printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0) my_printf("%d%d%d%d",e,d,c,b);
	else if(c!=0) my_printf("%d%d%d",e,d,c);
	else if(b!=0) my_printf("%d%d",e,d);
	else if(e!=0) my_printf("%d",e);
	else my_printf("0");

	return 0;
}
