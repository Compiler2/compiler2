#define NUM_ITER 1691803

#include <header.h>

void f1(int a);
int main_bench()
{
	int RMB;
	my_scanf("%d",&RMB);
	f1(RMB);
}
void f1(int a)
{
	int b;
	if(a>=100)
	{
		b=a/100;
		my_printf("%d\n",b);
		a=a-b*100;
	}
	else 
	{
		my_printf("0\n");
	}
	if(a>=50)
	{
		my_printf("1\n");
		a=a-50;
	}
	else 
	{
		my_printf("0\n");
	}
	if(a>=20)
	{
		b=a/20;
		my_printf("%d\n",b);
		a=a-b*20;
	}
	else my_printf("0\n");
	if(a>=10)
	{
		my_printf("1\n");
		a=a-10;
	}
	else my_printf("0\n");
	if(a>=5)
	{
		my_printf("1\n");
		a=a-5;
	}
	else my_printf("0\n");
	my_printf("%d",a);
}