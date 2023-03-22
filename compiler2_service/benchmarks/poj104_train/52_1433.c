#define NUM_ITER 57376

#include <header.h>


main_bench()
{
	int i,n,m,a[200];
	my_scanf("%d %d",&n,&m);
	for (i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	for (i=n+1;i<=n+n-m;i++)
		a[i]=a[i-n];
	for (i=n-m+1;i<n+n-m;i++)
		my_printf("%d ",a[i]);
	my_printf("%d\n",a[i]);
}