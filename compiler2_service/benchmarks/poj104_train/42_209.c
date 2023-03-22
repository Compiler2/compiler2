#include <header.h>

int main_bench()
{
	int n,i,j,k,a[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		{
			j=i;
			for (j;j<n;j++)
				a[j]=a[j+1];
			    n=n-1;
				i=i-1;
		}	
	}
	if (n!=0)
	{
	for (i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
		my_printf("%d",a[n-1]);
	}
}
