#include <header.h>

int main_bench()
{
	int n,k;
	my_scanf("%d %d\n",&n,&k);
	int sz[1000];
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	int j,m;
	for(j=0;j<n;j++)
	{
		for(m=0;m<n;m++)
		{
			if(j==m)
				my_printf("");
			else if(sz[j]+sz[m]==k)
			{
				my_printf("yes");
				break;
			}
		}
		if(sz[j]+sz[m]==k)
		{
			break;
		}
	}
	if(j==n&& m==n)
	{
		my_printf("no");
	}
	return 0;
}