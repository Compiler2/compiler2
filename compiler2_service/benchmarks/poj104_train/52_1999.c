#define NUM_ITER 51068

#include <header.h>

int main_bench()
{
	int m,n,i;
	int a[128];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",a[(i+n-m)%n]);
	}
	my_printf("%d",a[n-m-1]);
	return 0;
}
	
