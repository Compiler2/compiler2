#define NUM_ITER 913058

#include <header.h>

int main_bench()
{
	int w;
	my_scanf("%d",&w);
	if((w+12)%7==5)    my_printf("1\n");
	if((w+43)%7==5)    my_printf("2\n");
	if((w+71)%7==5)    my_printf("3\n");
	if((w+102)%7==5)    my_printf("4\n");
	if((w+132)%7==5)    my_printf("5\n");
	if((w+163)%7==5)    my_printf("6\n");
    if((w+193)%7==5)    my_printf("7\n");
	if((w+224)%7==5)    my_printf("8\n");
	if((w+255)%7==5)    my_printf("9\n");
	if((w+285)%7==5)    my_printf("10\n");
	if((w+316)%7==5)    my_printf("11\n");
	if((w+346)%7==5)    my_printf("12\n");
}
