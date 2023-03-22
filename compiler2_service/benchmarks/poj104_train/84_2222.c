#define NUM_ITER 63818

#include <header.h>

int main_bench()
{
	int i=0;
	int a;
	int b;
	int max=0;
	int smax=0;
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		my_scanf("%d",&b);
		if(b>max)
		{
			smax=max;
			max=b;
		}
		else if(b>smax)
		{
			smax=b;
		}
		else
		{
			;
		}
	}
	my_printf("%d\n",max);
	my_printf("%d",smax);
	return 0;
}
