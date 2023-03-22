#define NUM_ITER 4795

#include <header.h>


int main_bench()
{
	int sz[100];
	int m;
	int sum=0;
	my_scanf("%d",&m);
	int shuru[100];
	for(int i=0;i<m;i++)
	{
		my_scanf("%d",&(shuru[i]));
	}
	for(int h=0;h<m;h++)
	{
		
	for(int j=0;j<shuru[h];j++)
	{
		if(j<=1)
		{
			sz[j]=1;
		}
		if(j>=2)
		{
			sz[j]=sz[j-1]+sz[j-2];
		}
		sum=sz[j];
	}
	my_printf("%d\n",sum);

	}

	return 0;
}