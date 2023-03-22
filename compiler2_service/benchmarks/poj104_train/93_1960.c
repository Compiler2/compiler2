#include <header.h>

int main_bench()
{
	int n,a,b,c;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a!=0&&b!=0&&c!=0)
		my_printf("n\n");
	else if(a==0)
		my_printf("3");
	if(b==0)
	{if(a==0)
	my_printf(" 5");
	else my_printf("5");}
	if(c==0)
	{if(b==0||a==0)
		my_printf(" 7");
		else my_printf("7");}
	return 0;
}