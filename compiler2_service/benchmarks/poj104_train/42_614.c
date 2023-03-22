#include <header.h>

int main_bench()
{
	int n,a[100000],m,i,k=0;
	int *p,*q;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++)
	my_scanf ("%d",&a[i]);
	my_scanf ("%d",&m);
	for (p=a;p<a+n-k;p++)
	{
		if (*p==m)
		{
			k++;
			for (q=p;q<a+n-k;q++)
			{
				*q=*(q+1);
			}
			p--;
		}
	}
	for (i=0;i<n-k-1;i++)
	{
		my_printf ("%d ",a[i]);
	}
	my_printf ("%d",a[i]);
}