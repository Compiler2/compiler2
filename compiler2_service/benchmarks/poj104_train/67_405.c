#define NUM_ITER 20758

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	double jsum,jyx;
	my_scanf("%lf %lf",&jsum,&jyx);
	double x=jyx/jsum;
	int i;
	double sum[100],yx[100];
	double y[100];
	for(i=0;i<n-1;i++)
	{
		my_scanf("%lf %lf",&sum[i],&yx[i]);
		y[i]=yx[i]/sum[i];
		if((y[i]-x)>0.05)
		{
			my_printf("better\n");
		}
		else if((x-y[i])>0.05)
		{
			my_printf("worse\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
	return 0;
}