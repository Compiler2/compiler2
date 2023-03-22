#include <header.h>

int main_bench()
{
	int n,i,a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        my_scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=n-1;i>0;i--)
	{
		my_printf("%d ",b[i]);
	}
    my_printf("%d",a[0]);
	return 0;
}
