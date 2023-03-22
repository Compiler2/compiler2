#define NUM_ITER 1987761

#include <header.h>

int main_bench()
{
	int x;
    my_scanf("%d", &x);
    int a=x%3,b=x%5,c=x%7;
	
	if(a==0&&b==0&&c==0){
	my_printf("3 5 7");
	} 
	if(a==0&&b==0&&c!=0){
	my_printf("3 5");	
	} 
    if(a==0&&b!=0&&c==0){
		my_printf("3 7");
	}
	if(a!=0&&b==0&&c==0){
		my_printf("5 7");
	}
	if(a!=0&&b!=0&&c!=0){
		my_printf("n");
	}
	if(a==0&&b!=0&&c!=0){
		my_printf("3");
	}
	if(a!=0&&b==0&&c!=0){
		my_printf("5");
	}
	if(a!=0&&b!=0&&c==0){
		my_printf("7");
	}
	

	return 0;
}

