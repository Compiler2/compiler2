#define NUM_ITER 336163

#include <header.h>

int main_bench()
{
	int n,a;
	my_scanf("%d",&n);
	if(n==1)
	{
		my_printf("End");
	}
	else
	{
		while(n!=1)
		{
			if(n%2!=0)
			{
				a=n*3+1;
				my_printf("%d*3+1=%d\n",n,a);
			}
			else
			{
				a=n/2;
				my_printf("%d/2=%d\n",n,a);
			}
			n=a;
		}
		my_printf("End\n");
	}
	return 0;
}




	





		

	