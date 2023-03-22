#define NUM_ITER 1458210

#include <header.h>


int main_bench()
{
	int mm[3] = {3, 5, 7};
	int flag[3] = {0};
	int n;
	my_scanf("%d", &n);
	int i;
	for (i = 0; i < 3; i++)
	{
		if (n % mm[i] == 0)
			flag[i] = 1;
	}
	int space = -1;
	for (i = 0; i < 3; i++)
	{
		if (flag[i] == 1)
		{
			space ++;
			if (space == 0)
				my_printf("%d", mm[i]);
			else
				my_printf(" %d", mm[i]);
		}
	}
	if(space == -1)
		my_printf("n");
	my_printf("\n");
}