#include <header.h>

int main_bench()
{
	int n,i;
	double a,b;
	double sz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf",&a);
		my_scanf("%lf",&b);
		sz[i]=b/a;
	}
	for(i=1;i<n;i++)
	{
		if((sz[i]-sz[0])>0.05)
		{
			my_printf("better\n");
		}
		else if((sz[0]-sz[i])>0.05)
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
