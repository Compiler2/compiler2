#define NUM_ITER 62248

#include <header.h>

int main_bench()
{
	int n,i=0,a[10000],max=0,may=0;
	my_scanf("%d",&n);
	while(i<n)
	{
		my_scanf("%d",&a[i]);
		if(a[i]>max)
			max=a[i];
		else if(a[i]>may)
			may=a[i];
		i++;
	}
	if(a[0]>may&&a[0]<max)
		may=a[0];
	my_printf("%d\n%d\n",max,may);
}