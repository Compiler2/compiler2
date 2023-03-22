#define NUM_ITER 56236

#include <header.h>


int main_bench()
{
	int n,i,x,y,a;
	my_scanf("%d",&n);
	x=0;
	y=0;
	my_scanf("%d",&a);
	y=a;
	for (i=2;i<=n;i++)
	{
		int ai;
		my_scanf("%d\n",&ai);
		if (ai>=x)
		{
			x=ai;
		}
		else
		{
			if (ai>y)
			{
				y=ai;
			}
		}
	}
	my_printf("%d\n",x);
	my_printf("%d\n",y);
	return 0;
}

