#define NUM_ITER 48309

#include <header.h>

main_bench()
{
	int a[200];
	int i,j,m,n;
	my_scanf("%d %d",&n,&m);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for (i=0;i<n-m;i++)
	{
		j=i+m+n;
		a[j]=a[i];
	}
	for (i=n-m;i<n;i++)
	{
		j=i+m;
		a[j]=a[i];
	}
	my_printf("%d",a[n]);
	for (i=n+1;i<2*n;i++)
		my_printf(" %d",a[i]);
	return(0);
}