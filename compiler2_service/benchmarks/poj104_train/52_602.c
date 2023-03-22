#include <header.h>


int main_bench()
{
	int a[100],b[100];
	int n,m;
	int i,j;

	my_scanf("%d",&n);
	my_scanf("%d",&m);
	for (i=0;i<n-m;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for (j=0;j<m;j++)
	{
		my_scanf("%d",&b[j]);	
	}
	for (j=0;j<m;j++)
	{
		my_printf("%d ",b[j]);	
	}
	for (i=0;i<n-m-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d\n",a[n-m-1]);
	return 0;
}