#define NUM_ITER 55427

#include <header.h>


int main_bench()
{
	int a[100],n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[n-i-1]);
	   
	}
	for(i=0;i<n-1;i++)
	{
    my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
	return 0;
}

