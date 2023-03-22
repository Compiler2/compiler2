#include <header.h>

int main_bench()
{
    int a[100],i,j,n;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
        my_scanf("%d",&a[i]);
    for(j=n-1;j>0;j--)
        my_printf("%d ",a[j]);
	my_printf("%d",a[0]);
	return 0;
}
