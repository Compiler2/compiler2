#define NUM_ITER 1566560

#include <header.h>

int main_bench(){
	int num, leap_1=0 , leap_2=0 ,leap_3=0;
	my_scanf("%d", &num);
	if (num%3== 0){
		leap_1=1;
	}
    if (num%5== 0){
		leap_2=1;
	}
    if (num%7== 0){
		leap_3=1;
	}
	if (leap_1 * leap_2 * leap_3 == 1){
		my_printf("3 5 7");
	}
	else if (leap_1 * leap_2 == 1){
		my_printf("3 5");
	}
	else if (leap_1 * leap_3 == 1){
		my_printf("3 7");
	}
	else if (leap_2 * leap_3 == 1){
		my_printf("5 7");
	}
	else if (leap_1 == 1){
		my_printf("3");
	}
	else if (leap_2 == 1){
		my_printf("5");
	}
	else if (leap_3 == 1){
		my_printf("7");
	}
	else {
		my_printf("n");
	}
	return 0;
}