#include <header.h>

int main_bench()
{
	int n,a[310],b,c[310],i,j,k=1;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	c[k]=a[1];
	for(i=2;i<=n;i++)
	{
		for(j=i-1;j>=1;j--)
		{
			if(a[j]==a[i])
				break;
		}
		if(j==0)
		{
			k++;
			c[k]=a[i];
		}
	}
	my_printf("%d",c[1]);
	if(k>1)
	{
		for(i=2;i<=k;i++)
			my_printf(",%d",c[i]);
	}
	my_printf("\n");
}
