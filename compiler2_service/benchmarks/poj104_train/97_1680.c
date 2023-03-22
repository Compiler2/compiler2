#include <header.h>

int main_bench(){
	int n,a,b,c,d,e,f;
	my_scanf("%d",&n);
	a=n/100;
	b=(n%100)/50;
	c=(n%50)/20;
         d=((n%50)%20)/10;
	e=(n%10)/5;
	f=(n%5)/1;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d",f);
	return 0;
}