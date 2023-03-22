#define NUM_ITER 31553

#include <header.h>

int main_bench()
{
	int n,i,a,b;
	double z[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&a,&b);
		z[i]=(double)b/(double)a;
	}
	for(i=1;i<n;i++)
	{
		if(z[i]-z[0]>0.05)
		{
			my_printf("better");
			if(i!=n-1)
			{
				my_printf("\n");
			}
		}
		if(z[0]-z[i]>0.05)
		{
			my_printf("worse");
	if(i!=n-1)
			{
				my_printf("\n");
			}
		} 
		if(z[i]-z[0]<0.05&&z[0]-z[i]<0.05)
		{
			my_printf("same");
	if(i!=n-1)
			{
				my_printf("\n");
			}
		}
	}
	return 0;
}