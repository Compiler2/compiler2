#define NUM_ITER 225332

#include <header.h>

int one(int n)
{
	if(n!=1)
	{
		if(n%2!=0)
		{
			my_printf("%d*3+1=%d\n",n,(n*3+1));
			n=n*3+1;
		}
		else
		{
			my_printf("%d/2=%d\n",n,(n/2));
			n=n/2;
		}
	}
	else
	{
		n=-1;
		my_printf("End");
	}
	return n;
}
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	do
	{
		n=one(n);
	}
	while(n!=-1);
	return 0;
}