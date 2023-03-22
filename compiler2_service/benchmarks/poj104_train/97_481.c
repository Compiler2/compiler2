#define NUM_ITER 1104452

#include <header.h>


int main_bench()
{
	int a;
	my_scanf("%d", &a);
	my_printf("%d\n",a/100);
	a%=100;
	my_printf("%d\n",a/50);
	a%=50;
	my_printf("%d\n",a/20);
	a%=20;
	my_printf("%d\n",a/10);
	a%=10;
	my_printf("%d\n",a/5);
	a%=5;
	my_printf("%d\n",a);
	return 0;
}