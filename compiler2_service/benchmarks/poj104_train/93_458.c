#define NUM_ITER 1549102

#include <header.h>

int main_bench()
{
	int x;
	my_scanf("%d",&x);
	if(x%3==0 && x%5==0 && x%7==0)
	{
		my_printf("3 5 7");
	}
	else if(x%15==0)
	{
		my_printf("3 5");
	}
	else if(x%21==0)
	{
		my_printf("3 7");
	}
	else if(x%35==0)
	{
		my_printf("5 7");
	}
	else if(x%3==0)
	{
		my_printf("3");
	}
	else if(x%5==0)
	{
		my_printf("5");
	}
	else if(x%7==0)
	{
		my_printf("7");
	}
	else
	{
		my_printf("n");
	}
	return 0;
}
