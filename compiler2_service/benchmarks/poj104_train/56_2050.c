#define NUM_ITER 1345701

#include <header.h>

int main_bench()
{
	int n,i,a,b=0;
	my_scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		a=n%10;
		n=n/10;
		
		b=10*b+a;
		if(n==0)
			break;
	}
	my_printf("%d\n",b);
	return 0;
}