#define NUM_ITER 49934

#include <header.h>

int main_bench()
{
    int a[200];
	int n,i,m;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
    for(i=0;i<=n-1;i++)
	{
		a[i+n]=a[i];
	}
	for(i=0;i<=m-1;i++)
	{
		a[i]=a[i+2*n-m];
	}
	for(i=m;i<=n-1;i++)
	{
		a[i]=a[i+n-m];
	}
	for(i=0;i<=n-2;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
}