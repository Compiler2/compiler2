#define NUM_ITER 1054756

#include <header.h>

int main_bench()
{
	int money;
	my_scanf("%d",&money);
	int a,b,c,d,e,f;
	a=money/100;
	b=money%100/50;
	c=money%50/20;
	d=(money%50-c*20)/10;
	e=money%10/5;
	f=money%10-e*5;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
}
