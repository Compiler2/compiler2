#include <header.h>

int main_bench()
{
	int n,p=0,q=0,r=0;
	my_scanf("%d",&n);
	p=n/100;
	my_printf("%d\n",p);
	p=n%100;
	p=p/50;
	my_printf("%d\n",p);
	p=n%100%50;
	p=p/20;
	my_printf("%d\n",p);
	p=n%100%50%20;
	p=p/10;
	my_printf("%d\n",p);
	p=n%100%50%20%10;
	p=p/5;
	my_printf("%d\n",p);
	p=n%100%50%20%10%5;
	my_printf("%d",p);
	return 0;
}

