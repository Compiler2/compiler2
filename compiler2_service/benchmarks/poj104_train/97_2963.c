#define NUM_ITER 1265057

#include <header.h>

int main_bench()
{   
	int a,b,c,d,e,f,m;
	my_scanf("%d",&m);
	a=m/100,m=m-100*a;
	b=m/50,m=m-50*b;
	c=m/20,m=m-20*c;
	d=m/10,m=m-10*d;
	e=m/5,m=m-5*e;
	f=m;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;


}