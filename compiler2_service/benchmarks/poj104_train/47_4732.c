#define NUM_ITER 49639

#include <header.h>

int main_bench()
{
	int n,a[100];
	int i;
	for(i=0;i<100;i++)
		a[i]=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
		my_scanf("%d",&a[i]);
	for(i=n;i>=1;i--)
	{
		if(i>1)
			my_printf("%d ",a[i]);
		else
			my_printf("%d",a[i]);
	}
	return 0;
}
