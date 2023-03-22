#define NUM_ITER 59031

#include <header.h>

int main_bench()
{
	int n,a[101];
	int *p;
	my_scanf("%d",&n);
	for(p=a;p<=a+n-1;p++)
	{
		my_scanf("%d",p);
	}
	p=a+n-1;
	my_printf("%d",*p);
	for(p=a+n-2;p>=a;p--)
	{
		my_printf(" %d",*p);
	}
	return 0;
}