#define NUM_ITER 1612941

#include <header.h>


int main_bench(){
	int a;
	my_scanf("%d", &a);
	if (a<10) {
		my_printf("%d\n", a);
	} else if (a<100) {
		int b,c;
		b=a%10;
		c=(a-b)/10;
		my_printf("%02d\n", 10*b+c);
	} else if (a<1000) {
		int d, e,f;
		d=a%10;
		e=a%100;
		e=(e-d)/10;
		f=(a-d-10*e)/100;
		my_printf("%03d\n", 100*d+10*e+f);
	} else if (a<10000) {
		int g, h, i, j;
		g=a%10;
		h=a%100;
		h=(h-g)/10;
		i=a%1000;
		i=(i-10*h-g)/100;
		j=(a-100*i-10*h-g)/1000;
		my_printf("%04d\n", 1000*g+100*h+10*i+j);
	}
	return 0;
}

