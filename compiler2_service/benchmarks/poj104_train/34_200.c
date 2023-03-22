#define NUM_ITER 278971

#include <header.h>

int main_bench()
{
	int change(int);
	int n;
	my_scanf("%d",&n);
	if(n==1)
		my_printf("End\n");
	else
	{
		do
		{
			n=change(n);
		}while(n!=1);
		my_printf("End\n");
	}
	return 0;
}

int change(int n)
{
	int a;
	if(n%2==0)
	{
		a=n/2;
		my_printf("%d/2=%d\n",n,a);
	}
	else
	{
		a=n*3+1;
		my_printf("%d*3+1=%d\n",n,a);
	}
	return a;
}