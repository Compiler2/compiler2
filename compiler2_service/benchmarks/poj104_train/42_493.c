#include <header.h>

int main_bench()
{
	int i,j,n,k,b;
	int a[100010];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_scanf("%d",&k);
	for (i=0;i<n-1;i++)
	{
		if (a[i]==k)
		{
			for (j=i;j<n;j++)
				a[j]=a[j+1];
			i--;
			n--;
		}
	}
	if (a[n-1]==k)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
				n=i;
		}
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}