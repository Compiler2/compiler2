#define NUM_ITER 1575671

#include <header.h>

int main_bench()
{
	int x;
	my_scanf("%d",&x);
	if(x%3==0){
		my_printf("3");
	}
	if(x%5==0){
		if(x%3==0){
			my_printf(" 5");
		}else {
			my_printf("5");
		}
	}
	if(x%7==0){
		if(x%5==0||x%3==0){
			my_printf(" 7");
		}else {
			my_printf("7");
		}
	}
	if(x%3!=0&&x%5!=0&&x%7!=0){
		my_printf("n");
	}
	return 0;
}