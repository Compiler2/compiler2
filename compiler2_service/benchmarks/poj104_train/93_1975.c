#define NUM_ITER 1216609

#include <header.h>

int main_bench()
{
	int n, a;
	my_scanf("%d",&n);
	a=0;
	if (n%3==0)
		my_printf ("3");
	else a=1;
	if (n%5+a==0)
		my_printf(" 5");
        else if (n%5-a==-1) my_printf("5");
        else a=a+1;
	if (n%7==0&&a==1) my_printf(" 7");
        else if (n%7==0&&a==0) my_printf(" 7");
        else if (n%7==0&&a==2) my_printf("7");
	else a=3;
    if (n%3==0||n%5==0||n%7==0)
		a=1;
	else my_printf("n");
return 0;

}