#define NUM_ITER 346944

#include <header.h>

int main_bench()
{
	int n,a,b,i;
	my_scanf("%d",&n);
	for(i=0;;i++)
	{
		if(n==1) break;
		if(n%2==0)
		{
			n=n/2;
			my_printf("%d/2=%d\n",2*n,n);
		}
		else
		{
			n=n*3+1;
			my_printf("%d*3+1=%d\n",(n-1)/3,n);
		}
	}
	my_printf("End\n");
	return 0;
}
