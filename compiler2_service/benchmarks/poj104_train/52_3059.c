#include <header.h>

int main_bench()
{
	int n,m,i,a[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{		
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<2*n;i++)
	{
		if(i<n-m)
		{
			a[i+n]=a[i];
		}
	    else
	    {
		    a[m+i-n]=a[i];
	    }
	    if(i>=n+1)
	    {
		    a[i-m+1]=a[i];
	    }
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[n-1]);
	return 0;
}