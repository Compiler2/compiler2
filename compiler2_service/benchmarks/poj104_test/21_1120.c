#define NUM_ITER 5668

#include <header.h>

int main_bench()
{
	int i,n,j,l,a[500];
	float k;
	my_scanf("%d",&n);
	for(i=0,k=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		k=k+a[i];
	}
	k=k/n;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[j]<a[i])
			{
				l=a[j];a[j]=a[i];a[i]=l;
			}
	}
	if(k-a[0]*1.0>a[n-1]*1.0-k)
		my_printf("%d",a[0]);
	if(k-a[0]*1.0<a[n-1]*1.0-k)
		my_printf("%d",a[n-1]);
	if(k-a[0]*1.0==a[n-1]*1.0-k)
		my_printf("%d,%d",a[0],a[n-1]);
	return 0;
}