#define NUM_ITER 61338

#include <header.h>


int main_bench()
{
	int n,k,i,j;
	int sz[1000];
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
			{
				my_printf("yes");
				break;
			}
		}
		if(j!=n)
			break;
	}
	if(i==n)
		my_printf("no");
	return 0;
}