#define NUM_ITER 34798

#include <header.h>

int main_bench()
{
	double*y;
	int M,m,i,n;

	my_scanf("%d",&n);
	y=(double*)malloc(sizeof(double)*n);
	double x;
	my_scanf("%d%d",&M,&m);
		
	x=(double)m/M;
		
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d",&M,&m);
		
			y[i]=(double)m/M;
	}
	for(i=0;i<n-1;i++)
	{
			if(x-y[i]>0.05)
			{
				my_printf("worse\n");
			}
			
			else 
			{
				if(y[i]-x>0.05)
				{
				my_printf("better\n");
				}
			
			    else
				{
				my_printf("same\n");
				
				}
			}
	}

	free(y);
	
	return 0;
}