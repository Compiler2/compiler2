#include <header.h>


int main_bench()
{
	int a,b;
	my_scanf ("%d",&a);
	b=a/100;
	a=a-b*100;
	my_printf ("%d\n",b);
	b=a/50;
	a=a-b*50;
	my_printf ("%d\n",b);
	b=a/20;
	a=a-b*20;
	my_printf ("%d\n",b);
    b=a/10;
	a=a-b*10;
	my_printf ("%d\n",b);
    b=a/5;
	a=a-b*5;
	my_printf ("%d\n",b);
	my_printf ("%d\n",a);
	return 0;
}