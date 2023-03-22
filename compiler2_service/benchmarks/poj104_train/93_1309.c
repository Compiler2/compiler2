#define NUM_ITER 2031245

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a>=7)
	{
		if(a%7==0)
		{
			if(a%5==0)
			{
				if(a%3==0)
				{
					my_printf("3 5 7\n");
				}
				else
				{
					my_printf("5 7\n");
				}
			}
			else
			{
				if(a%3==0)
				{
					my_printf("3 7\n");
				}
				else
				{
					my_printf("7\n");
				}
			}

		}
		else
		{
			if(a%5==0)
			{
				if(a%3==0)
				{
					my_printf("3 5\n");
				}
				else
				{
					my_printf("5\n");
				}
			}
			else
			{
				if(a%3==0)
				{
					my_printf("3\n");
				}
				else
				{
					my_printf("n\n");
				}
			}
		}
	}
	else
	{
		if(a==6||a==3)
		{
			my_printf("3\n");
		}
		else
		{
			if(a==5)
			{
				my_printf("5\n");
			}
			else
			{
				my_printf("n\n");
			}
		}
	}
	return 0;
}