#define NUM_ITER 379811

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	if(n==1)
	{
		my_printf("End");
		return 0;
	}
	else
	{
	int a, b;
	a=n;
	int i=1;
	while (a!=1)
	{
		b=a;
		if (a%2!=0)
		{
			a=a*3+1;
			my_printf("%d*3+1=%d\n", b, a);
		}
		else 
		{
			a=a/2;
			my_printf("%d/2=%d\n", b, a);
		}
		i++;
	}
	}
	my_printf("End");
	return 0;
}