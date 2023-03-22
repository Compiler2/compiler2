#define NUM_ITER 267095

#include <header.h>


void cal(int *x);
int main_bench()
{
	int n;
	my_scanf("%d",&n);
	do
	{
		if (n==1)
		{
			my_printf("End\n");
			return 0;
		}
		else
		{
			cal(&n);
		}
	}
	while(1);
}
void cal(int *x)
{
	int t;
	t=*x;
	if (t%2)
	{
		t=t*3+1;
		my_printf("%d*3+1=%d\n",(t-1)/3,t);
	}
	else
	{
		t/=2;
		my_printf("%d/2=%d\n",t*2,t);
	}
	*x=t;
}