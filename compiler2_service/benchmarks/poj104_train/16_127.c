#define NUM_ITER 1195502

#include <header.h>

int main_bench()
{
	int a,b;
	my_scanf("%d",&a);
	for(;a!=0;a=(a-(a%10))/10)
	{
		b=(a%10);
		my_printf("%d",b);
	}
		return 0;
}