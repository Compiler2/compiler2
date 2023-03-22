#include <header.h>

int main_bench()
{
	int n,a[300],i,j;

	my_scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
	}
	my_printf ("%d",a[0]);
	for (i=1;i<n-1;i++)
	{
		for (j=0;j<i;j++)
		{
			if (a[j]==a[i] ) break;
			if (j==i-1) my_printf (",%d",a[i]);
		}
	}

	for (j=0;j<n-1;j++)
	{
		if (a[j]==a[n-1] ) break;
		if (j==n-2) my_printf (",%d",a[n-1]);
	}
	
	return 0;
}