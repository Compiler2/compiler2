#define NUM_ITER 103826

#include <header.h>

int main_bench()
{
	int n,i,a,sum;
	sum=0;
	a=0;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		a=i%10;
		if(i%7==0)
		{
			continue;
		}
		else if(a==7)
		{
			continue;
		}
		else if(i==70+a)
		{
			continue;
		}
		sum=sum+i*i;
	}
	my_printf("%d",sum);
	return 0;
}
		