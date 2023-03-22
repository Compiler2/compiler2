#define NUM_ITER 240006

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	for (;;)
	{
		if (n==1)
		{
			my_printf("End\n");
			break;
		}
		else if(n%2==1)
		{
			my_printf("%d*3+1=%d\n",n,(3*n+1));
			n=3*n+1;
			continue;
		}
		else if (n%2==0)
		{
			my_printf("%d/2=%d\n",n,(n/2));
			n=n/2;
			continue;
		}
	}
	return 0;
}

