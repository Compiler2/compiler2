#include <header.h>

int main_bench()
{
	int n,m,chu[100],mu[100],i,j;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&chu[i]);
	}
	for(j=0;j<m;j++)
	{
		mu[j]=chu[j+n-m];
		if(j==0)
		{
			my_printf("%d",mu[j]);
		}
		else
		{
			my_printf(" %d",mu[j]);
		}
	}
	for(j=m;j<n;j++)
	{
		mu[j]=chu[j-m];
		my_printf(" %d",mu[j]);
	}
	return 0;
}