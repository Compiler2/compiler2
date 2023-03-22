#define NUM_ITER 404820

#include <header.h>

int main_bench()
{
	int n,m;
	my_scanf("%d",&n);
	while(n>1)
	{
		if(n%2)
		{
			m=n*3+1;
			my_printf("%d*3+1=%d\n",n,m);
		}
		else
		{
			m=n/2;
			my_printf("%d/2=%d\n",n,m);
		}
		n=m;
	}
	my_printf("End");
}
