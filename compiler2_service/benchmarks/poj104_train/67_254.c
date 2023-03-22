#include <header.h>

int main_bench()
{
	int n,i,j;
	int zongshu[1000],youxiao[1000];
	double x,y[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&zongshu[i],&youxiao[i]);
	}
	x=(double)youxiao[0]/zongshu[0];
	for(i=1;i<n;i++)
	{
		y[i]=(double)youxiao[i]/zongshu[i];
		if(x-y[i]>0.05)
		{
			my_printf("worse\n");
		}
		else if(y[i]-x>0.05)
		{
			my_printf("better\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
	return 0;
}