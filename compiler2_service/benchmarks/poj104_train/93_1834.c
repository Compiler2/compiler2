#define NUM_ITER 1985052

#include <header.h>


int main_bench()
{
	int n=0, x;
	my_scanf("%d", &x);
	if(x%3==0)
	{
		my_printf("3");
		n++;
	}
	if(x%5==0)
	{
		if(n!=0) my_printf(" ");
		my_printf("5");
		n++;
	}
	if(x%7==0)
	{
		if(n!=0) my_printf(" ");
		my_printf("7");
		n++;
	}
	if(n==0) my_printf("n");
	return 0;
}