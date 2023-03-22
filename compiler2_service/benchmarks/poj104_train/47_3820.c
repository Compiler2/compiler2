#include <header.h>

int main_bench()
{
	int sz[100],n,i,m,j;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	int *pi=sz;
	int *pj=sz+n-1;
	for(;pi<pj;pi++,pj--)
	{
		m=*pi;
		*pi=*pj;
		*pj=m;
	}
	for(j=0;j<n-1;j++)
	{
		my_printf("%d ",sz[j]);
	}
	my_printf("%d",sz[n-1]);
	return 0;
}