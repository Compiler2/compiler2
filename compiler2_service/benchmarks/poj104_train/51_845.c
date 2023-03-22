#include <header.h>

int main_bench()
{
	char s[501], a[501][5] = { "\0" };
	int n, i, j, k, l, b[500] = { 0 }, c[500], z = 0;
	my_scanf("%d", &n);
	my_scanf("%s", s);
	l = strlen(s);
	for (i = 0; i < l - n + 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][j] = s[i + j];
		}
	}
	for (i = 0; i < l - n + 1; i++)
	{
		for (j = i+1; j < l - n + 1; j++)
		{
			if (strcmp(a[i], a[j]) == 0)
			{
				b[i] = b[i] + 1;
			}
			else;
		}
	}
	for (k = 500; k > 0 && z == 0; k--)
	{
		for (i = 0; i < l - n + 1; i++)
		{
			if (b[i] == k)
			{
				c[z] = i;
				z = z + 1;
			}
			else;
		}
	}
	if (z == 0)
		my_printf("NO");
	else
	{
		my_printf("%d\n", k + 2);
		for (i = 0; i < z; i++)
			my_printf("%s\n", a[c[i]]);
	}
	return 0;
}