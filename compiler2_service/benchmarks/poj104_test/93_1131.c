#include <header.h>

int main_bench()
{
	int m,a;
	char n;
    a='n';
	my_scanf("%d",&m);
	if(m%3==0&&m%5==0&&m%7==0)
		my_printf("3 5 7");
	else if(m%3==0&&m%5==0)
		my_printf("3 5");
	else if(m%3==0&&m%7==0)
		my_printf("3 7");
	else if(m%5==0&&m%7==0)
		my_printf("5 7");
	else if(m%3==0)
		my_printf("3");
	else if(m%5==0)
		my_printf("5");
	else if(m%7==0)
		my_printf("7");
	else
		my_printf("%c",a);
		return 0;
}