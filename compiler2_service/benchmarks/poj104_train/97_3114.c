#define NUM_ITER 821681

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,g;
	my_scanf("%d",&a);
	b=a/100;
	c=a%100/50;
	d=a%100%50/20;
	e=a%100%50%20/10;
	f=a%100%50%20%10/5;
	g=a%100%50%20%10%5;
	my_printf("%d\n",b);
my_printf("%d\n",c);
my_printf("%d\n",d);
my_printf("%d\n",e);
my_printf("%d\n",f);
my_printf("%d\n",g);
	


return 0;
}