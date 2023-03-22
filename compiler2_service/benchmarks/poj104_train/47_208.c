#define NUM_ITER 50575

#include <header.h>

int main_bench()
{
	int n,i,t;
	int a[150];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(n%2==0)
	{
		for(i=0;i<n/2;i++)
		{
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<n-1;i++)
		{
			my_printf("%d ",a[i]);
		}
		my_printf("%d\n",a[n-1]);
	}
	else
	{
		for(i=0;i<(n-1)/2;i++)
		{
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<n-1;i++)
		{
			my_printf("%d ",a[i]);
		}
		my_printf("%d\n",a[n-1]);
	}
	return 0;
}


