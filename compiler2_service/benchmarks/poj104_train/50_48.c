#define NUM_ITER 1051739

#include <header.h>


int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if((n+12)%7==5)my_printf("1\n");
    if((n+12+31)%7==5)my_printf("2\n");
    if((n+12+59)%7==5)my_printf("3\n");
    if((n+12+90)%7==5)my_printf("4\n");
    if((n+12+120)%7==5)my_printf("5\n");
    if((n+12+151)%7==5)my_printf("6\n");
    if((n+12+181)%7==5)my_printf("7\n");
    if((n+12+212)%7==5)my_printf("8\n");
    if((n+12+243)%7==5)my_printf("9\n");
    if((n+12+273)%7==5)my_printf("10\n");
    if((n+12+304)%7==5)my_printf("11\n");
    if((n+12+334)%7==5)my_printf("12\n");
	return 0;
}
