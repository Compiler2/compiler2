#define NUM_ITER 1922036

#include <header.h>


int main_bench(){
	int a;
	int f = 1;
	my_scanf("%d",&a);
	if(a%3==0){
		my_printf("3");
		f=0;
	}
	if(a%5==0){
		if(!f){my_printf(" ");}
		my_printf("5");
		f=0;
	}
	if(a%7==0){
		if(!f){my_printf(" ");}
		my_printf("7");
		f=0;
	}
	if(f){
		my_printf("n");
	}
	my_printf("\n");
	return 0;
}