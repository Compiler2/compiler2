#include <header.h>


int main_bench()
{
	int row,col;
	int num[120][120];

	my_scanf("%d %d", &row, &col);

	for (int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)	my_scanf("%d", &num[i][j]);
	}

	for (int k = 0; k <= col + row - 1; k++)
	{
		int minRow, minCol;
		if (k < col)	minRow = 0;
		else	minRow = k - col + 1;

		if (k < row)	minCol = 0;
		else	minCol = k - row + 1;

		for (int i = minRow; i <= k; i++)
		{
			if((k-i) >= minCol)	my_printf("%d\n", num[i][k-i]);
		}
	}

	return 0;
}