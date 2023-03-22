#define NUM_ITER 51653

#include <header.h>

int main_bench()
{
	int i,a[100000],n,k,t=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
		my_scanf("%d",&k);
    	for (i=0;i<n;i++)
		{
			if(a[i]!=k)
				a[i-t]=a[i];
			else
				t=t+1;
		}
		for(i=0;i<n-t-1;i++)
			my_printf("%d ",a[i]);
		my_printf("%d",a[n-t-1]);
}
