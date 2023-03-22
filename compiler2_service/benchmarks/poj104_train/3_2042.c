#include <header.h>


int main_bench() 
{ 
    int n,sigma;
	int sb=0;
	my_scanf("%d %d",&n,&sigma);
	int sz[1000];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(k==j)
			{
				continue;
			}
			else if(k!=j)
			{
				if(sz[j]+sz[k]==sigma)
				{
					sb=1;
					break;
				}
			}
		}
		if(sb==1)
		{
			break;
		}
	}
	if(sb==1)
	{
		my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
	return 0;
} 