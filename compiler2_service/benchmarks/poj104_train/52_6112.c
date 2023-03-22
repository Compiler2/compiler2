#define NUM_ITER 55732

#include <header.h>


int main_bench()
{
	int a[1000],b[1000];
	int i,n,m;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n-m;i++)
	{
		my_scanf("%d", &a[i]);
	}
	for(i=0;i<m;i++)
	{
		my_scanf("%d", &b[i]);
	}
	for(i=0;i<m;i++)
	{
		my_printf("%d ", b[i]);
	}
	for(i=0;i<n-m-1;i++)
	{
		my_printf("%d ", a[i]);
	}
	my_printf("%d", a[n-m-1]);
}