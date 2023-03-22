#define NUM_ITER 56170

#include <header.h>

int main_bench()
{
	int a[100];
	int n,i,b,c,d;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
	}
    for(i=0,b=0;i<=n-1;i++)
	{
		if (b<a[i])
	    b=a[i];
	}

	for(i=0;i<=n-1;i++)
	{
		if (a[i]==b)
			break;
	}
	c=i;
	for(i=0,d=0;i<=n-1;i++)
	{
		if (i!=c&&d<a[i])
		d=a[i];
	}
	my_printf("%d\n%d",b,d);
}
