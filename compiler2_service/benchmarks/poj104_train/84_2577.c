#define NUM_ITER 45320

#include <header.h>

int main_bench()
{
	int n,i,k;int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			k=a[i];a[i]=a[i-1];a[i-1]=k;
		}
	}
	for(i=n-1;i>1;i--)
	{
		if(a[i]>a[i-1])
		{
			k=a[i];a[i]=a[i-1];a[i-1]=k;
		}
	}
	my_printf("%d\n%d\n",a[0],a[1]);
	return 0;
}