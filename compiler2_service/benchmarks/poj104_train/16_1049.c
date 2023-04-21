#define NUM_ITER 1297824

#include <header.h>

int main_bench()
{
	int a,b,c,d,e;
	my_scanf("%d",&a);
	b=a%10;
	c=(a%100-a%10)/10;
	d=(a%1000-a%100)/100;
	e=(a-a%1000)/1000;
	if(e)
		my_printf("%d%d%d%d",b,c,d,e);
	else
		if(d)
			my_printf("%d%d%d",b,c,d);
		else
		if(c)
			my_printf("%d%d",b,c);
		else
			my_printf("%d",b);
	return 0;
}