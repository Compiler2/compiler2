#define NUM_ITER 60466

#include <header.h>

int main_bench()
{
	int n,a[128],*p;
	my_scanf("%d",&n);
	for(p=a+n;p>=a+1;p--)
		my_scanf("%d",p);
	for(p=a+1;p<=a+n-1;p++)
		my_printf("%d ",*p);
	my_printf("%d",*p);
}