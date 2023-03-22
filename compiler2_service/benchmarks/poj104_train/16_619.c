#define NUM_ITER 1550728

#include <header.h>

int main_bench()
{
	int n, a[5], i = 0, j;
	my_scanf("%d", &n);
	if (n >= 10)
	{
		while (n >= 10)
		{
			a[i] = n % 10;
			n = (n - a[i]) / 10;
			i++;
		}
		for (j = 0; j <= i - 1; j++)
			my_printf("%d", a[j]);
	}
	else
		;
	my_printf("%d", n);
}