#define NUM_ITER 2021740

#include <header.h>

int main_bench()
{
	int n,num;
	my_scanf("%d",&num);
	if(num%3==0)
	{if(num%5==0)
	{if(num%7==0)
	my_printf("%d %d %d",3,5,7);
	else
		my_printf("%d %d",3,5);
	}
	else if(num%7==0)
		my_printf("%d %d",3,7);
	else my_printf("%d",3);
	}
	else
		if(num%5==0)
		{if(num%7==0)
		my_printf("%d %d",5,7);
		else my_printf("%d",5);
		}
		else if(num%7==0)
			my_printf("%d",7);
		else
			my_printf("n");
}




