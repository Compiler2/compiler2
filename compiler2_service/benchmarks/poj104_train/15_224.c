#define NUM_ITER 659

#include <header.h>


int main_bench()
{
	int n, i, x0, y0, x1, y1;
	int pixel;
	my_scanf("%d", &n);
	for(i=0; i<n*n; i++)
	{
		my_scanf("%d", &pixel);
		if (pixel == 0)
		{
			x0 = i/n;
			y0 = i%n;
			break;
		}
	}
	for (i=i+1; i<n*n; i++)
	{
		my_scanf("%d", &pixel);
		if (pixel == 0)
		{
			x1 = i/n;
			y1 = i%n;
		}

	}

	my_printf("%d\n", (x1-x0-1)*(y1-y0-1));

	return 0;
}