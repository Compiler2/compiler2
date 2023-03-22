#define NUM_ITER 2023861

#include <header.h>


int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			if(a%7==0)
				my_printf("%d %d %d\n",3,5,7);
			else
				my_printf("%d %d\n",3,5);
		}
		else
		{
			if(a%7==0)
				my_printf("%d %d\n",3,7);
			else
				my_printf("%d\n",3);
		}
	}
	else
	{
     if(a%5==0)
		{
			if(a%7==0)
				my_printf("%d %d\n",5,7);
			else
				my_printf("%d\n",5);
		}
		else
		{
			if(a%7==0)
				my_printf("%d\n",7);
			else
				my_printf("n\n");
		}
	}
}