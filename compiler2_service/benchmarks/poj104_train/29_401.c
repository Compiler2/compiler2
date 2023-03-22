#define NUM_ITER 4204

#include <header.h>

int main_bench()
{
	int n,i,num[100],k,zi[100],mu[100];
	zi[0]=2;
	mu[0]=1;
	float sum[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num[i]);
		for(k=0;k<num[i];k++)
		{
				sum[i]=sum[i]+(float)zi[k]/mu[k];
				mu[k+1]=zi[k];
				zi[k+1]=zi[k]+mu[k];
		}
		my_printf("%.3f\n",sum[i]);
	}
		return 0;
}

