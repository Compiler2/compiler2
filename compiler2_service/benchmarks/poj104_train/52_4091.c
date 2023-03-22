#define NUM_ITER 3096

#include <header.h>

int main_bench()
{
	int a[100],i,n,j,m;
	my_scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		a[0]=a[n];
		for(j=n;j>0;j--)
			a[j]=a[j-1];
	}
	for(i=1;i<n;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[i]);
}
