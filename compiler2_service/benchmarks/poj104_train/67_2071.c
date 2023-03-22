#define NUM_ITER 28840

#include <header.h>

int main_bench()
{
	int n, x, y, i;
	double p, m;
	my_scanf("%d",&n);
	for(i=0;i<1;i++)
	{
		my_scanf("%d%d\n",&x,&y);
		p=100*((double)y)/((double)x);
	}
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&x, &y);
		m=100*((double)y)/((double)x);
		if(p>m+5)
		{
			my_printf("worse\n");
		}
		else if(p<m-5)
		{
			my_printf("better\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}
