#include <header.h>

int main_bench()
{
	int n,i,a[305],count=0,max,min;
	double ave=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
		if(i==1)
		{
			max=a[1];
			min=a[1];
		}
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
		ave+=a[i];
	}
	ave/=n;
	if(ave-min>max-ave)
	{
		my_printf("%d",min);
	}
	else if(ave-min<max-ave)
	{
		my_printf("%d",max);
	}
	else
	{
		my_printf("%d,%d",min,max);
	}
}