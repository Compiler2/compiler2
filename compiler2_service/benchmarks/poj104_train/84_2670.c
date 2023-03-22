#define NUM_ITER 2093065

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int max, lmax;
	int temp;
	int i = 0;
	if (n <= 1 || n >= 100)
	return 0;


	my_scanf("%d", &temp);
		max = temp;
	my_scanf("%d", &temp);
	if (temp > max)
	{
		lmax = max;
		max = temp;
	}
	else
		lmax = temp;

	i += 2;

	while (i < n)
	{
		my_scanf("%d", &temp);
		i++;
		if(temp > max)
		{
			lmax = max;
			max = temp;
		}
		else if (temp > lmax) {
			lmax = temp;
		}
	}
	my_printf("%d\n", max);
	my_printf("%d\n", lmax);
	return 0;
}