#define NUM_ITER 1152199

#include <header.h>

int main_bench()
{
	int n,hundred,fifty,twenty,ten,five,one;
	my_scanf("%d",&n);
	hundred=n/100,n=n%100;
	fifty=n/50,n=n%50;
	twenty=n/20,n=n%20;
	ten=n/10,n=n%10;
	five=n/5;n=n%5;
	one=n;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",hundred,fifty,twenty,ten,five,one);
	return 0;
}