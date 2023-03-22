#define NUM_ITER 24245

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int hz[1000],zy[1000];
	my_scanf("%d %d",&hz[0],&zy[0]);
	double a,result[1000];
	a=zy[0]*1.0/hz[0]*1.0;
	int i;
	for(i=1;i<n;i++)
	{
		my_scanf("%d %d",&hz[i],&zy[i]);
		result[i]=zy[i]*1.0/hz[i]*1.0;
		if(result[i]-a>0.05)
		{
			my_printf("better\n");
		}
		 else if(result[i]-a<-0.05)
		{
			my_printf("worse\n");
		}
		 else if(result[i]-a>=-0.05 && result[i]-a<=0.05)
		{
			my_printf("same\n");
		}
	}
	return 0;
}