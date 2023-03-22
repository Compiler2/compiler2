#define NUM_ITER 1308918

#include <header.h>

int main_bench(){
	int n,a,b,c,d,e;
	my_scanf("%d",&n);
	a = (int)(n/100);
	n = n - 100 * a;
	b = (int)(n/50);
	n = n - 50 * b;
	c = (int)(n/20);
	n -= 20 * c;
	d = (int)(n/10);
	n -= 10 * d;
	e = (int)(n/5);
	n -= 5 * e;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,n);
	return 0;
}