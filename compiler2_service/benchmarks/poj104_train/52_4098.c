#define NUM_ITER 52342

#include <header.h>

int main_bench()
{
	int n,m,a[100],i,mid;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	if(n==2*m)
	for(i=0;i<m;i++)
	{
		mid=a[n-m+i];
		a[n-m+i]=a[i];
		a[i]=mid;
	}
	if(n>2*m)
	{
	for(i=0;i<m;i++)
	{
		mid=a[n-m+i];
		a[n-m+i]=a[i];
		a[i]=mid;
	}
	for(int j=m;j>0;j--)
	{for(i=j;n-i>m+m-j;i++)
	{
		mid=a[n-i];
		a[n-i]=a[n-i-1];
		a[n-i-1]=mid;
	}}
	}
	if(n<m+m)
	{
		for(int j=m;j>0;j--)
		{
		for(i=n-j;i>m-j;i--)
		{mid=a[i];
		a[i]=a[i-1];
		a[i-1]=mid;}
		}
	}
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
}
