#define NUM_ITER 54169

#include <header.h>

int main_bench()
{
	int n,i,j,k,t,max1=0,min,max2;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(j=0;j<n;j++)
	{
		if(max1<a[j])
			max1=a[j];
		else
			continue;
	}
	min=max1;
	for(k=0;k<n;k++)
	{
		t=max1-a[k];
		if(t==0)
			continue;
		else 
		{
			if(min>t)
				min=t;
		    else
				continue;
		}
	}
	max2=max1-min;
	my_printf("%d\n%d\n",max1,max2);
}