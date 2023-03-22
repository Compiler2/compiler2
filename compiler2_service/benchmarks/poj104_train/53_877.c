#include <header.h>

int main_bench()
{
	int i,n,k,sum=0;
	int a[300];
	int b[300];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i-1]);
	for(i=0;i<n;i++)
	{
		if(i==0)
			b[0]=a[0];
		if(i>=1)
		{
			for(k=0;k<i;k++)
			{
				if(a[k]==a[i])
					break;
			}
			if(k==i)
			{
				sum++;
				b[sum]=a[i];
			}
		}
	}
	for(k=0;k<sum;k++)
		my_printf("%d,",b[k]);
	my_printf("%d",b[sum]);
	return 0;
}