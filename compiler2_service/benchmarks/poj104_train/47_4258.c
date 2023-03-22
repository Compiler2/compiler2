#define NUM_ITER 57851

#include <header.h>

int main_bench()
{
	int a[100];
	int n,i=0;
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		i=i+1;
	}
	i=n-1;
	while(i>0)
	{
		my_printf("%d ",a[i]);
		i=i-1;
	}
	my_printf("%d",a[0]);
}
