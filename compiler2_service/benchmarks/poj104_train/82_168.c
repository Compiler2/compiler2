#define NUM_ITER 36044

#include <header.h>

int main_bench()
{
	int n,a[100],b[100],i;
	my_scanf("%d",&n);
	int max = 0, cur = 0;
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d%d\n",&a[i],&b[i]);
	}
	my_scanf("%d%d",&a[n-1],&b[n-1]);
	for(i=0;i<n;i++)
	{
		if (a[i]>=90 && a[i] <= 140 && b[i] >= 60 && b[i] <= 90) {
			cur++;
		}
		else cur = 0;
		if (cur > max) max = cur;
	}

	my_printf("%d", max);
	
	return 0;
}