#define NUM_ITER 2302

#include <header.h>

int Factor(int, int);
int main_bench()
{
	int n, a, i;
	my_scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		my_scanf("%d",&a);
		my_printf("%d\n",Factor(a, 2));
	}
	return 0;
}
int Factor(int a,int p)
{
	int i, j, z = 1;
	if (a < p)
		z = 0;
	else
	{
		for (i = p;i <= a;i++)
		{
			if (a % i == 0)
			{
				z += Factor(a / i, i);
			}
		}
	}
	return z;
}