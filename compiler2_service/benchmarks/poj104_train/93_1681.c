#define NUM_ITER 1445486

#include <header.h>

int main_bench(){
	int a,i;
	my_scanf("%d",&a);
	i=0;
    if ((a%3==0)&&(a%5==0)&&(a%7==0)) {my_printf("3 5 7\n");i=1;}
	else if (a%3==0&&a%5==0) {my_printf("3 5\n");i=1;}
	else if (a%3==0&&a%7==0) {my_printf("3 7\n");i=1;}
	else if (a%5==0&&a%7==0) {my_printf("5 7\n");i=1;}
	else if (a%3==0) {my_printf("3\n");i=1;}
	else if (a%5==0) {my_printf("5\n");i=1;}
	else if (a%7==0) {my_printf("7\n");i=1;}
	if (i==0) my_printf("n\n");
    return 0;
}