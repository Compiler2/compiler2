#define NUM_ITER 1210311

#include <header.h>

int main_bench()
{
	int A,B,C,D,E,I,a,b,c,d,e,n;
	my_scanf("%d",&n);
	A=n/100;
	a=n%100;
	B=a/50;
    b=a%50;
	C=b/20;
	c=b%20;
	D=c/10;
	d=c%10;
	E=d/5;
	e=d%5;
	I=e;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",A,B,C,D,E,I);
	return 0;
}