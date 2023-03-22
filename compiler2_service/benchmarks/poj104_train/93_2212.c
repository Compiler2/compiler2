#define NUM_ITER 1193914

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d", &n);
	if(n%3==0&&n%5==0&&n%7==0) my_printf("3 5 7");
	
	else if(n%3!=0&&n%5==0&&n%7==0) my_printf("5 7");
	
	else if(n%3==0&&n%5!=0&&n%7==0) my_printf("3 7");
	
	else if(n%3==0&&n%5==0&&n%7!=0) my_printf("3 5");

	else if(n%3==0&&n%5!=0&&n%7!=0) my_printf("3");

	else if(n%3!=0&&n%5==0&&n%7!=0) my_printf("5");

	else if(n%3!=0&&n%5!=0&&n%7==0) my_printf("7");
	
	else my_printf("n");
	return 0;
}
