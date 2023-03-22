#define NUM_ITER 1723444

#include <header.h>

int search (int n)
{
	return n/2;
}
int main_bench ()
{
	int x, y;
	my_scanf("%d%d", &x, &y);
	while (x!=y) {
		if (x>y)
			x=search(x);
		else if(x<y)
			y=search(y);
	}
	my_printf("%d", x);
	return 0;
}