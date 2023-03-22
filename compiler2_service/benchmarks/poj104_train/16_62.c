#include <header.h>

int main_bench()
{
	int n;
	void reverse(int n);
	my_scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	if(n < 1)
		return;
	my_printf("%d",n % 10);
	reverse(n / 10);
}