#define NUM_ITER 2827

#include <header.h>

int main_bench()
{
	int n,i,j,k;
	int shuzu[1000];
	double sum,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(shuzu[i]));
	}
	for(i=0;i<n;i++)
	{
		j=shuzu[i];
		for(k=1;k<=j;k++)
		{
			if(k==1)
			{
				a=1.0*2/1;
				sum=a;
			}
			else 
			{
				a=1+1.0*1/a;
				sum=sum+a;
			}
		}
		my_printf("%.3lf\n",sum);
	}
		return 0;
	
}