#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	int i, t, x, max, secondmax;
	my_scanf("%d", &t);
	max=secondmax=t;
	for (i=1;i<n;i++)
	{
		my_scanf("%d", &x);
		
		if (x>max)
		{
			secondmax=max;
			max=x;
			}
		else if(x>secondmax)
		{
			secondmax=x;

		}
	}my_printf("%d\n%d\n", max, secondmax);
	return 0;
}