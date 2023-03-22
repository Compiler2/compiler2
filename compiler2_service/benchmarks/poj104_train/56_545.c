#define NUM_ITER 1542382

#include <header.h>

int main_bench()
{
	int a,b=0;
	my_scanf("%d",&a);
    while(a>9)
	{
		b=(a-a/10*10)*10+b*10;
		a=a/10;
	}
	b=b+a;
	my_printf("%d",b);
	return 0;
}

