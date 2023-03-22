#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a=0;
	a=n%100;
	a=(n-a)/100;
	my_printf("%d\n",a);
	n=n-a*100;
	a=n%50;
	a=(n-a)/50;
	my_printf("%d\n",a);
	n=n-a*50;
	a=n%20;
	a=(n-a)/20;
	my_printf("%d\n",a);
	n=n-a*20;
	a=n%10;
	a=(n-a)/10;
	my_printf("%d\n",a);
	n=n-a*10;
	a=n%5;
	a=(n-a)/5;
	my_printf("%d\n",a);
	n=n-a*5;
	a=n%1;
	a=(n-a)/1;
	my_printf("%d",a);
	return 0;
}

