#include <header.h>

int main_bench()
{
	int n,a,b,c;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
				my_printf("3 5 7\n");
		}
	}
	if (a==0)
	{
		if (b==0)
		{
			if (c!=0)
				my_printf("3 5\n");
		}
	}
	if (a==0)
	{
		if (b!=0)
		{
			if (c==0)
				my_printf("3 7\n");
		}
	}
	if (a!=0)
	{
		if (b==0)
		{
			if (c==0)
				my_printf("5 7\n");
		}
	}
	if (a==0)
	{
		if (b!=0)
		{
			if (c!=0)
				my_printf("3\n");
		}
	}
	if (a!=0)
	{
		if (b==0)
		{
			if (c!=0)
				my_printf("5\n");
		}
	}
	if (a!=0)
	{
		if (b!=0)
		{
			if (c==0)
				my_printf("7\n");
		}
	}
	if (a!=0)
	{
		if (b!=0)
		{
			if (c!=0)
				my_printf("n\n");
		}
	}

	return 0;
}