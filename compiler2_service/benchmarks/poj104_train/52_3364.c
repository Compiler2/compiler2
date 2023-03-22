#include <header.h>

int main_bench()
{
	int i,n,m,a[100],j;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(j=0;j<m;j++)
	{
		if(j==0)
			my_printf("%d",a[j+n-m]);
		if(j!=0)
			my_printf(" %d",a[j+n-m]);
	}
	for(j=0;j<n-m;j++)
		my_printf(" %d",a[j]);
	my_printf("\n");
}
