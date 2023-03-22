#define NUM_ITER 80908

#include <header.h>


int main_bench()
{
	int n;
	int sum=0;
	my_scanf("%d", &n);
	if(n==0)
	{
		my_printf(0);
	}
	else
	{
		int i=0;
	    for(i=0; i<=n; i++)
		{
			if(i%7 != 0 && i%10 !=7 && i/10 !=7)
			{
				sum = sum + i*i;
			}
	      	 
		}
	}my_printf("%d\n", sum);
		
}
