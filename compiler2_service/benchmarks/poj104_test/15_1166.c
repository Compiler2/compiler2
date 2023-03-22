#define NUM_ITER 666

#include <header.h>

int main_bench()
{
	int n, t, i, j;
	int x1, y1, x2, y2;
	my_scanf("%d", &n);
	x1=-1;y1=-1;x2=-1;y2=-1;
	for(i = 0; i < n; i++) 
	{
		for(j = 0; j < n; j++) 
		{
			my_scanf("%d", &t);
			if(t == 0) 
			{
				if(x1 == -1 && y1 == -1) 
				{
					x1 = j;
					y1 = i;
				}
				x2 = j;
				y2 = i;
			}
		}
	}
	if(x1 == x2 || y1 == y2)
		my_printf("0");
	else
		my_printf("%d", (x2 - x1 - 1) * (y2 - y1 - 1));
	return 0;
}