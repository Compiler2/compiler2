#define NUM_ITER 1464014

#include <header.h>

int main_bench(){
	int n;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	my_scanf("%d",&n);
	if(n>=100){
        a=(n-n%100)/100;
	    n=n%100;
	}
	if(n>=50){
		b=(n-n%50)/50;
		n=n%50;
	}
	if(n>=20){
		c=(n-n%20)/20;
		n=n%20;
	}
	if(n>=10){
		d=(n-n%10)/10;
		n=n%10;
	}
	if(n>=5){
		e=(n-n%5)/5;
		n=n%5;
	}
	f=n;
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}