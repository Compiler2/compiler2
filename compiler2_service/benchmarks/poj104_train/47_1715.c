#define NUM_ITER 50653

#include <header.h>

int main_bench()
{
	int A[100],i,j,t=0,n;
	int *pt;
	pt=A;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",pt);
		pt++;
	}
	for(pt=A+n-1;pt>=A;pt--)
	{
		if(t==0)
		{
			my_printf("%d",*pt);
			t++;
		}
		else
		{
		   my_printf(" %d",*pt);
		}
	}
	return 0;
}