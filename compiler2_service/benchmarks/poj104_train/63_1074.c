#define NUM_ITER 33

#include <header.h>

int main_bench()
{
	int matrix1[100][100], matrix2[100][100];
	int row1, column1, row2, column2, i, j, k, sum;
	my_scanf("%d%d", &row1, &column1);
	for(i=0; i<row1; i++)
		for(j=0; j<column1; j++)
			my_scanf("%d", &matrix1[i][j]);
	my_scanf("%d%d", &row2, &column2);
	for(i=0; i<row2; i++)
		for(j=0; j<column2; j++)
			my_scanf("%d", &matrix2[i][j]);
	int temp1 = column2-1;
	for(i=0; i<row1; i++)
	{
		for(j=0; j<temp1; j++)
		{
			sum = 0;
			for(k=0; k<column1; k++)
				sum += matrix1[i][k]*matrix2[k][j];
			my_printf("%d ", sum);
		}
		sum = 0;
		for(k=0; k<column1; k++)
			sum += matrix1[i][k]*matrix2[k][j];
		my_printf("%d\n", sum);
	}
	return 0;
}