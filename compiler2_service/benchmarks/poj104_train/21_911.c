#define NUM_ITER 47455

#include <header.h>

int main_bench()
{
	int n,i,flag;
	int a[300];
	double sum,ave,max;
	double b[300];
	my_scanf("%d",&n);
	sum=0;
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=((double)a[i]-ave);
		if(b[i]<0)
			b[i]=-b[i];

	 }
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
    flag=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			if(flag==0)
			{
				my_printf("%d",a[i]);
	            flag=1;
			}
			else
			{
				my_printf(",%d",a[i]);
			}
		}
	}
	return 0;
}
