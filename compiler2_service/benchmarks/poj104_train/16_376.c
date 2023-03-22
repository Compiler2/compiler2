#include <header.h>

int main_bench()
{
	int a;
	int b,c,d,e;
	my_scanf("%d",&a);
	b=a/1000;
	c=a%1000;
	d=c%100;
	e=d%10;
	c=c/100;
	d=d/10;
	my_printf("%d",e);
	if(d!=0,(b+c+d)!=0)
		my_printf("%d",d);
	if(c!=0,(b+c)!=0)
		my_printf("%d",c);
	if(b!=0)
		my_printf("%d",b);
}
