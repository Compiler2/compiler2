#define NUM_ITER 137

#include <header.h>

int k(int n)
{
	int i;
	int k1=1,k2=2;
	int a;
	if(n>1)
	{
		for(i=1;i<n;i++)
		{
			a=k2;
		    k2=k1+k2;
		    k1=a;
		}
	}
	else if(n=1) k2=2;
	return k2;
}


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		int num;
		my_scanf("%d",&num);
		double sum=2;
		for(j=2;j<=num;j++)
		{
			sum=sum+((double)k(j)/(double)k(j-1));
		}
		my_printf("%.3lf\n",sum);
	}
}

		
