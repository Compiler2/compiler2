#define NUM_ITER 54353

#include <header.h>

int main_bench()
{
	int i,n,a[100];
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[n-1-i]);
	}
	for(i=0;i<n;i++)
	{
	    if(i==n-1)
		my_printf("%d",a[i]);
		else
			my_printf("%d ",a[i]);
	}
	
	return 0;
}