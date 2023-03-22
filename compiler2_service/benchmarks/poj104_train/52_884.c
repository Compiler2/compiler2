#include <header.h>

int main_bench()
{
	int m,n,i,a[100],b[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		if(i<m)
			a[i]=a[n-m+i];
		else
            a[i]=b[i-m];
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
		if(i=n-1)
		my_printf("%d",a[n-1]);
	return 0;
}