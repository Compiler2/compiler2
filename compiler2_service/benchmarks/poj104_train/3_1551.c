#include <header.h>

int main_bench()
{
	int n,k,i,t;
	my_scanf("%d%d",&n,&k);
	int sz[1000];
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(t=0;t<n;t++)
		{
			if((sz[i]+sz[t])==k&&i!=t)
			{
				my_printf("yes");
				break;
			}
		}
		if((sz[i]+sz[t])==k&&i!=t)
			{
				break;
			}
    }                	
	if(i==n&&t==n)
	{
		my_printf("no");
	}
	return 0;
}

