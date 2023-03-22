#include <header.h>

int main_bench()
{
	int a[10000],i,n,*p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
    p=&a[n-1];
	for(p=&a[n-1];p!=&a[0];p--)
		my_printf("%d ",*p);
	my_printf("%d",a[0]);
}
	