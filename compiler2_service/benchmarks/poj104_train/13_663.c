#define NUM_ITER 6248

#include <header.h>

int main_bench()
{
	int n,i,a[100000],sum=0,j;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(n==1)
	{
		my_printf("%d",a[0]);
	}
	else
	{
		my_printf("%d",a[0]);
		for(i=1;i<=n-1;i++)
		{
			sum=0;
			for(j=0;j<=i-1;j++)
			{
				if(a[i]==a[j])
				{
					sum=1;
				}
			}
			if(sum==0)
			{
				my_printf(" %d",a[i]);
			}
		}
	}
}