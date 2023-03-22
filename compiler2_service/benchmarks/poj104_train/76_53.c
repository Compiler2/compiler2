#define NUM_ITER 5020

#include <header.h>

int main_bench()
{
	int n,a[50000],b[50000],i,j,t,max,min;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	min=a[0];
	max=b[0];
	j=1;
	for(i=1;i<n;i++)
	{
		if((a[i]<min)&&(b[i]>=min)) 
		{	min=a[i];
		     j++;
		}
		else if((b[i]>max)&&(a[i]<=max)) 
		{
			max=b[i];
			j++;
		}
		else if((a[i]==min)||(b[i]==max)) 
			j++;
		else if((a[i]>min)&&(b[i]<max)) 
			j++;
	}
	if(j==n)
		my_printf("%d %d",min,max);
	else
		my_printf("no");
	return 0;
}

	