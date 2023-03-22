#define NUM_ITER 395499

#include <header.h>

int main_bench()
{
	int n,i,j,k,a,b;
	my_scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==1)
		{
			k=n;
			n=3*n+1;
			my_printf("%d*3+1=%d\n",k,n);
		}
		else
		{
			k=n;
			n/=2;
			my_printf("%d/2=%d\n",k,n);
		}
	}
	my_printf("End\n");
}