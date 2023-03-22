#include <header.h>

int main_bench()
{
	int m,n,*p,a[1000],i,j;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	
	p=&a[0];
	
	for(i=n;i>=0;i--)
	{
		a[m+i]=*(p+i);
	}

	p=&a[n];
	for(i=0;i<m;i++)
	{
		a[i]=*(p+i);
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
}
