#define NUM_ITER 1683048

#include <header.h>

int main_bench()
{
	int x;
	my_scanf("%d",&x);
	int a,b,c;
	a=x%3;
	b=x%5;
	c=x%7;
	if(a==0&&b==0&&c==0)
		my_printf("3 5 7");
	else
	{
	x=x;
	}
	if(a!=0&&b==0&&c==0)
		my_printf("5 7");
	else
    {
	x=x;
	}
	if(a==0&&b!=0&&c==0)
		my_printf("3 7");
	else
	{
	x=x;
    }
	if(a==0&&b==0&&c!=0)
		my_printf("3 5");
	else
    {
	x=x;
	}
	if(a!=0&&b!=0&&c==0)
		my_printf("7");
	else
	{
	x=x;
	}
	if(a!=0&&b==0&&c!=0)
		my_printf("5");
	else
	{
	x=x;
	}
	if(a==0&&b!=0&&c!=0)
		my_printf("3");
	else
	{
	x=x;
	}
	if(a!=0&&b!=0&&c!=0)
		my_printf("n");
	else
	{
	x=x;
	}
    return 0;
}