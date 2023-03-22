#include <header.h>

int main_bench()
{
	int a[101]={0},b[101]={0},i,k,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(k=n;k>0;k--)
	{
		b[k-1]=a[n-k];
	}
	my_printf("%d",b[0]);
	for(j=1;j<n;j++)
	{
		my_printf(" %d",b[j]);
	}
	return 0;
}
