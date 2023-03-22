#define NUM_ITER 53424

#include <header.h>

int main_bench()
{
	int n,a[101],b[101],i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=1;i<=n;i++)
	{
		a[i]=b[n-i+1];
if(i!=n)
		my_printf("%d ",a[i]);
else my_printf("%d",a[i]);
	}
	return 0;
}
