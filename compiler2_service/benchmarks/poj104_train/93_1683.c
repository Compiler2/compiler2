#define NUM_ITER 1854154

#include <header.h>


int main_bench()
{
	int a,b,c,i;
	my_scanf("%d",&i);
	a=i%3==0;
	b=i%5==0;
	c=i%7==0;
	if(a+b+c==3) my_printf("3 5 7\n");
	else if(a+b==2) my_printf("3 5\n");
	else if(a+c==2) my_printf("3 7\n");
	else if(b+c==2) my_printf("5 7\n");
	else if(a==1) my_printf("3\n");
	else if(b==1) my_printf("5\n");
	else if(c==1) my_printf("7\n");
	else my_printf("n\n");
	return 0;
}