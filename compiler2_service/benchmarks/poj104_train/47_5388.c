#define NUM_ITER 51457

#include <header.h>

int main_bench()
{
	int n,a[100],*p=a;
	my_scanf("%d",&n);
	p=p+n-1;
	for(;p>=a;p--)
		my_scanf("%d ",p);
	p=a;
	for(p=a;p<a+n-1;p++)
		my_printf("%d ",*p);
                  my_printf("%d",*p);
}