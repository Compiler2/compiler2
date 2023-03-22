#define NUM_ITER 989860

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f;
	my_scanf("%d",&a);
	b=a%100;
	b=(a-b)/100;a=a-100*b;my_printf("%d\n",b);
	c=a%50;
	c=(a-c)/50;a=a-50*c;my_printf("%d\n",c);
	d=a%20;
	d=(a-d)/20;a=a-20*d;my_printf("%d\n",d);
	e=a%10;
	e=(a-e)/10;a=a-10*e;my_printf("%d\n",e);
	f=a%5;
	f=(a-f)/5;a=a-5*f;my_printf("%d\n",f);
	my_printf("%d\n",a);
}
