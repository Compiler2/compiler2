#define NUM_ITER 6165

#include <header.h>

int main_bench()
{
	int n,i,a[20000],j,k,b=0,c[20000];
	my_scanf("%d", &n);
	for (i = 0; i <= n - 1; i++)
	{
		my_scanf("%d", &a[i]);
	}
	my_printf("%d", a[0]);
	for (i = 1; i <= n - 1; i++)
	{
		k = 0;
		for (j = 0; j <= i-1; j++)
		{
			if (a[i] == a[j]){ k = 1; }
		}
		if (k == 0){ my_printf(" %d", a[i]); }
	}
	my_printf("\n");
}