#include <header.h>

int main_bench()
{
	int x,a=0,b=0,c=0;
	my_scanf ("%d",&x);
	if (x%3==0)
		a=1;
	if (x%5==0)
		b=1;
	if (x%7==0)
		c=1;
	if (a+b+c==0)
		my_printf ("n\n");	
	else 
	{
		if (a+b==0)
			my_printf("7\n");
		if (b+c==0)
			my_printf("3\n");
		if (a+c==0)
			my_printf("5\n");
	}
	if (a*b*c==1)
		my_printf ("3 5 7\n");
	else 
	{
		if (a*b==1)
			my_printf ("3 5\n");
		if (b*c==1)
			my_printf ("5 7\n");
		if (a*c==1)
			my_printf ("3 7\n");
	}
}
