#define NUM_ITER 1245532

#include <header.h>

int main_bench(){
	int m;
	my_scanf("%d\n",&m);
	if(m/100>0){
		my_printf("%d\n",m/100);
		m=m%100;
	}
	else{
		my_printf("0\n");
		m=m%100;
	}
	if(m/50>0){
		my_printf("%d\n",m/50);
		m=m-50;
	}
	else{
		my_printf("%d\n",0);
	}
	if(m/20>0){
		my_printf("%d\n",m/20);
		m=m-20*(m/20);
	}
	else{
		my_printf("0\n");
	}
	if(m/10>0){
		my_printf("%d\n",m/10);
		m=m-10*(m/10);
	}
	else{
		my_printf("0\n");
	}
	if(m/5>0){
		my_printf("%d\n",m/5);
		m=m-5;
	}
	else{
		my_printf("0\n");
	}
	if(m>0){
		my_printf("%d\n",m);
	}
	else{
		my_printf("0\n");
	}
return 0;
}