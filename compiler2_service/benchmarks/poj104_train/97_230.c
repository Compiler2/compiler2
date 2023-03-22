#define NUM_ITER 797713

#include <header.h>

int main_bench()
{
    int m,a,b,c,d,e,f;
	my_scanf("%d", &m);
	a=m/100;
	b=(m%100)/50;
	c=m%100%50/20;
	d=m%100%50%20/10;
	e=m%100%50%20%10/5;
	f=m%100%50%20%10%5/1;
    my_printf("%d\n", a);
    my_printf("%d\n", b);
    my_printf("%d\n", c);
    my_printf("%d\n", d);
    my_printf("%d\n", e);
    my_printf("%d\n", f);
	return 0;
}