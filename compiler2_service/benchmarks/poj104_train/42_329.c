#include <header.h>

int main_bench()
{int n,m,i,j,k,a[100000];
	my_scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&k);
	for (i=0;i<n-1;i++)
	{
		if (a[i]==k)
		{
			for (j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
			i--;
			n--;
		}
	}
	if (a[n-1]==k)
	{
		m=n-1;
	}
	else m=n;
	for (i=0;i<m-1;i++)
	{
		my_printf("%d ",a[i]);
	}
	my_printf("%d",a[m-1]);
	return 0;
}