#define NUM_ITER 46244

#include <header.h>

int main_bench()
{
	int a[10000];
	int i,n;
	int max,max2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	max=0;
	for(i=0;i<n;i++)
		if(max<=a[i]) 
		{
			max=a[i];
		}
	max2=0;
	for (i=0;i<n;i++)
		if ((a[i]<max)&&(a[i]>=max2)) max2=a[i];
	my_printf("%d\n%d\n",max,max2);
	return 0;
} 