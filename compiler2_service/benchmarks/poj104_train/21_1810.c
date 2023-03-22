#define NUM_ITER 37361

#include <header.h>


int main_bench()
{
    int i, n, a[300], avg = 0, maxn = 0;
    my_scanf("%d", &n);
	for (i = 0; i < n; i++) {
		my_scanf("%d", &a[i]);
		a[i] *= 100;
		avg += a[i];
	}
	avg /= n;
	for (i = 0; i < n; i++)
		if (maxn < (a[i]>avg?a[i]-avg:avg-a[i]))
			maxn = a[i]>avg?a[i]-avg:avg-a[i];
	for (i = 0; i < n; i++)
		if ((a[i]>avg?a[i]-avg:avg-a[i]) == maxn) {
			my_printf("%d", a[i] / 100);
			break;
		}
	for (i = i + 1; i < n; i++)
		if ((a[i]>avg?a[i]-avg:avg-a[i]) == maxn)
			my_printf(",%d", a[i] / 100);
    return 0;
}
