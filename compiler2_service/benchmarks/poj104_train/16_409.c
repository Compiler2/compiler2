#define NUM_ITER 1228962

#include <header.h>

int main_bench()
{
	int num,a,b,c,d,e;
	my_scanf("%d",&num);
	a=num/10000;
	b=num%10000/1000;
	c=num%1000/100;
	d=num%100/10;
	e=num%10;
	if (num/10000==1)
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	else if (num/1000!=0)
		my_printf("%d%d%d%d",e,d,c,b);
	else if (num/100!=0)
		my_printf("%d%d%d",e,d,c);
	else if (num/10!=0)
		my_printf("%d%d",e,d);
	else my_printf("%d",e);
}
