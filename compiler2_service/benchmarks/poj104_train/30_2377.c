#define NUM_ITER 74971

#include <header.h>

int main_bench()
{
	int n,i,sum1=0,sum2=0,sum3;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum2=sum2+i*i;
	}
	for(i=1;i<=n;i++)
	{
		if(i%7==0||i%10==7||i/10==7)
		{
			sum1=sum1+i*i;
		}
	}

	sum3=sum2-sum1;
	my_printf("%d\n",sum3);
	return 0;
}
