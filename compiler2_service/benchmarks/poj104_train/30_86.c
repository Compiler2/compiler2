#define NUM_ITER 64751

#include <header.h>

int main_bench()
{
	int n,i,sum=0,sum1=0,t;
	my_scanf("%d",&n);
	if(n<7)
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+i*i;
		}
	}
	if(n>=7)
	{
		for(i=7;i<=n;i++)
		{
			sum=sum+i*i;
		}
		for(i=7;i<=n;i++)
		{
			t=i/10;
			if(i%10==7||i%7==0||t==7) sum1=sum1+i*i;
		}
		sum=sum-sum1+91;
	}
	my_printf("%d",sum);
}