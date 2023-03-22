#define NUM_ITER 5305

#include <header.h>

int main_bench()
{
	int a;
	int b;
	int n;
	int m;
	int t;
	double sum;
	my_scanf("%d", &n);
	while(n--) {
		my_scanf("%d",&m);
		a=2;
		b=1;
		sum=0;
		while(m--) {
			sum+=a*1.0/b;
			t=a;
			a=a+b;
			b=t;
		}
		my_printf("%.3lf\n", sum);
	}
	return 0;
}

