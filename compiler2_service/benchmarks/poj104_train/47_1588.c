#define NUM_ITER 44602

#include <header.h>

int main_bench(){
	int n,i,e;
	my_scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	if(n%2==0)
	{
		for(i=0;i<(n/2);i++)
		{
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-i-1]=e;
		}
	}
	else
	{
		for(i=0;i<((n+1)/2);i++)
		{
			e=sz[i];
			sz[i]=sz[n-i-1];
			sz[n-i-1]=e;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			my_printf("%d ",sz[i]);
		}
		else
		{
			my_printf("%d",sz[i]);
		}
	}
	return 0;
}