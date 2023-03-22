#include <header.h>

int main_bench()
{
	
	int n;
	my_scanf("%d",&n);
	if(n/100>0)
	{
		my_printf("%d\n",n/100);
	}
	else my_printf("0\n");
	n=n%100;
	if(n/50>0)
	{
	    my_printf("%d\n",n/50);
	}
	else my_printf("0\n");
	n=n%50;
	if(n/20>0)
	{
	    my_printf("%d\n",n/20);
	}
	else my_printf("0\n");
	n=n%20;
	if(n/10>0)
	{
	    my_printf("%d\n",n/10);
	}
	else my_printf("0\n");
	n=n%10;
	if(n/5>0)
	{
	    my_printf("%d\n",n/5);
	}
	else my_printf("0\n");
	n=n%5;
	my_printf("%d",n%5);
	return 0;
}