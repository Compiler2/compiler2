#define NUM_ITER 2031333

#include <header.h>

int main_bench()
{
	int i;
	my_scanf("%d",&i);
	if(i%3==0) 
	{my_printf("3");
	if(i%5==0)
		my_printf(" 5");
	if(i%7==0)
    	my_printf(" 7");
	}
    else if(i%5==0) 
	{
		my_printf("5");
	    if(i%7==0)
		my_printf(" 7");
	}
	else if(i%7==0)
	{
	my_printf("7");
	}
	else
	{my_printf("n");
	}
	return 0;
}

