#include <header.h>

int main_bench()
{
	int n;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	my_scanf("%d",&n);
	a=(n-n%100)/100;
	n=n-100*a;
	b=(n-n%50)/50;
	n=n-50*b;
	c=(n-n%20)/20;
	n=n-20*c;
	d=(n-n%10)/10;
	n=n-10*d;
	e=(n-n%5)/5;
	n=n-5*e;
	f=n;
	my_printf("%d\n",a);
    my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
    my_printf("%d\n",f);
    return 0;
}