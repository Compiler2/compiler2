#define NUM_ITER 52315

#include <header.h>

int main_bench()
{
	int n,i,m;
	int a[200];
	my_scanf ("%d %d",&n,&m);
	getchar();
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for (i=0;i<n-m;i++)
	{
		a[n+i]=a[i];
	}
	for (i=0;i<n-1;i++)
	{
		a[i]=a[n-m+i];
		my_printf ("%d ",a[i]);
	}
	a[n-1]=a[2*n-m-1];
	my_printf ("%d",a[n-1]);
	return 0;
}
