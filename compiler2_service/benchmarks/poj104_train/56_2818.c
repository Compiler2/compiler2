#include <header.h>

int main_bench()
{
	void print(int n);
	int n;
	my_scanf("%d",&n);
	print(n);
	return 0;
}

void print(int n)
{
	if(n<10)
		my_printf("%d",n);
	else
	{
		my_printf("%d",n%10);
		print(n/10);
	}
}