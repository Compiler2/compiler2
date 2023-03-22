#include <header.h>

int main_bench()
{
	int n,i,max1,max2;
	my_scanf("%d",&n);
	int a[100];
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	max1=-99999;max2=-99999;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max1) max1=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max2&&a[i]<max1) max2=a[i];
	}
	my_printf("%d\n%d",max1,max2);
}