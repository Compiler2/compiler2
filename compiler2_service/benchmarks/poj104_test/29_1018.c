#define NUM_ITER 2740

#include <header.h>


int main_bench(void){
	int m;
	my_scanf("%d", &m);
	while(m--){
		int n, i;
		double res = 0;
		double temp1 = 1.0, temp2 = 2.0;
		my_scanf("%d", &n);
		for(i = 0; i < n; ++i){
			res = res + temp2/temp1;
			temp2 += temp1;
			temp1 = temp2 - temp1;
		}
		my_printf("%.3lf\n", res);
	}
}