#define NUM_ITER 1564509

#include <header.h>

int main_bench()
{
	int n,i=0,t=0,m=0;
	my_scanf("%d",&n);
	if(n%3==0)i=1;
	if(n%5==0)t=1;
	if(n%7==0)m=1;
	if(i==1&&t==1&&m==1)my_printf("3 5 7");
	else if(i==1&&t==1)my_printf("3 5");
    else if(i==1&&m==1)my_printf("3 7");
	else if(t==1&&m==1)my_printf("5 7");
	else if(i==1)my_printf("3");
    else if(t==1)my_printf("5");
    else if(m==1)my_printf("7");
	else my_printf("n");
}
	
