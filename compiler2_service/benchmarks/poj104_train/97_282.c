#include <header.h>

int main_bench()
{
	int n,a100,a50,a20,a10,a5,a1;
	my_scanf("%d",&n);
	a100=n/100;n=n%100;
	a50=n/50;n=n%50;
	a20=n/20;n=n%20;
	a10=n/10;n=n%10;
	a5=n/5;n=n%5;
	a1=n;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a100,a50,a20,a10,a5,a1);
	return 0;
}

