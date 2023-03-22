#include <header.h>

int main_bench()
{
	int i,a,b,c;
	a=3;b=5;c=7;
	my_scanf("%d",&i);
	if(i%3==0)
	{
		if(i%5==0&&i%7==0)
			my_printf("%d %d %d",a,b,c);
		else if(i%5==0&&i%7!=0)
			my_printf("%d %d",a,b);
		else if(i%5!=0&&i%7==0)
			my_printf("%d %d",a,c);
		else my_printf("%d",a);
	}
	else if(i%5==0)
	{
		if(i%7==0)
			my_printf("%d %d",b,c);
		else my_printf("%d",b);
	}
	else if(i%7==0)
	{
		my_printf("%d",c);
	}
	else my_printf("n");
}