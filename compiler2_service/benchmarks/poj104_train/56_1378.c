#define NUM_ITER 1335455

#include <header.h>

int main_bench(){
	int s;
	my_scanf("%d",&s);
	int a,b,c,d,e;
	a=s%10;
	b=(s%100)/10;
	c=(s%1000)/100;
	d=(s%10000)/1000;
	e=(s%100000)/10000;
	if(a!=0){
		my_printf("%d",a);
	}
	if(b!=0){
		my_printf("%d",b);
	}
	if(c!=0){
		my_printf("%d",c);
	}
	if(d!=0){
	    my_printf("%d",d);
	}
	if(e!=0){
		my_printf("%d",e);
	}
	return 0;
}