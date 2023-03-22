#include <header.h>

int main_bench()
{
	int x, y;
	int i, j;
	my_scanf("%d%d",&x,&y);
	while (x != y)
	{
		if (x > y)
			x /= 2;
		else if (x < y)
			y /= 2;
	}
	my_printf("%d",x);
	return 0;
}