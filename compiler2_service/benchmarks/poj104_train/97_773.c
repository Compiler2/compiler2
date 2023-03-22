#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	my_printf("%d\n",n/100);
	n=n-n/100*100;
	my_printf("%d\n",n/50);
	n=n-n/50*50;
	my_printf("%d\n",n/20);
	n=n-n/20*20;
	my_printf("%d\n",n/10);
	n=n-n/10*10;
	my_printf("%d\n",n/5);
	n=n-n/5*5;
	my_printf("%d",n);
	return 0;
}



