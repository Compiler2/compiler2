#define NUM_ITER 404011

#include <header.h>



int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_printf("End\n");
		return 0;
	}
	int a=n;
	for(;a!=1;)
	{
		if(a%2!=0)
		{
			a=n*3+1;
			my_printf("%d*3+1=%d\n",n,a);
			n=a;
		}
		else
		{
			a=n/2;
			my_printf("%d/2=%d\n",n,a);
			n=a;
		}
	}
	my_printf("End\n");
	return 0;
}



