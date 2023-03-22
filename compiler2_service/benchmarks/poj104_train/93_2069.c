#include <header.h>

int main_bench()
{
	int a,b,c,u;

	my_scanf("%d",&u);
	a=u%3;
	b=u%5;
	c=u%7;

	if (a>0) 
	{
		if (b>0)
			if (c>0) my_printf("n");
			else my_printf("7");
		else 
			if (c>0) my_printf("5");
			else my_printf("5 7");
	}
	else 
	{
		if (b>0)
			if (c>0) my_printf("3");
			else my_printf("3 7");
		else 
			if (c>0) my_printf("3 5");
			else my_printf("3 5 7");
	}

}