#define NUM_ITER 41837

#include <header.h>

int main_bench()
{
	int n,i,j,k,total=0,a[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	float N,b[300]={0.0000},c[300]={0.0000};
	for(i=0;i<n;i++)
	{
		total=total+a[i];
	}
	N=(float)total/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>=N)b[i]=a[i]-N;
		else c[i]=N-a[i];
	}
	
    float bmax=0.0000,cmax=0.0000;	
	for(i=0;i<n;i++)
		{
			if(b[i]>bmax)
			{
				bmax=b[i];
			  	j=i;
			}
			if(c[i]>cmax)
			{
				cmax=c[i];
				k=i;
	         }
	     }
			if(bmax==cmax)my_printf("%d,%d",a[k],a[j]);
			else if(bmax>cmax)my_printf("%d",a[j]);
			else if(cmax>bmax)my_printf("%d",a[k]);
	return;
}