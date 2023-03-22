#define NUM_ITER 56108

#include <header.h>

int main_bench()
{
	int sz[100],n,m,j;
	my_scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	my_printf("%d",sz[n-m]);
     for(j=m-2;j>=0;j--)
	{
	    my_printf(" %d",sz[n-1-j]);
	}
	for(int a=m+1;a<=n;a++)
	{
		my_printf(" %d",sz[a-m-1]);
	}
	
	return 0;
}
