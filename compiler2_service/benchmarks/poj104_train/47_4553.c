#define NUM_ITER 48825

#include <header.h>

int main_bench()
{
	int a[100];
	int t[100];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	i=0;
	for(j=n-1;j>=0;j--)
	{
		t[i]=a[j];
		i=i+1;
	}
	for(j=0;j<n-1;j++)
		my_printf("%d ",t[j]);
	my_printf("%d",t[n-1]);
}