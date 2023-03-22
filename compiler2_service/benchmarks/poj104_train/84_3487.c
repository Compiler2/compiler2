#include <header.h>

int main_bench()
{
	int n, i, k, a[101], zd=0, zdbh, cd=0;
	my_scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>zd)
		{
			zd=a[i];
			zdbh=i;
		}
	}
	my_printf("%d\n", zd);
	a[zdbh]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>cd)
		{
			cd=a[i];
		}
	}
	my_printf("%d", cd);
	return 0;
}


