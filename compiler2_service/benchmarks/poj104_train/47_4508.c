#define NUM_ITER 55438

#include <header.h>


int main_bench()
{
	int a[100],b[100],n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		b[i]=a[n-1-i];
		my_printf("%d ",b[i]);
	}
	my_printf("%d",a[0]);
	return 0;
}
