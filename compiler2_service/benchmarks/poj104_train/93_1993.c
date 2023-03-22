#define NUM_ITER 1419585

#include <header.h>

int main_bench()
{
	int k;
	my_scanf("%d",&k);
if(k%3==0&&k%5==0&&k%7==0)
my_printf("3 5 7");
else if(k%3==0&&k%5==0)
my_printf("3 5");
else if(k%3==0&&k%7==0)
my_printf("3 7");
else if(k%5==0&&k%7==0)
my_printf("5 7");
else if(k%3==0)
my_printf("3");
else if(k%5==0)
my_printf("5");
else if(k%7==0)
my_printf("7");
else
my_printf("n");
}
