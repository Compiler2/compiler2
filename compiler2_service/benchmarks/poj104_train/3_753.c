#define NUM_ITER 13702

#include <header.h>

int main_bench()
{
	int k,n,i,j,t;
	int sz[1000];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0,t=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				t=0;
				break;
			}
		}
	}
	if(t==0)
	{
	my_printf("yes");
	}
	else
	{
		my_printf("no");
	}
		return 0;
}
