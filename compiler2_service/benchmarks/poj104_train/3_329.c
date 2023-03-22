#include <header.h>

int main_bench()
{
	int n,k,sz[1000],i,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
				break;
		}
		if(sz[i]+sz[j]==k)
				break;
	}
	if(sz[i]+sz[j]==k)
	    my_printf("yes");
	else
		my_printf("no");
	return 0;
}
