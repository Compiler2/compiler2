#include <header.h>

int main_bench()
{
	int x;
	int a,b,c,d,e,f;
	my_scanf("%d%d%d%d%d%d%d",&x,&a,&b,&c,&d,&e,&f);
	a=x/100;
	b=x%100/50;
	c=x%50/20;
	d=(x%50)%20/10;
	e=x%10/5;
	f=x%5;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}
