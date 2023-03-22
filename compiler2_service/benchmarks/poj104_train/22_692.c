#define NUM_ITER 1416233

#include <header.h>


int main_bench() {
	int a, max=0, inf=0;
	char c;
	do {
		my_scanf("%d", &a);
		my_scanf("%c", &c);
		if (a>max) {
			inf=max;
			max=a;
		}
		else if (a==max) {}
		else if (a>=inf) {
			inf=a;
		}
	}while (c==',');
	if (max==inf) {
		my_printf("No");
	} 
	else if (inf==0) {
		my_printf("No");
	}
	else {
		my_printf("%d", inf);
	}
	return 0;
}
