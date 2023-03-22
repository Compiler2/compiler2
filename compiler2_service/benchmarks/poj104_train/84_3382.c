#define NUM_ITER 62790

#include <header.h>


int main_bench()
{
	int n,t,max,max2,i;
	my_scanf("%d",&n);
	my_scanf("%d",&t);
	max=max2=t;
	for (i=1;i<n;i++)
	{
		my_scanf("%d",&t);
		if (t>max)
		{
			max2=max;
			max=t;
		}
		else if (t>max2)
			max2=t;
		}
	my_printf("%d\n",max,max2);
	my_printf("%d\n",max2);
	return 0;
}