#define NUM_ITER 70077

#include <header.h>


int p[50001];

int main_bench() {
	int n, i, j;
	my_scanf("%d", &n);
	p[0] = p[1] = 0;
	for (i = 2; i <= n; ++i) {
		p[i] = 1;
		for (j = 2; j * j <= i; ++j)
			if (i % j == 0) {
				p[i] = 0;
				break;
			}
	}
	for (i = 6; i <= n; i += 2)
		for (j = 3; j <= n; j += 2)
			if (p[j] && p[i - j]) {
				my_printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
	return 0;
}