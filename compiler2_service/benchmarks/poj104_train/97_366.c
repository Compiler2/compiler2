#define NUM_ITER 979982

#include <header.h>


int main_bench()
{
	int n, a[6]={0},i;
	my_scanf("%d", &n);
	a[0]=n/100;
	n=n%100;
	a[1]=n/50;
	n=n%50;
	a[2]=n/20;
	n=n%20;
	a[3]=n/10;
	n=n%10;
	a[4]=n/5;
	n=n%5;
	a[5]=n;
	for(i=0;i<6;i++){

	my_printf("%d\n", a[i]);
	}
	return 0;
}