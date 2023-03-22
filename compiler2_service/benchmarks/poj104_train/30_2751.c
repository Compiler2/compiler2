#define NUM_ITER 117500

#include <header.h>


int main_bench()
{
	int i,  n, sum = 0;
	my_scanf("%d", &n);
    for (i = 1; i <= n;i++){
			if (i % 7 == 0) continue;
			else if (i > 69&&i < 80) continue;
			else if ((i - 7) % 10 == 0) continue;
			else 
		sum += i*i;
	}
	my_printf("%d",sum);
	return 0;
}
			