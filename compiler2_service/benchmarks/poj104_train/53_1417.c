#include <header.h>


int main_bench()
{
    int n;
	my_scanf("%d ",&n);
	int sz[n];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(int j=0;j<n;j++)
	{   
		if(j==0)
		{
			my_printf("%d",sz[j]);
		}
		else
		{   int x=j;
			for(int k=0;k<j;k++)
			{
                if(sz[j]!=sz[k])
				{
                 x--;   
				}
			}
				if(x==0)
				{
					my_printf(",%d",sz[j]);
				}
			
		}
	}
	return 0;
}


