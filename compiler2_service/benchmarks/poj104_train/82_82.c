#define NUM_ITER 38607

#include <header.h>

int main_bench()
{
	int i,n,a[100],b[100],sum1=0,sum2=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			sum1++;
		else
		{
			if(sum1>sum2)
				sum2=sum1;
			sum1=0;
		}
		if(i==n-1&&sum1>sum2)
                sum2=sum1;
	}
	my_printf("%d",sum2);
	return 0;
}