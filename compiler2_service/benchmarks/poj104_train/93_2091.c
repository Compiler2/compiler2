#define NUM_ITER 1898817

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g;
	my_scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	e=b-0;
	f=c-0;
	g=d-0;
	if(e==0&&f==0&&g>0){
		my_printf("3 5");
	}else if(e==0&&g==0&&f>0){
		my_printf("3 7");
	}else if(f==0&&g==0&&e>0){
		my_printf("5 7");
	}else if(e==0&&g>0&&f>0){
		my_printf("3");
	}else if(f==0&&g>0&&e>0){
		my_printf("5");
	}else if(g==0&&e>0&&f>0){
		my_printf("7");
	}else if(g>0&&e>0&&f>0){
		my_printf("n");
	}else if(e==0&&g==0&&f==0){
		my_printf("3 5 7");
	}
	return 0;
}