#include <header.h>

int main_bench()
{
	int a[100],i,n,j,temp;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	for(j=1;j<=2;j++)
	{
		for(i=2;i<=n;i++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
			    a[j]=a[i];
			    a[i]=temp;
			}
		}
	}
	my_printf("%d\n%d",a[1],a[2]);
}