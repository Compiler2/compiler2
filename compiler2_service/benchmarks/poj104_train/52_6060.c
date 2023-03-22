#define NUM_ITER 55546

#include <header.h>

int main_bench()
{
	int a[200];
	int n,m,i;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		a[n+i]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",a[n-m+i]);
	}
	my_printf("%d",a[n-m+i]);
}