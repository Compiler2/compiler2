#define NUM_ITER 1170436

#include <header.h>


int main_bench()
{
	int mon;
	int a, b, c, d, e, f;
	my_scanf("%d",&mon);
	a=(mon-mon%100)/100;
	b=(mon%100-(mon-a*100)%50)/50;
	c=(mon-a*100-b*50-(mon-a*100-b*50)%20)/20;
	d=(mon-(2*a+b)*50-c*20)/10;
	e=(mon-(10*a+5*b+2*c+d)*10)/5;
	f=mon-100*a-50*b-20*c-10*d-5*e;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;


}