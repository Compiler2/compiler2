#include <header.h>

int main_bench()
{
	int a[310],max,min,n,i;
	float sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		if(i==0)
		{
			max=a[i];min=a[i];sum=a[i];
		}
		else
		{
			sum+=a[i];
			max=(a[i]>max)? a[i]:max;
			min=(a[i]<min)? a[i]:min;
		}
	}
	sum=sum/n;
	if((max-sum)>(sum-min))
		my_printf("%d",max);
	else if((max-sum)<(sum-min))
		my_printf("%d",min);
	else my_printf("%d,%d",min,max);
}
