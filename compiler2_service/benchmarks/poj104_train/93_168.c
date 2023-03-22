#include <header.h>

int main_bench()
{
	int m,n,a,b,c;
	a=3;b=5;c=7;
	my_scanf("%d",&m);
	if(m%3==0) 
	{
		my_printf("%d",a);
		if(m%5==0) my_printf(" %d",b);
		{
			if(m%7==0) my_printf(" %d",c);
		}
	}
	else if(m%5==0) 
	{
		my_printf("%d",b);
		if(m%3==0) my_printf(" %d",a);
		{
			if(m%7==0) my_printf(" %d",c);
		}
	}
	else if(m%7==0) 
	{
		my_printf("%d",c);
		if(m%3==0) my_printf(" %d",a);
		{
			if(m%5==0) my_printf(" %d",b);
		}
	}
	else my_printf("n");
	my_printf("\n");
}
	
	
