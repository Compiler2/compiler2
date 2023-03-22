#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	if (n==0)
		my_printf("0");
	while (n>0)
	{
		my_printf("%d", n%10);
		n/=10;
	}

	return 0;
}
