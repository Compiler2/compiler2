#define NUM_ITER 6261

#include <header.h>


int main_bench()
{
	float num[300];
	int n,i,j;
	float temp;
	float max1,max2;
	float a,sum=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%f",&num[i]);
	for(i=0;i<n;i++)
		sum=sum+num[i];
	a=sum/(float)n;
	for(i=0;i<n;i++)
	{	for(j=0;j<n-i-1;j++)
			if(num[i]>num[i+1])
			{
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
	}

	max1=num[0];
	for(i=1;num[i]<a;i++)
	{
		if((a-num[i])>(a-max1))
			max1=num[i];
	}
	max2=num[n-1];
	for(i=n-1;num[i]>a;i++)
	{
		if((num[i]-a)>(a-max2))
			max2=num[i];
	}
	if((a-max1)==(max2-a))
		my_printf("%.0f,%.0f",max1,max2);
	else if((a-max1)>(max2-a))
		my_printf("%.0f",max1);
	else
		my_printf("%.0f",max2);
	
}