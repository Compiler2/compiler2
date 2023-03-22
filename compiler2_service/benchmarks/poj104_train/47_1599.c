#include <header.h>

int main_bench()
{
	int sz[100],i,n,t;
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}

	if(n%2==0)
	{
		for(i=0;i<(n/2);i++)
		{
			t=sz[i];
			sz[i]=sz[n-1-i];
			sz[n-1-i]=t;
		}

	}
	else if(n%2!=0)
	{
		for(i=0;i<((n-1)/2);i++)
		{
			t=sz[i];
			sz[i]=sz[n-1-i];
			sz[n-1-i]=t;
		}
	}

	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			my_printf("%d",sz[i]);
		}
		else
		{
			my_printf(" %d",sz[i]);
		}
	}

	return 0;
}