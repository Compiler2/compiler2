#define NUM_ITER 48216

#include <header.h>

int main_bench()
{
	int a[100],i,n,max1,max2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	max1=a[0];
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
		continue;
		}
		else
				continue;
	}
	max2=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]<max1&&a[i]>max2)
			{
				max2=a[i];
			continue;
			}
			else
				continue;
		}
		my_printf("%d\n%d\n",max1,max2);
}