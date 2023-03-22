#define NUM_ITER 1265142

#include <header.h>

int main_bench()
{
    int n,a,b,c,d,e,f;
	a=b=c=d=e=f=0;
	my_scanf ("%d",&n);

	a=n/100;
	b=(n-100*a)/50;
	c=(n-100*a-50*b)/20;
	d=(n-100*a-50*b-20*c)/10;
	e=(n-100*a-50*b-20*c-10*d)/5;
	f=(n-100*a-50*b-20*c-10*d-e*5);
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}