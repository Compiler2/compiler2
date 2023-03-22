#include <header.h>

int main_bench()
{
	int n,i,a[100],*p,b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	p=b;
	for(i=n-1;i>=0;i--)
		*p++=a[i];
    for(i=0;i<n-1;i++)
		my_printf("%d ",b[i]);
	my_printf("%d",b[n-1]);
	return 0;
}