#define NUM_ITER 299942

#include <header.h>

int main_bench()
{
	int i,j,k,n;my_scanf("%d",&n);
	for(;n!=1;)
	{
		if(n%2==0)
		{my_printf("%d/2=%d\n",n,n/2);n=n/2;}
		else
		{
			my_printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	my_printf("End");
}