#define NUM_ITER 1598460

#include <header.h>

int main_bench()
{
	int x;
	my_scanf("%d", &x);
	if (x%(3*5*7)==0) my_printf("%c%c%c%c%c",'3',' ','5', ' ','7');
		else if (x%(3*5)==0)  my_printf("%c%c%c", '3',' ','5');
		else if (x%(5*7)==0)  my_printf("%c%c%c", '5',' ','7');
		else if (x%(3*7)==0)  my_printf("%c%c%c", '3',' ','7');
		else if (x%3==0)  my_printf("%c", '3');
		else if (x%5==0)  my_printf("%c", '5');
		else if (x%7==0)  my_printf("%c", '7');
		else my_printf("%c", 'n');
}

