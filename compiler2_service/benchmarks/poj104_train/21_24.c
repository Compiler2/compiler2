#define NUM_ITER 55513

#include <header.h>


int main_bench()
{
	int a[300],max,min,n,sum=0,i;
	float ave,sub1,sub2;
	my_scanf("%d",&n);
    for(i=0;i<n;i++) 
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=(float)sum/n;
	max=a[0];
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		else if(a[i]<min)
			min=a[i];
	}
	sub1=(float)max-ave;
	sub2=ave-(float)min;
	if(sub1==sub2)
		my_printf("%d,%d",min,max);
	else
		my_printf("%d",(sub1>sub2)?max:min);
}
