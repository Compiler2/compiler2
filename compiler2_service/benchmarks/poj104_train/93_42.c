#define NUM_ITER 1541884

#include <header.h>

int main_bench()
{
	int m=0,n=0,p=0,a;
	my_scanf("%d",&a);
    if(a%3==0)m=3;
    if(a%5==0)n=5;
	if(a%7==0)p=7;
	if(m+n+p==15)my_printf("3 5 7");
	else if(m+n+p==8)my_printf("3 5");
	else if(m+n+p==10)my_printf("3 7");
	else if(m+n+p==12)my_printf("5 7");
	else if(m+n+p==3)my_printf("3");
	else if(m+n+p==5)my_printf("5");
	else if(m+n+p==7)my_printf("7");
	else if(m+n+p==0)my_printf("n"); 


}