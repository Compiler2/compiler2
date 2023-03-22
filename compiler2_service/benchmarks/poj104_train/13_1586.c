#define NUM_ITER 48523

#include <header.h>


int main_bench() {


	int n;
	my_scanf("%d", &n);

	int visit[101] = {0};

	int i;
	for(i = 0; i < n; i++) {
		int num;
		my_scanf("%d", &num);
		if(visit[num] == 1) {

		} else {
			if(i != 0) {
				my_printf(" ");
			}
			my_printf("%d", num);
			visit[num] = 1;
		}
	}
	my_printf("\n");


	return 0;
}
