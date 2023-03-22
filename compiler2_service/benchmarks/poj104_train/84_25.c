#define NUM_ITER 5554

#include <header.h>


main_bench()
{
	int temp, max, min, a[100] = {0}, n, i, j;

	my_scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		my_scanf("%d", &a[i]);
	}

	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			if(a[i] >= a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	my_printf("%d\n%d", a[1], a[2]);
}