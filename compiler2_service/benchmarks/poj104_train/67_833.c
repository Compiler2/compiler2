#define NUM_ITER 26829

#include <header.h>

int main_bench()
{
	int i,n,zs,yx;
	double x,y,cha;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&zs,&yx);
		if(i==0)
		{
			x=100.0*yx/zs;
		}
		else
		{
			y=100.0*yx/zs;
			cha=x-y;
			if(cha>5)
			{
				my_printf("worse\n");
			}
			else if(cha<-5)
			{
				my_printf("better\n");
			}
			else
			{
				my_printf("same\n");
			}
		}
	}

	return 0;
}