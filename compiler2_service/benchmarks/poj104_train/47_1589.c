#define NUM_ITER 45115

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	int *sf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		sf[n-1-i]=sz[i];
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			my_printf("%d ",sf[i]);
		}
		if(i==n-1)
		{
			my_printf("%d",sf[i]);
		}
	}
	return 0;
}