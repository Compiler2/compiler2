#include <header.h>

int main_bench()
{
	int i,n,a[100],m,cm,max;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	m=0;

	for(i=1;i<n;i++)
	{
		if(a[i]>a[m])
			m=i;
	}
	cm=0;
	max=a[m];
	a[m]=0;

	for(i=0;i<n;i++)
	{
		if(a[i]>a[cm])
			cm=i;
	}
	my_printf("%d\n%d\n",max,a[cm]);
}

