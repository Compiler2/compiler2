#include <header.h>

int main_bench()
{
	int n,m;
	int sz[300];
	my_scanf("%d",&n);
	my_scanf("%d",&(sz[0]));
	for(int i=1;i<n;i++)
	{
		my_scanf(" %d",&(sz[i]));
	}
	my_printf("%d",sz[0]);
	for(int j=1;j<n;j++)
	{
		for(m=0;m<j;m++)
		{
			
			if(sz[j]==sz[m])
				break;
		}
		if(sz[j]!=sz[j-1]&&m==j)
		{
			my_printf(",");
			my_printf("%d",sz[j]);
		}
	}
	return 0;
		
	}
