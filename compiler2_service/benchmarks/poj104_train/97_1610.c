#define NUM_ITER 1450347

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
	a=n/100;
	b=n/50-2*a;
	c=(n-100 *a-50*b)/20;
	d=(n-100 *a-50*b-20*c)/10;
	e=(n-100 *a-50*b-20*c-d*10)/5;
	f=(n%5)/1;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}