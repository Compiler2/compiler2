#include <header.h>

int main_bench(){
	int x,a,b,c,d,e,f,a1,b1,c1,d1,e1;
	my_scanf("%d",&x);
	a=x/100;
	a1=x%100;
	b=a1/50;
	b1=a1%50;
	c=b1/20;
	c1=b1%20;
	d=c1/10;
	d1=c1%10;
	e=d1/5;
	e1=d1%5;
	f=e1;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}
