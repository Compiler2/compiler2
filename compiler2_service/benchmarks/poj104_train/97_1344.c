#include <header.h>

int main_bench(){
	int money;
	my_scanf("%d",&money);
	int a=money/100;
	my_printf("%d\n",a);
	int b=(money-100*a)/50;
    my_printf("%d\n",b);
	int c=(money-100*a-50*b)/20;
	my_printf("%d\n",c);
	int d=(money-100*a-50*b-20*c)/10;
	my_printf("%d\n",d);
	int e=(money-100*a-50*b-20*c-10*d)/5;
    my_printf("%d\n",e);
    int f=money%5;
	my_printf("%d",f);
	return 0;
}
