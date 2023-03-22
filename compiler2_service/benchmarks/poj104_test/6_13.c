#include <header.h>


int calcSum(int *matrix, int row, int col);
int main_bench()
{
	int k;
	my_scanf("%d", &k);
	int *result = (int *)malloc(k * sizeof(int));
	int i = 0;
	int row ,col;
	int sum;
	int m, n;
	int *matrix;
	for (i = 0; i < k; i++)
	{
		my_scanf("%d %d", &m, &n);
		matrix = (int *)malloc(m * n * sizeof(int));
		for (row = 0; row < m; row++)
			for (col = 0; col < n; col++)
				my_scanf("%d", matrix + row * n + col);
		 *(result + i) = calcSum(matrix, m, n);
		free(matrix);
	}
	for (i = 0; i < k - 1; i++)
	{
		my_printf("%d\n", *(result + i));
	}
	my_printf("%d", *(result + i));
	return 0;
}

int calcSum(int *matrix, int row, int col)
{
	int sum = 0;
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
				sum += *(matrix + i * col + j);
		}
	return sum;
}