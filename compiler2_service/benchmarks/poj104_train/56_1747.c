#define NUM_ITER 1290742

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,m;
	my_scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n%10;
	m=10000*e+1000*d+100*c+10*b+a;

	if(m%10000==0) m=m/10000;
	else if(m%1000==0) m=m/1000;
	else if(m%100==0) m=m/100;
	else if(m%10==0) m=m/10;

	my_printf("%d\n",m);
}

