#define NUM_ITER 1437602

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if((7+n)%7==0)
	{
		my_printf("1\n10\n");
	}else if((31+n)%7==0)
	{
		my_printf("2\n3\n11\n");
	
	}else if((2*31+n)%7==0)
	{
		my_printf("4\n7\n");
	}else if((2*31+30+n)%7==0)
	{
		my_printf("5");
	}else if((30+3*31+n)%7==0)
	{
		my_printf("6");
	}else if((4*31+2*30+n)%7==0)
	{
		my_printf("8");
	}else if((5*31+2*30+n)%7==0)
	{
		my_printf("9\n12\n");
	
	}

return 0;
}
