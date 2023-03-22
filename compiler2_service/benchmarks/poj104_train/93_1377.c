#include <header.h>

int main_bench()
{
	int x,d=0;
	int a=3,b=5,c=7;
	my_scanf("%d",&x);
	if(x%a==0&&x%b==0&&x%c==0)
	{
		my_printf("3 5 7");
	}
	else if(x%a==0&&x%b==0&&x%c!=0)
	{
		my_printf("3 5");
	}
	else if(x%a==0&&x%b!=0&&x%c==0)
	{
		my_printf("3 7");
	}
	else if(x%a!=0&&x%b==0&&x%c==0)
	{
		my_printf("5 7");
	}
	else if(x%a==0&&x%b!=0&&x%c!=0)
	{
		my_printf("3");
	}
	else if(x%a!=0&&x%b==0&&x%c!=0)
	{
		my_printf("5");
	}
	else if(x%a!=0&&x%b!=0&&x%c==0)
	{
		my_printf("7");
	}
	else if(x%a!=0&&x%b!=0&&x%c!=0)
	{
		my_printf("n");
	}
	return 0;
}