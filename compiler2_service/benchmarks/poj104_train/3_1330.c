#define NUM_ITER 6379

#include <header.h>

int main_bench()
{
	int n, k, i, j, x=0;
	int a[1000];
	my_scanf("%d %d", &n, &k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=1;j<n;j++)
		{
			if((a[i]+a[j])==k)
				x=1;
		}
	}
	if(x==1)
		my_printf("yes");
	else
		my_printf("no");
	return 0;

}
