#define NUM_ITER 1599004

#include <header.h>

int main_bench(){
	int a;
	my_scanf("%d",&a);
	if(a%105==0){
		my_printf("3 5 7");
	}
    else{
		if(a%15==0){
			my_printf("3 5");
		}
		else if(a%21==0){
			my_printf("3 7");
		}
		else if(a%35==0){
			my_printf("5 7");
		}
		else{
			if(a%3==0){
				my_printf("3");
			}
			else if(a%5==0){
				my_printf("5");
			}
			else if(a%7==0){
				my_printf("7");
			}
			else{
				my_printf("n");
			}
		}
		return 0;
	}
}

