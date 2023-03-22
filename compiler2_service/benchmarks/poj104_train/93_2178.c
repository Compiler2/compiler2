#include <header.h>

int main_bench()
{
	int a,p=0,q=0,t=0;
	my_scanf("%d",&a);
	if(a%3==0)
		p=1;
	if(a%5==0)
		q=1;
	if(a%7==0)
		t=1;
	if(p==1 && q==1 && t==1)
		my_printf("3 5 7\n");
	if(p==1 && q ==1 && t==0)
		my_printf("3 5\n");
	if(p==1 && q==0 && t==1)
		my_printf("3 7\n");
	if(p==1 && q==0 && t==0)
	    my_printf("3\n");
	if(p==0 && q==1 && t==1)
	    my_printf("5 7\n");
	if(p==0 && q==1 && t==0)
        my_printf("5\n");
	if(p==0 && q==0 && t==1)
		my_printf("7\n");
	if(p==0 && q==0 && t==0)
		my_printf("n\n");
}