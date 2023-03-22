#define NUM_ITER 1909927

#include <header.h>

int main_bench()
{
	int x,a,b,c,A,B,C;
	my_scanf("%d",&x);
	a=x%3;
	b=x%5;
	c=x%7;
	A=3;
	B=5;
	C=7;
	if(a==0&&b==0&&c==0)
	{my_printf("3 5 7");}
	if(a==0&&b==0&&c!=0)
	{my_printf("3 5");}
	if(a==0&&c==0&&b!=0)
	{my_printf("3 7");}
	if(b==0&&c==0&&a!=0)
	{my_printf("5 7");}
	if(a==0&&b!=0&&c!=0)
	{my_printf("3");}
	if(a!=0&&b==0&&c!=0)
	{my_printf("5");}
	if(a!=0&&b!=0&&c==0)
	{my_printf("7");}
	if(a!=0&&b!=0&&c!=0)
	{my_printf("n");}
	return 0;

}