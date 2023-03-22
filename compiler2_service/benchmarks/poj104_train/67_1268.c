#define NUM_ITER 24442

#include <header.h>

int main_bench()
{
	int n,i;
	float a,b,c,d,x,y;
	my_scanf("%d %f %f",&n,&a,&b);
	x=b/a;
	for(i=1;i<n;i++)
	{
		my_scanf("%f %f",&c,&d);
		y=d/c;
		if(y-x>0.05)
			my_printf("better\n");
		else
		{
			if(x-y>0.05)
				my_printf("worse\n");
			else
				my_printf("same\n");
		}
	}
	return 0;
}