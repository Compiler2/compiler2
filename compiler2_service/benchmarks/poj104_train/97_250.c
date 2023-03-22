#define NUM_ITER 1292232

#include <header.h>

int main_bench()
{
    int n,a,b;
	int s[7]={0};
	my_scanf("%d", &n);
	b=n/100;
	my_printf("%d\n", b);
	a=(b==0) ? n:(n%100);
	b=a/50;
	my_printf("%d\n", b);
	a=(b==0) ? a:(a%50);
	b=a/20;
	my_printf("%d\n", b);
	a=(b==0) ? a:(a%20);
	b=a/10;
	my_printf("%d\n", b);
	a=(b==0) ? a:(a%10);
	b=a/5;
	my_printf("%d\n", b);
	a=(b==0) ? a:(a%5);
	my_printf("%d\n", a);
	return 0;
}
