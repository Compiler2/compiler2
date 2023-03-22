#define NUM_ITER 1581686

#include <header.h>


int oper;
void p(int n);
int main_bench()
{
	int num;
	my_scanf("%d", &num);
	oper = 0;

	if(num%3 == 0)
		p(3);
	if(num%5 == 0)
		p(5);
	if(num%7 == 0)
		p(7);
	if(num%3 != 0 && num%5 != 0 && num%7 != 0)
		my_printf("n");
	return 0;
}
void p(int n)
{
	if(oper)
		my_printf(" ");
	my_printf("%d", n);
	oper = 1;
}