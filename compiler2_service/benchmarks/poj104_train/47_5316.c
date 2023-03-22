#include <header.h>

int main_bench()
{
	int n,a[100],i,j,m=0;
	my_scanf ("%d",&n);
    for (i=0;i<=n-1;i++)
	{
		my_scanf ("%d",&a[i]);
		m++;
	}
	for (j=m-1;j>0;j--)
		my_printf ("%d ",a[j]);
         my_printf ("%d",a[0]);
	return 0;
}