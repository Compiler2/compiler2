#define NUM_ITER 1204398

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n%3 == 0 || n%5 == 0 || n%7 == 0)
	{
		if(n%3 == 0 && n%5 == 0 && n%7 == 0) 
		{
		my_printf("3 5 7");
		 return 0;
		}
	if(n%3 == 0 && n%5 == 0) 
		{
		my_printf("3 5");
		return 0;
		}
	if(n%3 == 0 && n%7 == 0) 
		{
		my_printf("3 7");
		return 0;
		}
	if(n%5 == 0 && n%7 == 0) 
		{
		my_printf("5 7");
		return 0;
		}
	if(n%3 == 0) my_printf("3");
	if(n%5 == 0) my_printf("5");
	if(n%7 == 0) my_printf("7");
	}
	else my_printf("n");
	return 0;
}