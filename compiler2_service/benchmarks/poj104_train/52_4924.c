#define NUM_ITER 1356

#include <header.h>


void change(int n,int a[])
{
	int i;
	for(i=n-1;i>=1;i--)
	{
		a[i-1]=a[i-1]+a[i];
		a[i]=a[i-1]-a[i];
		a[i-1]=a[i-1]-a[i];
	}
}

int main_bench()
{
	int m,n,a[100];
	my_scanf("%d %d",&n,&m);

	int i;
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);

	for(i=1;i<=m;i++)
		change(n,a);

	for(i=0;i<=n-2;i++)
		my_printf("%d ",a[i]);
	my_printf("%d\n",a[n-1]);
}