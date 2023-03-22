#include <header.h>

int main_bench()
{
	int n,i;
	double a,zs,yx;
	double yxl;
	my_scanf("%d",&n);
	my_scanf("%lf %lf",&zs,&yx);
	a=(yx/zs)*100;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%lf %lf",&zs,&yx);
		yxl=(yx/zs)*100;
		if(yxl>=a)
		{
			if((yxl-a)>5)
			{
				my_printf("better\n");
			}
			else
			{
				my_printf("same\n");
			}
		}
	else
		{
			if((a-yxl)>5)
			{
				my_printf("worse\n");
			}
			else
			{
				my_printf("same\n");
			}
		}
	}
	return 0;
}