#define NUM_ITER 16479

#include <header.h>


int main_bench()
{
	int a[500],b[500];
	int n,i,k,t,j=0;
	int min;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if (a[i]%2!=0)
		{
			b[j]=a[i];
			j++;
		}
	}
	for (i=0;i<j;i++)
	{
		for (k=i;k<j;k++)
		{
			min=b[i];
			if (b[k]<min)
			{
				min=b[k];
				t=b[k];
				b[k]=b[i];
				b[i]=t;
			}
		}
	}
	for (i=0;i<j;i++)
	{
		if (i!=j-1)
		{
			my_printf("%d,",b[i]);
		}
		else
		{
			my_printf("%d",b[i]);
		}
	}
	return 0;
}