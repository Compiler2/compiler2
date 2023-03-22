#include <header.h>

int main_bench()
{
	int sz[100],dx[100];
	int i,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
		j=n-1-i;
		dx[j]=sz[i];
	}
	for(j=0;j<n-1;j++)
	{

		my_printf("%d ",dx[j]);
	}
	if(j==n-1)
		my_printf("%d",dx[j]);
	return 0;
}
