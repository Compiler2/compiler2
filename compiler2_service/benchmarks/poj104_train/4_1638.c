#define NUM_ITER 537

#include <header.h>

int main_bench()
{
	int row, col, i, j, array[110][110]={0};
	my_scanf("%d%d", &row, &col);
	getchar();
	for(i=0;i<=row-1;i++)
	{
		for(j=0;j<=col-1;j++)
		{
			my_scanf("%d", &array[i][j]);
		}
	}
	for(i=0;i<=col+row-2;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j>=row || (i-j)>=col) continue;
			my_printf("%d\n", array[j][i-j]);
		}
	}
	return 0;
}