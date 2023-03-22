#define NUM_ITER 1359068

#include <header.h>

int main_bench()
{
	int b;
    long n;
	my_scanf("%d",&n);
	while(n>9)
	{
		b=n%10;
		my_printf("%d",b);
		n=n/10;
	}
	my_printf("%d\n",n);
}
	