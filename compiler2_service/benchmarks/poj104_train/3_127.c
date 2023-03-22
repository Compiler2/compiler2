#define NUM_ITER 54331

#include <header.h>

int main_bench()
{
	int n,k,i,a[10000],b[10000],j;
	my_scanf ("%d %d",&n,&k);
	for (i=0;i<n;i++)
	{
		my_scanf ("%d",&a[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=1;j<n;j++)
		{
			b[i]=a[i]+a[j];
			if (b[i]==k)
			{
				break;
			}
			else
			{
				continue;
			}
		}
		if (b[i]==k)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	if (b[i]==k)
	{
		my_printf ("yes");
	}
	else
	{
		my_printf ("no");
	}
	return 0;
}
