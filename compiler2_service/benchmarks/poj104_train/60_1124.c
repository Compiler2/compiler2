#define NUM_ITER 3830

#include <header.h>

int sushu(int x)
{
	int i,t=1;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			t=0;
		}
	}
	return t;
}
int main_bench()
{
	int i,n,a,b,t=0;
	my_scanf("%d",&n);
	for(i=4;i<=n;i++)
	{
		a=i-2;
		b=i;
		if(sushu(a)&&sushu(b))
		{
			t=1;
			my_printf("%d %d\n",a,b);
		}
	}
	if(t==0)
	{
		my_printf("empty");
	}
	return 0;
}