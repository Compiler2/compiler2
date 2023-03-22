#define NUM_ITER 1536262

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a/10==0)
		my_printf("%d",a);
	else if(a/100==0)
		my_printf("%d%d",a%10,a/10);
	else if(a/1000==0)
		my_printf("%d%d%d",a%10,a%100/10,a/100);
	else
		my_printf("%d%d%d%d",a%10,a%100/10,a%1000/100,a/1000);
	return 0;
}