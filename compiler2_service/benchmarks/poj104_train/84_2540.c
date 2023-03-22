#define NUM_ITER 58280

#include <header.h>

int main_bench() {
	int max;
	int max2;
	int a;
	int i;
	i=1;
         int n;
         my_scanf("%d\n",&n);
	while (i<=n) {
		my_scanf("%d\n",&a);
	if (i==1) {max=a;max2=a-1;}
	else if (a>max){if (max>max2){max2=max;}
         max=a;}
         else if (a<max){if (a>max2){max2=a;}}
	i++;
	}
	my_printf("%d\n%d\n",max,max2);
	return 0;
}