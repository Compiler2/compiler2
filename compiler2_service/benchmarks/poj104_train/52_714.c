#include <header.h>

int main_bench()
{
	int n,k,i;
	int a[200];
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i>=0&&i<=(n-k-1))
		{
			a[i+100]=a[i];
		}
	    else if(i>=(n-k)&&i<=(n-1)) 
		{
		    a[i-n+k]=a[i];
		}
	}
	for(i=0;i<k;i++)
	{
		my_printf("%d ",a[i]);
	}
	for(i=100;i<=n-k+98;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-k+99]);
}
