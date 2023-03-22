#define NUM_ITER 1589430

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	a=n%10;
	b=((n%100)-a)/10;
	c=((n%1000)-(10*b+a))/100;
	d=(n-100*c-10*b-a)/1000;
	if(d)
		my_printf("%d%d%d%d",a,b,c,d);
	else if(c)
		my_printf("%d%d%d",a,b,c);
	else if(b)
		my_printf("%d%d",a,b);
	else
		my_printf("%d",a);
	return 0;
}
