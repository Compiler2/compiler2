#include <header.h>

int main_bench()
{
	int n, k, i, a[1000], j, q;
	my_scanf("%d%d", &n, &k);
	for (i = 1; i <= n; i++) {
		my_scanf("%d", &a[i]);
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			q = a[i] + a[j];
			if (q == k)
				break;
			else
				q = 0;
		}
		if (q == k)
			break;
	}
	if (q == k)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}