#include <header.h>

int main_bench()
{
	int num;
	my_scanf("%d",&num);
	if(num%3==0)
	{
		my_printf("3");
		if(num%5==0)
		{
			my_printf(" %d",5);
			if(num%7==0)
				my_printf(" %d",7);
		}
		else if(num%7==0)
			my_printf(" %d",7);
	}
	else if(num%5==0)
		{
			my_printf("%d",5);
			if(num%7==0)
				my_printf(" %d",7);
		}
	else if(num%7==0)
			my_printf("%d",7);
	else
		my_printf("n");
	return 0;
}
