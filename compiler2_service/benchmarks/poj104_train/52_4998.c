#include <header.h>

int main_bench()
{
	int n,m,i,a[101],j;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=1;j<=m;j++)
	{
		for(i=n-1;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=a[n];
	}
	for(i=0;i<n;i++)
	{
		my_printf("%d",a[i]);
		if(i<n-1)
			my_printf(" ");
	}
	
	return 0;
}