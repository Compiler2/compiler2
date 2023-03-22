#define NUM_ITER 55067

#include <header.h>


int main_bench()
{
	int a[100],i=0,j=0,k=0,t1=0,t2=0,sum=0,n;
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	my_scanf("%d",&a[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		if(i!=0)
		my_printf("%d ",a[i]);
		else
		my_printf("%d",a[i]);
	}

	return 0;
}