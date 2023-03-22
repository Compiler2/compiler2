#include <header.h>

int main_bench()
{
	int n,a[6],i,p;
	my_scanf ("%d",&n);
	for (i=1;i<=6;i++)
	{
		a[i]=n%10;
		n=n/10;
	    if (a[i]==0)
		{
			p=i;
		break;
		}
	}
    for (i=1;i<p;i++)
	{
		my_printf ("%d",a[i]);
	}
	return 0;
}

