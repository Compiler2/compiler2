#include <header.h>

int main_bench()
{
	int one = 1, two = 1;
	int count;
	int num;
	int i;
	int sum;
	my_scanf("%d", &count);
	while (count --) {
		my_scanf("%d", &num);
		if (num == 1 || num == 2) {
			my_printf("1\n");
			continue;
		}
		num -= 2;
		one = 1, two = 1;
		sum = 0;
		for (i = 0; i < num; i ++) {
			sum = one + two;
			one = two;
			two = sum;
		}
		my_printf("%d\n", sum);
	}
	return 0;
}