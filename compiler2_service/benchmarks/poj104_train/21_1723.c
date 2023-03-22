#define NUM_ITER 53720

#include <header.h>

int main_bench()
{
	unsigned int n,a[300],i,sum=0,max,min;
	float m;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	m=(float)sum/n;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	if(((float)max-m)>(m-(float)min))
		my_printf("%d",max);
	else if(((float)max-m)<(m-(float)min))
		my_printf("%d",min);
	else if(((float)max-m)==(m-(float)min))
		my_printf("%d,%d",min,max);
}