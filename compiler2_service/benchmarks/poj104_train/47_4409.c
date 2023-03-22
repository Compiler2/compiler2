#define NUM_ITER 53983

#include <header.h>

int main_bench()
{
	int i,a[100],b[100],n;
	my_scanf("%d",&n);
	i=1;
	while (i<=n)
	{
		my_scanf("%d",&a[i]);
		i=i+1;
	}
	i=1;
	while (i<=n)
	{
		b[n+1-i]=a[i];
		i=i+1;
	}
	i=1;
	while (i<=n-1)
	{
		my_printf("%d ",b[i]);
		i=i+1;
	}
    my_printf("%d",b[i]);
}