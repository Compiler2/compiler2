#define NUM_ITER 969344

#include <header.h>

int main_bench()
{
	int m;
	my_scanf("%d",&m);
	if(m%3==0&&m%5==0&&m%7==0)
		my_printf("3 5 7");
	if(m%3==0&&m%5==0&&m%7!=0)
		my_printf("3 5"); 
	if(m%3==0&&m%7==0&&m%5!=0)
	    my_printf("3 7"); 
	if(m%5==0&&m%7==0&&m%3!=0)
		my_printf("5 7");
	if(m%3==0&&m%5!=0&&m%7!=0)
		my_printf("3");
	if(m%3!=0&&m%5==0&&m%7!=0)
		my_printf("5");
	if(m%3!=0&&m%5!=0&m%7==0)
		my_printf("7");
	if(m%3!=0&&m%5!=0&&m%7!=0)
		my_printf("n");
	else my_printf("\n");
	my_printf("\n");
}

