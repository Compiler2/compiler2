#define NUM_ITER 1827275

#include <header.h>

int main_bench(){
	int sum,n=0;
	my_scanf("%d",&sum);
	while(sum>=100){
		n++;
		sum-=100;
	}
	my_printf("%d\n",n);
	n=0;
    while(sum>=50){
		n++;
		sum-=50;
	}
	my_printf("%d\n",n);
	n=0;
    while(sum>=20){
		n++;
		sum-=20;
	}
	my_printf("%d\n",n);
	n=0;
	while(sum>=10){
		n++;
		sum-=10;
	}
	my_printf("%d\n",n);
	n=0;
    while(sum>=5){
		n++;
		sum-=5;
	}
	my_printf("%d\n",n);
	n=0;
    while(sum>=1){
		n++;
		sum-=1;
	}
	my_printf("%d\n",n);
	return 0;
}