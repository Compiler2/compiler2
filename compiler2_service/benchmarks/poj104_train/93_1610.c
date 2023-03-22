#include <header.h>

int main_bench()
{
	int n,flag=0;
	my_scanf("%d",&n);
	if(n%3==0)
	{
		my_printf("3");
		flag=1;
	}
	if(n%5==0)
	{
		if(flag)
			my_printf(" ");
		my_printf("5");
		flag=1;
	}
	if(n%7==0)
	{
		if(flag)
			my_printf(" ");
		my_printf("7");
		flag=1;
	}
	if(flag==0)
		my_printf("n");
	return 0;
}