#define NUM_ITER 1428586

#include <header.h>

int main_bench()
{
	int a,i=0,j=0;
	my_scanf("%d",&a);
	if(a%3==0) {my_printf("3"); i++;}
	if(a%5==0) { if(i==1) my_printf(" "); my_printf("5");j=10;}
	if(a%7==0) { if(i>0&&j!=10) my_printf(" "); if(j==10) my_printf(" ");my_printf("7");}
	if(a%3!=0&&a%5!=0&&a%7!=0) my_printf("n");
	return 0;
}