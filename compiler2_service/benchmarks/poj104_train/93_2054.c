#define NUM_ITER 1825549

#include <header.h>

main_bench()
{
	int a,b,c,n;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0)
		if(b==0||c==0)
			my_printf("3 ");
		else my_printf("3");
	if(b==0)
		if(c==0)
			my_printf("5 ");
		else my_printf("5");
	if(c==0)
		my_printf("7");
	else ;
	if(a!=0&&b!=0&&c!=0)
		my_printf("n");
	else ;
	my_printf("\n");
}