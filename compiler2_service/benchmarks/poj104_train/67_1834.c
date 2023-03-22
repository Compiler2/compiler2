#define NUM_ITER 21209

#include <header.h>

int main_bench()
{
	int n,i;
	double z,y,a,b;
	my_scanf("%d%lf%lf",&n,&z,&y);
	a=y/z;
	for(i=1;i<n;i++)
	{
		my_scanf("%lf%lf",&z,&y);
		b=y/z;
		if(b-a>0.05)
		{
			my_printf("better\n");
		}
		if(b-a<=0.05&&b-a>=-0.05)
		{
			my_printf("same\n");
		}
		if(b-a<-0.05)
		{
			my_printf("worse\n");
		}
	}
	return 0;
}
