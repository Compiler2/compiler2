#include <header.h>


int main_bench() 
{ 
	int n;
	int m=0;
	int k=0;
	int i=0;
	int maxk=0;
	my_scanf("%d",&n);
	int szsmall[n],szlarge[n],sz[n];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&szlarge[i]);
		my_scanf("%d",&szsmall[i]);
	}
	for(i=0;i<n;i++)
	{
		if(szsmall[i]<=90 && szsmall[i]>=60 && szlarge[i]<=140 && szlarge[i]>=90)
		{
			sz[i]=1;
		}
		else
		{
			sz[i]=0;
		}
	}
	while(1)
	{	
		k=0;
		for(i=m;i<n;i++)
		{
			if(sz[i]==1)
			{
				k=k+1;
				m=i+1;
				if(k>maxk)
				{
					maxk=k;
				}
				if(m==n)
				{
					break;
				}
				if(sz[m]==0)
				{
					break;
				}
			}
			else
			{
				continue;
			}
		}
		if(m==n||i==n)
		{
			break;
		}
	}
	my_printf("%d",maxk);
	return 0;
} 
