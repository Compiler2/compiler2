#define NUM_ITER 858819

#include <header.h>

int main_bench()
{
	int money;my_scanf("%d", &money);
	int m1=0, m2=0, m3=0, m4=0, m5=0, m6=0;
	m1=money/100;
	if(money%100 != 0){
		m2=(money%100)/50;
	}
	if(money%100%50 != 0){
	m3=money%100%50/20;
	}
	if(money%100%50%20 != 0){
		m4=money%100%50%20/10;
	}
	if(money%100%50%20%10 != 0){
		m5=money%100%50%20%10/5;
	}
	if(money%100%50%20%10%5 != 0){
		m6=money%100%50%20%10%5;
	}
	my_printf("%d\n", m1);
	my_printf("%d\n", m2);
	my_printf("%d\n", m3);
	my_printf("%d\n", m4);
	my_printf("%d\n", m5);
	my_printf("%d\n", m6);
	return 0;
}