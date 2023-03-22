#define NUM_ITER 1912020

#include <header.h>

int main_bench()
{
    int x,a,b,c;
    my_scanf("%d",&x);
	a=x%3;
	b=x%5;
	c=x%7;
	if(a==0&&b==0&&c==0){
		my_printf("3 5 7");
	}else if(a==0&&b==0&&c!=0){
		my_printf("3 5");
	}else if(a==0&&b!=0&&c==0){
		my_printf("3 7");
	}else if(a!=0&&b==0&&c==0){
		my_printf("5 7");
	}else if(a!=0&&b!=0&&c==0){
		my_printf("7");
	}else if(a!=0&&b==0&&c!=0){
        my_printf("5");
    }else if(a==0&&b!=0&&c!=0){
		my_printf("3");
    }else{
		my_printf("n");
	}
	return 0;
}