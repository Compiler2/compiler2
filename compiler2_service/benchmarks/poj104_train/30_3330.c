#define NUM_ITER 111679

#include <header.h>

int main_bench()
{
	int n, i = 0;
	int sum = 0;
    my_scanf("%d", &n);
	while(i <= n)
	{
		if(i % 7 == 0||(i + 3) % 10 == 0||i==70||i==71||i==72||i==73||i==74||i==75||i==76||i==77||i==78||i==79)
		{
			i++;
			continue;
		}
		sum = sum + i * i;
		i++;
	}
	my_printf("%d", sum);
	return 0;
}



