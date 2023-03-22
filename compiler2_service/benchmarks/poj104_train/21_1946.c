#define NUM_ITER 38957

#include <header.h>


int main_bench()
{
	double a[300],sum=0,aver,b[300],max;
	int i,k,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	aver=sum/n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-aver)>max)
			max=fabs(a[i]-aver);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(max-fabs(a[i]-aver)<=1e-6)
		{
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k-1;i++)
		my_printf("%d,",(int)b[i]);
	my_printf("%d",(int)b[k-1]);
}


	

