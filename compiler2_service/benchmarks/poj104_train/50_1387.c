#define NUM_ITER 1068394

#include <header.h>

int main_bench()
{
    int w;
	my_scanf("%d",&w);
	if((12%7+w)%7==5)
		my_printf("1\n");
    if((43%7+w)%7==5)
		my_printf("2\n");
    if(((43+28)%7+w)%7==5)
		my_printf("3\n");
    if(((43+28+31)%7+w)%7==5)
		my_printf("4\n");

    if(((43+28+31+30)%7+w)%7==5)
		my_printf("5\n");
    if(((43+28+31+30+31)%7+w)%7==5)
		my_printf("6\n");
    if(((43+28+31+30+31+30)%7+w)%7==5)
		my_printf("7\n");
    if(((43+28+31+30+31+30+31)%7+w)%7==5)
		my_printf("8\n");

	if(((43+28+31+30+31+30+62)%7+w)%7==5)
		my_printf("9\n");
	if(((43+28+31+30+31+30+62+30)%7+w)%7==5)
		my_printf("10\n");
	if(((43+28+31+30+31+30+62+61)%7+w)%7==5)
		my_printf("11\n");
	if(((43+28+31+30+31+30+62+61+30)%7+w)%7==5)
		my_printf("12\n");
	return 0;
}