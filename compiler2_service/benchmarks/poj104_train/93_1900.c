#define NUM_ITER 1665706

#include <header.h>

int main_bench()
{
	int x;
	int flag=0;

	my_scanf("%d", &x);

	if (x%3==0)
	{
		my_printf("3");
		flag = 1;
	}
	if (x%5==0)
	{
		if (flag==1)
		{
			my_printf(" ");
		}
		flag=1;
		my_printf("5");

	}
	if (x%7==0)
	{
		if (flag==1)
		{
			my_printf(" ");
		}
		flag=1;
		my_printf("7");
	}
	if (x%3!=0 && x%5!=0 && x%7!=0)
	{
		my_printf("n");
	}

	return 0;
}