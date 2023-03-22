#define NUM_ITER 34022

#include <header.h>

int main_bench()
{
	int n,a,b,i,sz[100],zs[100];
	float x,y[100];
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	x=(float)b/a*100;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&sz[i],&zs[i]);
		y[i]=(float)zs[i]/sz[i]*100;	
	}
	for(i=0;i<n-1;i++)
	{
	    if(y[i]-x>5)
		{
			my_printf("better\n");
		}
		else if(x-y[i]>5)
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