#define NUM_ITER 1276455

#include <header.h>

int main_bench()
{
	int a;
	my_scanf("%d",&a);
	if(a==0)
		my_printf("%d",a);
	if(a!=0){
	for(;a>0;){
		my_printf("%d",a%10);
		a=a/10;
	}
	}
	return 0;
}
