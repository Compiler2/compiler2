#define NUM_ITER 57132

#include <header.h>

int main_bench()
{
	int n, m, i, j, temp;
	int * array;
	my_scanf("%d %d", &n, &m);
	array = (int *)malloc(sizeof(int)*n);
	for (i=0; i<n; i++) {
		my_scanf("%d", &array[i]);
	}
	m = m % n;
	for (i=0; i<m; i++) {	
		temp = *(array+(n-1));
		for (j=n-1; j>0; j--) {
			*(array+j) = *(array+(j-1));
		}
		*(array+0) = temp;
	}
	for (i=0; i<n-1; i++) {
		my_printf("%d ", *(array+i));
	}
	my_printf("%d\n", *(array+i));
	free(array);
	return 0;
}
