#define NUM_ITER 5997

#include <header.h>

int main_bench()
{
	int n,a[20000],b[20000],i,j,k=0;
	my_scanf("%d\n",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
		{
			{
			if (a[i]==a[j])
				a[i]=0;
			else
				a[i]=a[i];
			}
		}
		if (a[i]!=0)
		{
			b[k]=a[i];
	    	k=k+1;
		}
	}

		for (i=0;i<k-1;i++)
		{
		my_printf("%d ",b[i]);
		}
		my_printf("%d",b[k-1]);
}