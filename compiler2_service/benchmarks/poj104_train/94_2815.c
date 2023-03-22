#define NUM_ITER 16727

#include <header.h>

void bubble(int a[],int n)
{
	int tmp, i, j;
	for (i = n - 1; i >= 0;i--)
	for (j = 0; j < i; j++)
	if (a[j] > a[j + 1])
	{
		tmp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tmp;
	}
}
int main_bench()
{
	int n, a[500],i,b[500],j=0;
	my_scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		my_scanf("%d", &a[i]);
		if (a[i] % 2 != 0){ b[j] = a[i]; j += 1; }
	}
	bubble(b, j);
	my_printf("%d", b[0]);
	for (i = 1; i < j; i++)
	{
		my_printf(",%d", b[i]);
	}
	my_printf("\n");
	return 0;
}