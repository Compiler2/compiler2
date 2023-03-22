#include <header.h>


int main_bench()
{
	int a,s=0;
	my_scanf("%d",&a);
	if (a%3==0) 
	{
	my_printf("3");
	s=1;
	}
	if (a%5==0) 
	{
		if (s==1)
			my_printf(" ");
		my_printf("5");
		s=1;
	}
	if (a%7==0)
	{
		if (s==1)
			my_printf(" ");
		my_printf("7");
	}
	if(a%3!=0&&a%5!=0&&a%7!=0)
		my_printf("n");
	return 0;
}
