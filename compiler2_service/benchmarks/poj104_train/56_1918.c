#define NUM_ITER 1738492

#include <header.h>

int main_bench()
{
	int num,a,b,c,d,e;
	my_scanf("%d",&num);
	a=num/10000;
	b=num/1000-a*10;
	c=num/100-100*a-10*b;
	d=num/10-1000*a-100*b-10*c;
	e=num-a*10000-b*1000-c*100-d*10;
	if(a!=0)
		my_printf("%d%d%d%d%d",e,d,c,b,a);
	else if(b!=0)
		my_printf("%d%d%d%d",e,d,c,b);
	else if(c!=0)
		my_printf("%d%d%d",e,d,c);
	else if(d!=0)
		my_printf("%d%d",e,d);
	else if(e!=0)
		my_printf("%d",e);
	else 
		my_printf("0");
}