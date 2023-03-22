#define NUM_ITER 54414

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int p[100];
	int i;
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&p[i]);
	}
	int max,max2;
	max=0;
	max2=0;
	for (i=1;i<=n;i++)
	{
		if (p[i]>max)
		{
			max2=max;
			 max=p[i];
		}
		else if (p[i]>max2)
		{
			max2=p[i];
		}
	}
	my_printf("%d\n%d\n",max,max2);
	return 0;
}