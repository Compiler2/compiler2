#include <header.h>

int main_bench()
{
	int i,n,m,a[100];
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=n;i<2*n-m;i++)
	 a[i]=a[i-n];
    my_printf("%d",a[n-m]);
    for(i=n-m+1;i<2*n-m;i++)
		my_printf(" %d",a[i]);
   my_printf("\n");
}