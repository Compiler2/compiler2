#define NUM_ITER 52940

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a[100000];
	int i,b,c,d;
	for (i=0;i<1;i++)
	{
		my_scanf("%d",&a[i]);
		b=a[0];
	}
	for (i=1;i<2;i++)
	{
		my_scanf("%d",&a[i]);
		c=a[i];
		if (c>=b)
		{
			d=b;
			b=c;
			
		}
		else 
		{
			d=c;
		}
	}
	for (i=2;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		c=a[i];
		if (c>=b)
		{
			d=b;
			b=c;	
		}
		else if (c<b&&c>=d)
		{
			d=c;
		}
	    else 
		{
			b=b;
			d=d;
		}

	}
	my_printf("%d\n%d",b,d);
	return 0;
}