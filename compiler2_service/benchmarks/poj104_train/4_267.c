#define NUM_ITER 552

#include <header.h>


int main_bench()
{
	int sz[100][100];
	int row, col, i, j;
	int startrow = 0 , startcol = 0;

	my_scanf("%d %d",&row, &col);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			my_scanf("%d", &sz[i][j]);
		}
	}
	while((startcol + startrow) != (row + col - 2))
	{
		if(startcol < col - 1)
		{
			for(i = startrow; (i < row) && (i <= startrow + startcol); i++)
			{
				my_printf("%d\n",sz[i][startcol + startrow - i]);
			}
			startcol++;
		}
		else
		{
			for(i = startrow; (i < row) && (i <= startrow + startcol); i++)
			{
				my_printf("%d\n",sz[i][startcol + startrow - i]);
			}
			startrow++;
		}
	}
	my_printf("%d",sz[row - 1][col - 1]);
	return 0;
}