#define NUM_ITER 52497

#include <header.h>

int main_bench()
{
	int n,k,i,j,m=0;
	int sz[1000];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=j+1;i<n;i++)
		{
			if(sz[i]+sz[j]==k)
			{
				my_printf("yes");
				m++;
				break;
			}
		}
		if(m!=0)
		{
			break;
		}
		if(j==n-2&&m==0)
		{
			my_printf("no");
		}
	}
return 0;
}