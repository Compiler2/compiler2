#define NUM_ITER 693194

#include <header.h>


int main_bench()
{
    int a;
	my_scanf("%d",&a);
	if (a%3==0 && a%5==0 && a%7==0){
		my_printf("3 5 7\n");
	}
	else if(a%3==0 && a%5==0 && a%7==1 | a%7==2 | a%7==3  | a%7==4 | a%7==5 | a%7==6){
		my_printf("3 5\n");
	}
	else if(a%3==0 && a%5==1 | a%5==2 | a%5==3 | a%5==4 && a%7==0){
		my_printf("3 7\n");
	}
	else if (a%3==1 | a%3==2 && a%5==0 && a%7==0){
		my_printf("5 7\n");
	}
	else if (a%3==1 | a%3==2 && a%5==1 | a%5==2 | a%5==3 | a%5==4 && a%7==0){
		my_printf("7\n");
	}
	else if(a%3==1 | a%3==2 && a%5==0 && a%7==1 | a%7==2 | a%7==3  | a%7==4 | a%7==5 | a%7==6){
		my_printf("5\n");
	}
	else if(a%3==0 && a%5==1 | a%5==2 | a%5==3 | a%5==4 && a%7==1 | a%7==2 | a%7==3  | a%7==4 | a%7==5 | a%7==6){
		my_printf("3\n");
	}
	else{
		my_printf("n\n");
	}

	return 0;
}