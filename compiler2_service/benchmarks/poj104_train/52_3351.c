#include <header.h>

int main_bench()
{
	int a[100],*p=&a[0],i,n,m;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=n-m;i<n;i++)
		my_printf("%d ",*(p+i));
	for(i=0;i<n-m;i++)
	{
		my_printf("%d",*(p+i));
		if(i!=n-m-1)
			my_printf(" ");
	}
	my_printf("\n");
}
