#define NUM_ITER 1336693

#include <header.h>

int main_bench()
{
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a=n%10;
	b=(n-a)%100/10;
	c=(n-(n%100))%1000/100;
	d=(n-(n%1000))%10000/1000;
	e=1;
	if (n<10)
	{my_printf("%d",n);}
	else
	{if (n<100)
	{my_printf("%d%d",a,b);}
	else
	{if (n<1000)
	{my_printf("%d%d%d",a,b,c);}
	else
	{if (n<10000)
	{my_printf("%d%d%d%d",a,b,c,d);}
	else
	{my_printf("abcde");}}}}
}