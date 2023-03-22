#include <header.h>

int main_bench()
{
	int i,n,*a,*b;
	my_scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	b=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=a[n-i-1];
	for(i=0;i<n-1;i++)
		my_printf("%d ",b[i]);
	my_printf("%d\n",b[n-1]);
	return;
}

		