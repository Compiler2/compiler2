#define NUM_ITER 55368

#include <header.h>

int main_bench()
{
	int n,i,j,a[100];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=n-1;j>=1;j=j-1)
	{
		my_printf("%d ",a[j]);
	}
	my_printf("%d",a[0]);
}