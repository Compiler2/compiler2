#define NUM_ITER 51874

#include <header.h>

int main_bench()
{
	int n,a[100],i,diyi,dier;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	my_scanf("%d",&a[i]);
	diyi=a[0];
	dier=a[1];
    for(i=1;i<=n-1;i++)
	{
		if(a[i]>=diyi)
		{
			dier=diyi;
		    diyi=a[i];
		}
		if(a[i]<diyi&&a[i]>=dier)
		dier=a[i];
	}
	my_printf("%d\n%d",diyi,dier);
	return 0;
}