#include <header.h>

main_bench()
{
	int m,n,i,j,k;
	int a[200];
	my_scanf("%d%d",&n,&m);
	for (i=0;i<n;i++) my_scanf("%d",&a[i]);
	for (i=n-m;i<n;i++) my_printf("%d ", a[i]);
	for (i=0;i<n-m-1;i++) my_printf("%d ", a[i]);
	my_printf("%d",a[n-m-1]);
}
