#include <header.h>

int main_bench()
{
	int n,m,i,j,a[101];
	my_scanf("%d%d",&n,&m); 
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	i=0;
	while(i!=m)
	{
		for (j=n;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=a[n];
		i++;
	}
	for(i=0;i<n-1;i++)
	my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}

