#define NUM_ITER 55353

#include <header.h>

int main_bench()
{
	int n,i,x;
	my_scanf("%d", &n);
	int first, second;
	for (i=1;i<=n;i++)
	{
		if (i<n)
		{
			my_scanf("%d\n", &x);
		}
		else
		{
			my_scanf("%d", &x);
		}
		
		if (i==1)
		{
			first=x;
		}
		else if (i==2)
		{
			if (x>first)
			{
				second=first;
				first=x;
			}
			else
			{
				second=x;
			}
		}
		else
		{
			if (x>first)
			{
				second=first;
				first=x;
			}
			else if (x>second)
			{
				second=x;
			}
		}
	}
	my_printf("%d\n", first);
	my_printf("%d\n", second);
	return 0;
}
