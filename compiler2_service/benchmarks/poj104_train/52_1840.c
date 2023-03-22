#define NUM_ITER 41215

#include <header.h>

void swap(int *pa,int n,int m)
{
	int a[100];
	int i;
	for(i=0;i<m;i++) a[i]=pa[n-m+i];
	for(i=0;i<n-m;i++) pa[n-1-i]=pa[n-1-i-m];
	for(i=0;i<m;i++) pa[i]=a[i];
	return;
}
int main_bench()
{
	int c[100];
	int i,n,m,*p=c;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) my_scanf("%d",&c[i]);
	swap(p,n,m);
	for(i=0;i<n-1;i++) my_printf("%d ",c[i]);
	my_printf("%d",c[n-1]);
}
