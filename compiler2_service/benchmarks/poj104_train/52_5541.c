#include <header.h>


int main_bench()
{
	int a[100],i,k,n,m;
	my_scanf("%d %d",&n,&m);
	for(k=0;k<n;k++)
		my_scanf("%d",&a[k]);
	for(i=n-m;i<n;i++)
	{
		if(i==n-m)
			my_printf("%d",a[i]);
		else
		my_printf(" %d",a[i]);
	}
	for(i=0;i<n-m;i++)
		my_printf(" %d",a[i]);

	return 0;
}