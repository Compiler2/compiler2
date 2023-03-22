#include <header.h>



int main_bench()
{
	int a,b,c,d,e,f;
	my_scanf("%d",&a);
	b=a%100;
	my_printf("%d\n",(a-b)/100);
	c=b%50;
    my_printf("%d\n",(b-c)/50);
	d=c%20;
    my_printf("%d\n",(c-d)/20);
	e=d%10;
    my_printf("%d\n",(d-e)/10);
	f=e%5;
    my_printf("%d\n",(e-f)/5);
	my_printf("%d",f);
	return 0;

}