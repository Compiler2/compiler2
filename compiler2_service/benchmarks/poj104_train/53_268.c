#define NUM_ITER 9002

#include <header.h>


int main_bench()
{
	int a[100],n,i,j,m;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	    my_scanf("%d",&a[i]);
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
		{
			if (a[j]==a[i])
			{
				for(m=j;m<n;m++)
				{
					a[m]=a[m+1];
				}
                n--;
				j--;
			}
		}
	for (i=0;i<n-1;i++)
		my_printf("%d,",a[i]);
	my_printf("%d",a[n-1]);
}