#define NUM_ITER 1027067

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%7==0)
		my_printf("%d %d %d",3,5,7);
    if(n%3==0&&n%5==0&&n%7!=0)
		my_printf("3 5");
	if(n%5==0&&n%7==0&&n%3!=0)
		my_printf("5 7");
	if(n%3==0&&n%7==0&&n%5!=0)
		my_printf("3 7");
	if(n%3==0&&n%5!=0&&n%7!=0)
		my_printf("3");
	if(n%3!=0&&n%5==0&&n%7!=0)
		my_printf("5");
	if(n%3!=0&&n%5!=0&&n%7==0)
		my_printf("7");
	if(n%3!=0&&n%5!=0&&n%7!=0)
		my_printf("n");
	return 0;

}