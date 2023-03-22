#define NUM_ITER 49074

#include <header.h>

int main_bench()
{
	int n,m,i,j,t,k;
	int a[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	for(k=n-m;k<n;k++)
	{
		for(j=0,i=k;j<n-m;j++,i--)
	{
		t=a[i];
		a[i]=a[i-1];
		a[i-1]=t;
	}
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}