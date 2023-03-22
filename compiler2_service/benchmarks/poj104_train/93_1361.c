#include <header.h>

int main_bench()
{
	int z;
	int a=0,b=0,c=0;
	my_scanf("%d",&z);
	if(z%3==0)
		a=3;
	if(z%5==0)
		b=5;
	if(z%7==0)
		c=7;
	if(a!=0) 
		my_printf("%d",a);
	if(b!=0)
		{if(a!=0)
			my_printf(" %d",b);
		else
		    my_printf("%d",b);}
	if(c!=0)
		{if(a!=0 || b!=0)
			my_printf(" %d",c);
		else
		    my_printf("%d",c);}
	if(a+b+c==0)
		my_printf("n");
	return 0;
}