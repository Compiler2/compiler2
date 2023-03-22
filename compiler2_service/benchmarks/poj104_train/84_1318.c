#include <header.h>

int main_bench()
{
	int n,i,l,m;
	int a[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	l=a[0]>a[1]?a[0]:a[1];
	m=a[0]>a[1]?a[1]:a[0];
	for(i=2;i<n;i++)
	{
		if(a[i]>l&&a[i]>m)
		{
			m=l;
			l=a[i];
		}
		else if(a[i]>m&&a[i]<l)
		{
			m=a[i];
		}
	}
	my_printf("%d\n%d\n",l,m);
	return 0;
}