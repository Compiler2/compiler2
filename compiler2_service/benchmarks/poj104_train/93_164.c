#include <header.h>

int main_bench()
{
	int n,a=0,b=0,c=0;
	my_scanf("%d",&n);
	if(n%3==0) 
	{
		my_printf("3");
	}
	else a=1;
	if(n%5==0&&a==0) 
	{
		my_printf(" 5");
	}
	else if(n%5==0&&a==1) my_printf("5");
	else b=1;
	if(n%7==0&&(a*b==0)) 
	{
		my_printf(" 7");
	}
	else if(n%7==0&&(a*b==1)) my_printf("7");
	else c=1;
	if(a*b*c) my_printf("n");
}