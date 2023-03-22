#include <header.h>


int main_bench()
{
	int n;
	int a,b,c;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(c==0)
	{
		if(a==0) my_printf("3 ");
		if(b==0) my_printf("5 ");
		if(c==0) my_printf("7");
	}
	else if(b==0)
	{
		if(a==0) my_printf("3 ");
		if(b==0) my_printf("5");
	}
	else if(a==0)
	{
		if(a==0) my_printf("3");
	}
	else my_printf("n");
	return 0;
	
}