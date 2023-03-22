#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int a=n/100;
	int b=(n%100)/50;
	int c=(n%50)/20;
	int d=(n%50-20*c)/10;
	int e=(n%10)/5;
	int f=n%5;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}