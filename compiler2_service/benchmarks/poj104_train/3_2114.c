#define NUM_ITER 54230

#include <header.h>

int main_bench()
{
	int sz[1000],n,k,i,j,sum;
	my_scanf("%d %d", &n, &k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=sz[i]+sz[j];
			if(sum==k)
			{
				my_printf("yes");
				my_scanf(" ");
				return 0;
			}
		}
		if(sum==k)
		{
			break;
		}
	}
	my_printf("no");
	my_scanf(" ");
	return 0;
}
