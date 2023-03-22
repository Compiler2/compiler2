#define NUM_ITER 1692892

#include <header.h>

int main_bench()
{   
	int a;
	my_scanf("%d",&a);
    if(a%3==0){
		my_printf("3");
	    for (int i=5;i<8;i+=2){
		if(a%i==0){
			my_printf(" %d",i);
		}
		}
	}else {
		if(a%5==0 && a%7==0){
			my_printf("5 7");
		}else if(a%5==0 && a%7!=0){
			my_printf("5");
		}else if(a%5!=0 && a%7==0){
			my_printf("7");
		}else{
			my_printf("n");
		}
	}
	return 0;
}