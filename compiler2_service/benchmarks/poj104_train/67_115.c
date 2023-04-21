#define NUM_ITER 28704

#include <header.h>

int main_bench()
{
	float a1,g1,r1,a[1000],g[1000],r[1000];
	int n,i;
	my_scanf("%d",&n);
	n=n-1;
	my_scanf("%f %f",&a1,&g1);
	for(i=0;i<n;i++)
	{
		my_scanf("%f %f",&a[i],&g[i]);
	}
	r1=g1/a1;
	for(i=0;i<n;i++)
	{
		r[i]=g[i]/a[i];
		if((r[i]-r1)>0.05)
		{
			my_printf("better\n");
		}
		else if((r[i]-r1)<(-0.05))
		{
			my_printf("worse\n");
		}
		else
		{
			my_printf("same\n");
		}
	}
}
