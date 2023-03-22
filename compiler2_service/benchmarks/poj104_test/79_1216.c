#include <header.h>


int main_bench()
{
	int n, m;
	int i, j, k;
	int num;
	int a[500];

	my_scanf("%d%d", &n, &m);
	while((n > 0) && (m > 0))
	{
		for(i = 1; i <= n; i++)
			a[i] = 0;
		num = 0;
		for(i = 1; i < n; i++)
		{
			for(j = 1; j <= m; j++)
			{
				num = num % n + 1;
				while(a[num] == 1)
					num = num % n + 1;
			}
			a[num] = 1;
		}
		for(i = 1; i <= n; i++)
			if(a[i] == 0)
				my_printf("%d\n", i);
		my_scanf("%d%d", &n, &m);
	}
}