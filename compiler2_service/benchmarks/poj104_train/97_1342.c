#define NUM_ITER 930960

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i;
	int j;
	i=n/100;
	j=n%100;
	n=j;
	my_printf("%d\n",i);
	i=n/50;
	j=n%50;
	n=j;
	my_printf("%d\n",i);
	i=n/20;
	j=n%20;
	n=j;
	my_printf("%d\n",i);
	i=n/10;
	j=n%10;
	n=j;
	my_printf("%d\n",i);
	i=n/5;
	j=n%5;
	n=j;
	my_printf("%d\n",i);
	i=n/1;
	j=n%1;
	n=j;
	my_printf("%d\n",i);
	return 0;
}