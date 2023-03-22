#define NUM_ITER 49559

#include <header.h>

int main_bench()
{
	int t,n,a[100],i,max1,max2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	max1=0;
	max2=0;
	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
			t=i;
		}
	}
	a[t]=0;
	my_printf("%d\n",max1);
	for(i=0;i<n;i++)
	{
		if(max2<a[i])
			max2=a[i];
	}
	my_printf("%d\n",max2);
}