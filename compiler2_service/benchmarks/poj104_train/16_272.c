#define NUM_ITER 1440164

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	do
	{
		my_printf("%d",(n%10));
		n=(int)n/10;
	}while (n>0);
	return 0;
}
		