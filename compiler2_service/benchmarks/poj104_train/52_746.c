#include <header.h>

int main_bench()
{
	int n,m,a[100],i;
	int temp;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=n;i<100;i++)
	{
		a[i]=0;
	}

	for(i=0;i<n-m;i++)
	{
		temp=a[i];
		a[i]=a[i+n];
		a[i+n]=temp;
	}
	for(i=n-m;i<2*n-m-1;i++)
	{
		my_printf("%d ",a[i]);
	}
          my_printf("%d",a[2*n-m-1]);

return 0;
}
