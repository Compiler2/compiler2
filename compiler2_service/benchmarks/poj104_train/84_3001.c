#include <header.h>

int main_bench()
{
	int i,n,max=0,b=0,c,a[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]>max) max=a[i];
	}
	my_printf("%d\n",max);
	c=max;
    for(i=0;i<n;i++)
	{
		if(a[i]>b&&a[i]<c) b=a[i];
	}
	my_printf("%d",b);
}
