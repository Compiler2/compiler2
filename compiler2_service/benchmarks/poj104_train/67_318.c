#define NUM_ITER 28651

#include <header.h>

int main_bench()
{
	int n,i,a,b,d,e;
	float x,y,c;
	my_scanf("%d",&n);
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	x=(float)b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%d%d",&d,&e);
		y=(float)e/d;
		if((y-x)>=0.05)
		{
			my_printf("better\n");
		}
		else if((x-y)>=0.05)
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