#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
	b=a%10;
	my_printf("%d",b);
	c=a/10;
	if(c!=0)
		my_printf("%d",c%10);
	d=a/100;
	if(d!=0)
		my_printf("%d",d%10);
	e=a/1000;
	if(e!=0)
		my_printf("%d",e);

	return 0;
}