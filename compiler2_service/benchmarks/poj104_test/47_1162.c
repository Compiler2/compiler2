#include <header.h>

int main_bench()
{
	int a[100],i,n,j,e,m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<(n/2);j++)
	{
		e=a[j];
        a[j]=a[n-1-j];
		a[n-1-j]=e;
	    my_printf("%d ",a[j]);
	}
	for(m=n/2;m<n-1;m++)
	{
		my_printf("%d ",a[m]);
	}
	my_printf("%d",a[n-1]);
	return 0;
}
