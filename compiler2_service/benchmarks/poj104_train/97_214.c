#define NUM_ITER 1805916

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=0;n>=100;i++)
	{
		n-=100;
	}
	my_printf("%d\n",i);
	for(i=0;n>=50;i++)
	{
		n-=50;
	}
	my_printf("%d\n",i);
	for(i=0;n>=20;i++)
	{
		n-=20;
	}
	my_printf("%d\n",i);
	for(i=0;n>=10;i++)
	{
		n-=10;
	}
	my_printf("%d\n",i);
	for(i=0;n>=5;i++)
	{
		n-=5;
	}
	my_printf("%d\n",i);
	for(i=0;n>=1;i++)
	{
		n-=1;
	}
	my_printf("%d\n",i);
	return 0;
}