#define NUM_ITER 11210

#include <header.h>

int main_bench()
{
	int i,j,k=0,l=0,g=0,n,a[20000],b[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	if(n==1)
		my_printf("%d",a[0]);
	else
	{
		for(i=n-1;i>=0;i--)
		{
			if(a[n-1]==a[i])
				k++;
		}
		if(k==n)
			my_printf("%d",a[0]);
		else
		{
			my_printf("%d ",a[0]);
			for(i=1;i<n;i++)
			{
				for(j=i-1;j>=0;j--)
				{
					if(a[i]!=a[j])
						l++;
				}	
				if(l==i)
				{
					b[g]=a[i];
				    g++;
				}
					l=0;
			}
			for(i=0;i<g-1;i++)
			{
				my_printf("%d ",b[i]);
			}
			my_printf("%d",b[g-1]);
		}
	}
	return 0;
}