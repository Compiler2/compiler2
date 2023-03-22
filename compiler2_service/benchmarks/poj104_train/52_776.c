#define NUM_ITER 43306

#include <header.h>

int main_bench()
{
	int n,m,i,a[200],k,l,o;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
       my_scanf("%d",&a[i]);
	for(k=n-1;k>=0;k--)
		a[k+m]=a[k];
	for(l=0;l<m;l++)
		a[l]=a[n+l];
	for (o=0;o<n-1;o++)
		my_printf("%d ",a[o]);
	my_printf("%d\n",a[n-1]);
}