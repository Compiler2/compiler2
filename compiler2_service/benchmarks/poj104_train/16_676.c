#define NUM_ITER 1822294

#include <header.h>

int main_bench()
{
	int n,a,b,c,d;
	my_scanf("%d",&n);
	if(n/1000!=0){
		a=n/1000;n=n-1000*a;
	b=n/100;n=n-100*b;
	c=n/10;
	d=n-10*c;
	
	my_printf("%d%d%d%d",d,c,b,a);}
	else if(n/100!=0){
    b=n/100;n=n-100*b;
	c=n/10;
	d=n-10*c;

    my_printf("%d%d%d",d,c,b);
	}else if(n/10!=0){
	c=n/10;
	d=n-10*c;
	
	my_printf("%d%d",d,c);}
	else my_printf("%d\n",n);

}