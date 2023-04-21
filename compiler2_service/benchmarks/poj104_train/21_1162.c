#define NUM_ITER 49333

#include <header.h>

int main_bench()
{
	int a[300],i,n,max,min;
	double aver,cha1,cha2,sum=0.0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	cha1=fabs(max-aver);
	cha2=fabs(min-aver);
	if(cha1==cha2)
		my_printf("%d,%d",min,max);
	else
	{
		if(cha1>cha2)
			my_printf("%d",max);
		else
			my_printf("%d",min);
	}
	return 0;
}