#include <header.h>

int main_bench()
{
	int a[200];int i,j,k;
	int n,m;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<=n-1;i++)
	{my_scanf("%d",&a[i]);}
	for(j=n;j<=2*n-1;j++)
	{a[j]=a[j-n];}
	my_printf("%d",a[n-m]);
	for(k=n-m+1;k<=2*n-1-m;k++)
	{my_printf(" %d",a[k]);}
	my_printf("\n");
}
