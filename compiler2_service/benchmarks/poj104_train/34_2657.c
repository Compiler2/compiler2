#define NUM_ITER 313367

#include <header.h>

int main_bench()
{
	int n,i,j,k,r;
	my_scanf("%d",&n);
	while(n!=1)
	{
		r=n%2;
		if(r==0)
		{
			
			my_printf("%d/2=%d\n",n,n/2);
			n=n/2;
		}
		if(r!=0)
		{
			my_printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	my_printf("End");
}