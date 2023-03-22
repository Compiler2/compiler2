#include <header.h>

int main_bench()
{
	int n,k,a[100000],i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("\n");
	my_scanf("%d",&k);
    for(i=0,j=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			a[j]=a[i];
			j++;
		}
	}
	for(i=0;i<(j-1);i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[j-1]);
	my_printf("\n");
}
