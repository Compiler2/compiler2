#define NUM_ITER 1741665

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f,x;
	my_scanf("%d",&n);
    a=(int)(n/100);
	x=n-100*a;
	if(x>=50)
	{
		b=1;
		x-=50;
	}
	else b=0;
    c=(int)(x/20);
	x-=c*20;
    d=(int)(x/10);
	x-=d*10;
	if(x>=5)
	{
		e=1;
		x-=5;
	}
	else e=0;
	f=x;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
    return 0;
}