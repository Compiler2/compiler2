#define NUM_ITER 50410

#include <header.h>


int main_bench()
{
	int i,j,t,n,a[100];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for (i=0,j=n-1;i<j;i++,j--)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	my_printf("%d",a[0]);
	for (i=1;i<n;i++)
		my_printf(" %d",a[i]);
	return 0;
}
