#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)
	{
		my_printf("3 5 7");
	}
	else if(n%3==0&&n%5==0)
	{
		my_printf("3 5");
	}
	else if(n%3==0&&n%7==0)
	{
		my_printf("3 7");
	}	
	else if(n%5==0&&n%7==0)
	{
		my_printf("5 7");
	}
	else {
		for(i=3;i<8;i=i+2)
		{
		if(n%i==0)
	{
		my_printf("%d",i);
	}
		}
	}
	if(n%3!=0&&n%5!=0&&n%7!=0)
	{
		my_printf("n");
	}
     return 0;
}
