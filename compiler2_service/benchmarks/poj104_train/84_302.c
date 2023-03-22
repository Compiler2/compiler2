#define NUM_ITER 55275

#include <header.h>


int main_bench()
{
	int i, n, a[200], max, submax;
	my_scanf("%d", &n);
	for (i=0; i<n; i++) 
		my_scanf("%d", &a[i]);
	max = submax = -32321;
	for (i=0; i<n; i++) 
		if (a[i] > max) {
			submax = max;
			max = a[i];
		} else if (a[i] > submax) 
			submax = a[i];

	my_printf("%d\n%d", max, submax);

	return 0;
}
