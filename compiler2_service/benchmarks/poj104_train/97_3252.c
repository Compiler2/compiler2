#define NUM_ITER 1214269

#include <header.h>


int main_bench()
{	int a,b,c,d,e,f,g;
    my_scanf("%d",&a);
    b=a/100;
	a-=100*b;
	c=a/50;
	a-=50*c;
	d=a/20;
	a-=20*d;
	e=a/10;
	a-=10*e;
	f=a/5;
	a-=5*f;
	g=a/1;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);		

    return 0;
}