#include <header.h>

int main_bench()
{
	int a[100][100], b[100][100], c[100][100];
	int m, n, q;
	int i,j,k;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			a[i][j] = 0;
			b[i][j] = 0;
			c[i][j] = 0;
		}
	}
	my_scanf("%d %d", &m, &q);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < q; j++)
			my_scanf("%d", &a[i][j]);
	}
	my_scanf("%d %d", &q, &n);
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < n; j++)
			my_scanf("%d", &b[i][j]);
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < q; k++)
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n - 1; j++)
			my_printf("%d ", c[i][j]);
		my_printf("%d\n", c[i][n - 1]);
	}
}