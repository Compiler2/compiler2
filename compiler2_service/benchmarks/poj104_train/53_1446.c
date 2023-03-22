#define NUM_ITER 8094

#include <header.h>

int main_bench()
{
	int n,i,j,a[300],b[300],x=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					a[j]=0;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			b[x]=a[i];
			x++;
		}
	}
	for(i=0;i<x;i++)
	{
		if(i==x-1)
		{
		my_printf("%d",b[i]);
		}
		if(i!=x-1)
		{
			my_printf("%d,",b[i]);
		}
	}
	return 0;
}
