#define NUM_ITER 1604501

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	if(n%105==0){my_printf("3 5 7");}
	else if(n%35==0){my_printf("5 7");}
	else if(n%21==0){my_printf("3 7");}
	else if(n%15==0){my_printf("3 5");}
	else if(n%7==0){my_printf("7");}
	else if(n%5==0){my_printf("5");}
	else if(n%3==0){my_printf("3");}
	else if(n%3!=0&&n%5!=0&&n%7!=0) my_printf("n\n");

}