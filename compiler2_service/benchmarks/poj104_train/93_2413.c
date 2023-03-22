#include <header.h>

int main_bench()
{
	int a,i3,i5,i7;
	my_scanf("%d",&a);
	i3=0;i5=0;i7=0;
	if(a%3==0) i3=1;
	if(a%5==0) i5=1;
	if(a%7==0) i7=1;
	if(i3==1)
	{
		my_printf("3");
		if(i5==1)
		{
			my_printf(" 5");
			if(i7==1)
				my_printf(" 7");
		}
		else if(i7==1) my_printf(" 7");
	}
	else if(i5)
	{
		my_printf("5");
		if(i7) my_printf(" 7");
	}
	else if(i7)
	{
		my_printf("7");
	}
	else my_printf("n");
}