#define NUM_ITER 48378

#include <header.h>

int main_bench()
{
	int m,n,i;
	int a[202];
	my_scanf("%d %d",&n,&m);
	my_scanf("%d",&a[1]);
	for(i=2;i<=n;i++)
	{my_scanf(" %d",&a[i]);}
	for(i=n+1;i<=2*n-m;i++)
	{a[i]=a[i-n];}
	my_printf("%d",a[n-m+1]);
	for(i=n-m+2;i<=2*n-m;i++)
	{my_printf(" %d",a[i]);}
	return 0;
}