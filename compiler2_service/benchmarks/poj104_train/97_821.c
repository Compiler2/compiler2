#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e,f;
	
	my_scanf("%d",&n);
	a=n/100;
	my_printf("%d\n",a);
	n=n%100;
	b=n/50;
    my_printf("%d\n",b);
	n=n%50;
    c=n/20;
    my_printf("%d\n",c);
	n=n%20;
	d=n/10;
    my_printf("%d\n",d);
	n=n%10;
	e=n/5;
    my_printf("%d\n",e);
	n=n%5;
	f=n/1;
    my_printf("%d\n",f);
	n=n%1;
	return 0;
}

  