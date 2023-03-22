#define NUM_ITER 32366

#include <header.h>

int main_bench()
{
	int i,n,a[100],b[100];
	float c[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a[i],&b[i]);	
	}
	for(i=0;i<n;i++)
	{
		c[i]=(float)b[i]/a[i];
	    
	}
	for(i=1;i<n;i++)
	{
		if(c[i]>c[0])
		{
			if(c[i]-c[0]>0.05)
				my_printf("better\n");
			else
				my_printf("same\n");
		}
		else
		{
			if(c[0]-c[i]>0.05)
				my_printf("worse\n");
			else 
				my_printf("same\n");
		}
	}
	return 0;
}