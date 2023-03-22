#define NUM_ITER 56509

#include <header.h>

int main_bench()
{
	int n,a[100],i;
	int *p; 
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		my_printf("%d ",*(p+n-i-1));
		else
		my_printf("%d",*(p+n-i-1));
	}
	return 0;
}