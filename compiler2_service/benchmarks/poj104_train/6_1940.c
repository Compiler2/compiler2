#define NUM_ITER 32

#include <header.h>

int main_bench()
{
	int k, m, n, i, j, sum, matrix[100][100];
	my_scanf("%d", &k);
	while(k>0) {
		k--;
		sum=0;
		my_scanf("%d%d", &m, &n);
		for(i=0; i<m; i++) {
			for(j=0; j<n; j++)
				my_scanf("%d", *(matrix+i)+j);
		}
		if (m==1&&n==1)
			my_printf("%d\n", **matrix);
		else if (m==1) {
			for (i=0; i<n; i++)
				sum+=*(*matrix+i);
			my_printf("%d\n", sum);
		}
		else if (n==1) {
			for (i=0; i<m; i++)
				sum+=**(matrix+i);
			my_printf("%d\n", sum);
		}
		else {
			for (i=0; i<n; i++)
				sum+=*(*matrix+i);
			for (i=0; i<n; i++)
				sum+=*(*(matrix+m-1)+i);
			for (i=1; i<m-1; i++)
				sum+=(**(matrix+i)+*(*(matrix+i)+n-1));
			my_printf("%d\n", sum);
		}
	}
	return 0;
}