#define NUM_ITER 1428240

#include <header.h>

int main_bench()
{
	int a;
	int reverse(int m);
	my_scanf("%d",&a);
	reverse (a);
	return 0;
}
int reverse(int m)
{
	my_printf("%d",m%10);
	m=m/10;
	if (m!=0) return reverse(m);
}
