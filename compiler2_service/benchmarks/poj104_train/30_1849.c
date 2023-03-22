#define NUM_ITER 80865

#include <header.h>

int main_bench()
{
	int n, i;
	int sum = 0;
	my_scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		if(i%7==0||(i-7)%10==0||(int)(i/10)==7)
		{
			continue;
		}
		{
			sum = sum + i*i;
		};
	};
	my_printf("%d", sum);
	return 0;
}