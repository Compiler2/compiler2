#include <header.h>

int main_bench(){
	int n;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	my_scanf("%d",&n);
	a=n/100;
	n%=100;
	b=n/50;
	n%=50;
	c=n/20;
	n%=20;
	d=n/10;
	n%=10;
	e=n/5;
	n%=5;
	f=n;
	my_printf("%d\n",a);
	my_printf("%d\n",b);
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	my_printf("%d\n",e);
	my_printf("%d\n",f);
	return 0;
}
	                                                         