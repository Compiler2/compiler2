#define NUM_ITER 2962

#include <header.h>

int main_bench()
{
	int n,k,sz[1000];
	my_scanf("%d %d",&n,&k);
	int i=0;
	while(i<n)
	{
		my_scanf("%d",&sz[i]);
		i++;
	}

	int e;
	int m;
	for(m=1;m<=n;m++)
	{
		int j;
		for(j=0;j<n-m;j++)
		{
			if(sz[j]>sz[j+1])
			{
				e=sz[j+1];
				sz[j+1]=sz[j];
				sz[j]=e;
			}
		}
	}

	int M;
	int x,sum=0;
	
	int j;
	for(j=n-1;j>=0;j--)
		for(x=j-1;x>=0;x--)
		{
			if(k==sz[j]+sz[x])
		{
		sum+=1;	
		}
		}
	if(sum==0)
	{
		my_printf("no");
	}
	else
		my_printf("yes");
	
	return 0;

}

