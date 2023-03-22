#define NUM_ITER 14028

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a[n],i;
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i-1]);
	}
	my_printf("%d",a[0]);
	for(i=2;i<=n;i++)
	{
		int j=1;
		while(j<i)
		{
			if(a[i-1]==a[j-1])
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if(j==i)
		{
			my_printf(" %d",a[i-1]);
		}
	}
	return 0;
}
