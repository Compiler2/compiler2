#define NUM_ITER 728362

#include <header.h>

int main_bench()
{
    int n;
	my_scanf("%d",&n);
	my_printf("%d\n",n/100);
	my_printf("%d\n",(n%100)/50);
    my_printf("%d\n",((n%100)%50)/20);
	my_printf("%d\n",(((n%100)%50)%20)/10);
	my_printf("%d\n",((((n%100)%50)%20)%10)/5);
	my_printf("%d\n",(((((n%100)%50)%20)%10)%5)/1);
	return 0;
}