#define NUM_ITER 7966

#include <header.h>

int main_bench()
{
	int n,a[301],i=0,j,f,k=0;
	my_scanf ("%d",&n);
	while (k<n)
	{
		my_scanf ("%d",&a[i]);
		for (j=0,f=1;j<i;j++)
		{
			if (a[j]==a[i]) f=0;
		}
		if (f==1) i++;
		k++;
	
	}
	for (j=0;j<i-1;j++) my_printf ("%d,",a[j]);
	my_printf ("%d",a[i-1]);
}

