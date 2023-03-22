#define NUM_ITER 25442

#include <header.h>


int main_bench()
{
	int n,i;
	float xg[1000],a,b,x;
	my_scanf("%d",&n);
	my_scanf("%f%f",&a,&b);
	x=(b/a)*100;
         for(i=0;i<n-1;i++)
	{
                  float p,q,y;
		my_scanf("%f%f",&p,&q);
		y=(q/p)*100;
		xg[i]=y;
	}
	for(i=0;i<n-1;i++)
	{
		if((x-xg[i])>5)
		{
			my_printf("worse\n");
		}
		else if((xg[i]-x)>5)
		{
			my_printf("better\n");
		}
		else{
                           my_printf("same\n");
		}
	}
	return 0;
}