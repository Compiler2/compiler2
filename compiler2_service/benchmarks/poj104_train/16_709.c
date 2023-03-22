#define NUM_ITER 1357623

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
	d=a%10;
	b=(a%1000-a%100)/100;
	c=(a%100-d)/10;
	e=(a%10000-a%1000)/1000;
	if(a>=1000)
my_printf("%d%d%d%d\n",d,c,b,e);
	else if(a>=100)
	{
		my_printf("%d%d%d\n",d,c,b);
	}
	else if(a>=10)
		my_printf("%d%d\n",d,c);
	else
		my_printf("%d\n",d);
	return 0;
}