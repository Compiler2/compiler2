#define NUM_ITER 866801

#include <header.h>


int main_bench()
{
	int n,i,a;
	my_scanf("%d", &n);
	int num[5];
	a=100000;
	for(i=0;i<=4;i++)
	{
		a=a/10;
		num[i]=(n/a)%10;
	}
	if(num[0]!=0)
	{
		my_printf("%d%d%d%d%d",num[4],num[3],num[2],num[1],num[0]);
	}
	else if(num[1]!=0)
	{
		my_printf("%d%d%d%d",num[4],num[3],num[2],num[1]);
	}
	else if(num[2]!=0)
	{
		my_printf("%d%d%d",num[4],num[3],num[2]);
	}
	else if(num[3]!=0)
	{
		my_printf("%d%d",num[4],num[3]);
	}
	else my_printf ("%d",num[4]);
}