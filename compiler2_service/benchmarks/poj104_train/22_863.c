#include <header.h>

int main_bench()
{
	int a, b=-1, c, r;
	char e;
	my_scanf("%d%c", &a, &e);
	r = a;
	if (e == 10)
		my_printf("No");
	else
	{
		while (e == 44)
		{
			my_scanf("%d%c", &c, &e);
			if (c > b&&c < a)
				b = c;
			else if (c > a)
			{
				b = a;
				a = c;
			}
		}
		if (a == r&&b == r || b == -1)
			my_printf("No");
		else
			my_printf("%d", b);
	}
}