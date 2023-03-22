#define NUM_ITER 55570

#include <header.h>

int main_bench()
{
	int n,i=0,a[10000];
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		i++;
	}
	while(i>1)
	{
		i--;
	my_printf("%d ",a[i]);
	}
	my_printf("%d",a[0]);
}