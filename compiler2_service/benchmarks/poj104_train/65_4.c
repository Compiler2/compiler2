#define NUM_ITER 36830

#include <header.h>

int main_bench()
{
	int n, a = 0, b = 0;
	my_scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		my_scanf("%d %d", &x, &y);
		if (x == y)
			continue;
		else
		{
			if (x == 0)
			{
				if (y == 1)
					a++;
				else
					b++;
			}
			else if (x == 1)
			{
				if (y == 2)
					a++;
				else
					b++;
			}
			else
			{
				if (y == 0)
					a++;
				else
					b++;
			}
		}
	}
	if (a == b)
		my_printf("Tie");
	else if (a > b)
		my_printf("A");
	else
		my_printf("B");
	return 0;
}

