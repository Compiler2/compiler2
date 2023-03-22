#include <header.h>

int main_bench()
{
	int n,m,i,a[10000];
	my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
	if(i<n-m)
    my_scanf("%d",&a[i+m]);
	if(i>=n-m)
	my_scanf("%d",&a[i-n+m]);
	}
	for(i=0;i<n-1;i++)
	my_printf("%d ",a[i]);
	my_printf("%d",a[i]);
}