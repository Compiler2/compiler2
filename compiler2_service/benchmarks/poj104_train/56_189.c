#define NUM_ITER 1314970

#include <header.h>

int main_bench()
{
	int a,b=0;
	my_scanf("%d",&a);
	do
	{
		b=b*10+a%10;
		a/=10;
	}
	while(a>0);
	my_printf("%d\n",b);
	return 0;
} 