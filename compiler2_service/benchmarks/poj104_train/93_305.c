#define NUM_ITER 1717828

#include <header.h>



int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n%3==0)
	{
		if(n%35==0)
		{
			my_printf("3 5 7");
		}
		else
		{
			if(n%5==0)
			{
				my_printf("3 5");
			}
			if(n%7==0)
			{
				my_printf("3 7");
			}
			if(n%5!=0&&n%7!=0)
			{
				my_printf("3");
			}
		}
	}
	else
	{
		if(n%35==0)
		{
			my_printf("5 7");
		}
		else
		{
			if(n%5==0)
			{
				my_printf("5");
			}
			if(n%7==0)
			{
				my_printf("7");
			}
			if(n%5!=0&&n%7!=0)
			{
				my_printf("n");
			}
		}
	}
	return 0;
}