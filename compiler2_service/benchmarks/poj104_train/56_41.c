#define NUM_ITER 1872203

#include <header.h>


int main_bench()
{
    int a,b,c,n;
	my_scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=n-100*a-10*b;
	int m;
	m=100*c+10*b+a;
	my_printf("%d\n",m);
	return 0;
}