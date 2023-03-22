#define NUM_ITER 39981

#include <header.h>

int main_bench()
{
	int sz[1000],ss[1000];
	int m,n,i,e;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d ",&(sz[i]));
	}
	my_scanf("%d",&(sz[n-1]));
	for(i=0;i<n;i++)
	{
		ss[m+i]=sz[i];
	}
	for(i>=n;i<m+n;i++)
	{
		ss[i-n]=ss[i];
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",ss[i]);
	}
	my_printf("%d",ss[n-1]);
	return 0;
}