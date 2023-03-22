#include <header.h>

int main_bench()
{
	int a[100];
	int n;
	int i;
	int max=0,m2=0;
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>m2&&a[i]!=max)
			m2=a[i];
	}
	my_printf("%d\n",max);
	my_printf("%d\n",m2);
	return 0;
}