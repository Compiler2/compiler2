#define NUM_ITER 56785

#include <header.h>

int main_bench()
{
	int a[200],i,n,m,k,h;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<=n-m-1;i++)
		a[n+i]=a[i];
	k=(n-m);
	h=(2*n)-m;
	for(i=k;i<h-1;i++)
		my_printf("%d ",a[i]);
	i=h-1;
	my_printf("%d",a[i]);
}