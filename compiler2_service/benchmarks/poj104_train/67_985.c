#define NUM_ITER 24329

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d\n",&n);
	double a,b,c,m;
	my_scanf("%lf%lf",&a,&b);
	c=b/a;
	struct d{
		double e;
		double f;
		double g;
	}d[100];
	for(int i=0;i<n-1;i++)
	{
		my_scanf("%lf%lf",&d[i].e,&d[i].f);
	}
	for(int k=0;k<n-1;k++)
	{
		d[k].g=d[k].f/d[k].e;
		m=c-d[k].g;
		if(m>0.05)
		{
			my_printf("worse\n");
		}
		if(m<(-0.05))
		{
			my_printf("better\n");
		}
		if(m<=0.05&&m>=-0.05)
		{
			my_printf("same\n");
		}
	}
	return 0;
}
