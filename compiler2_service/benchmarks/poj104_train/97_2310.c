#define NUM_ITER 1516937

#include <header.h>

int main_bench() {
	int a,b,c,d,e,f,g;
	my_scanf("%d",&a);
	if (a<1000) {
		b=a/100;
		c=(a-100*b)/50;
		d=(a-100*b-50*c)/20;
		e=(a-100*b-50*c-20*d)/10;
		f=(a-100*b-50*c-20*d-10*e)/5;
		g=a%5;
		my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,g);
	}else {
		my_printf("please input a number less than 1000");
	}
	return 0;
}