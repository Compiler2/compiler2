#define NUM_ITER 2018483

#include <header.h>

int main_bench()
{int a;
	my_scanf("%d",&a);
		if(a%3==0)
		{	my_printf("3");
			if(a%5==0)
			{	my_printf(" 5");
				if(a%7==0)
					my_printf(" 7");
				else
				return 0;
			}
			else
			{	if(a%7==0)
					my_printf(" 7");
				else
				return 0;
			}
		}
		else
		{	if(a%5==0)
			{	my_printf("5");
				if(a%7==0)
					my_printf(" 7");
				else
				return 0;
			}
			else
			{	if(a%7==0)
					my_printf("7");
				else
                    my_printf("n");
					return 0;
			}
		}
		

}