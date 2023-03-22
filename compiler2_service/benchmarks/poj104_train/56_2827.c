#define NUM_ITER 1241579

#include <header.h>

int main_bench()
{
	void f(int x);
	int x;
	my_scanf("%d",&x);
	f(x);
	return 0;
}
void f(int x)
{
	if (x>=10)
	{
		my_printf("%d",x%10);
		int y;
		y=(x-x%10)/10;
		f(y);
	}
	else my_printf("%d\n",x);
}