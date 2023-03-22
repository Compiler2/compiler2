#define NUM_ITER 1979671

#include <header.h>

int main_bench()
{
	int a,b,c,d,n;
	my_scanf("%d", &n);
	if (n>=1 && n<=9)
	{
		my_printf("%d", n);
	}
	if (10<=n && n<=99)
	{
		a=n/10;
		b=n-a;
		my_printf("%d%d", b,a);
	}
	if (100<=n && n<=999)
	{
		a=n/100;
		b=(n-100*a)/10;
		c=n-a*100-b*10;
		my_printf("%d%d%d", c,b,a);
	}
	if (1000<=n && n<=9999)
	{
		a=n/1000;
		b=(n-1000*a)/100;
		c=(n-1000*a-b*100)/10;
		d= n-a*1000-b*100-c*10;
		my_printf ("%d%d%d%d",d,c,b,a);
	}
	return 0;
}
