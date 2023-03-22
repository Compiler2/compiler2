#define NUM_ITER 1789113

#include <header.h>

int flag,n;
int main_bench()
{
	my_scanf("%d",&n);
	flag=0;
	if (n%3==0)
	{my_printf("3");flag=1;}
	if (n%5==0)
	{
		if (flag==0)
		{my_printf("5");flag=1;}
		else
			my_printf(" 5");
	}
	if (n%7==0)
	{
		if (flag==0)
		{my_printf("7");flag=1;}
		else
			my_printf(" 7");
	}
	if (flag==0) my_printf("n");
	my_printf("\n");
}
		    
		