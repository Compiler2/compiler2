#define NUM_ITER 1471

#include <header.h>

void swap(int a[],int j);
int main_bench()
{
	int i,j,m,n,a[101];
	my_scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=n;j>1;j--)
		{
			swap(a,j);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i==1) my_printf("%d",a[i]);
		else my_printf(" %d",a[i]);
	}
}
void swap(int a[],int j)
{
	a[j]=a[j]-a[j-1];
	a[j-1]=a[j]+a[j-1];
	a[j]=a[j-1]-a[j];
}
