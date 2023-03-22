#define NUM_ITER 46391

#include <header.h>

int main_bench()
{
    int n,i,k;
	my_scanf("%d",&n);
	int sz[100000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	my_scanf("%d",&k);
	int sum=0,N=n;
	for(i=0;i<N;i++)
	{
		if(sz[i]==k)
		{
			while(sz[i]==k)
			{
			    for(int j=i;j<n;j++)
				{
				    int c;
				    c=sz[j+1];
				    sz[j+1]=sz[j];
				    sz[j]=c;
				}
			    sum++;
			    N--;
			}
		}
	}
	for(i=0;i<n-sum;i++)
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