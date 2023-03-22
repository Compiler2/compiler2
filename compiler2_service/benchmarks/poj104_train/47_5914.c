#include <header.h>

int main_bench()
{
	int n,a[100],i,j,m,d,c[100];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&m);
		a[i]=m;
	}
	if(n/2==0)
		d=n/2;
	else 
		d=(n+1)/2;
		for(j=0;j<d;j++)
		{
			c[j]=a[n-1-j];
			my_printf("%d ",c[j]);
		}
			for(j=d;j<n;j++)
		{
			c[j]=a[n-1-j];
			if(j==(n-1))
					my_printf("%d",c[j]);
			else
	my_printf("%d ",c[j]);
		}
return 0;
}

