#define NUM_ITER 62795

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	int max;
	my_scanf("%d", &max);
	int lmax;
	my_scanf("%d", &lmax);
	if(max<lmax)
	{
		max=lmax;
		lmax=max;
	}
    int a;
	int i;
	for(i=0;i<(n-2);i++)
	{
		my_scanf("%d", &a);
	    if(a>max)
		{
			lmax=max;
		     max=a;
		}
	    else if(a>lmax)
		{
		     lmax=a;
		}
	}
	my_printf("%d\n", max);
	my_printf("%d", lmax);
	return 0;
}