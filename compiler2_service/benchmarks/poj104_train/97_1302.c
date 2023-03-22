#define NUM_ITER 1644863

#include <header.h>

int main_bench(){
	int a=0,b=0,c=0,d=0,e=0,f=0,n;
	my_scanf("%d",&n);
	if(n>=100){
		a=n/100;}
	else{a=0;}
	if((n-a*100)>=50){
		b=(n-a*100)/50;}
	else{b=0;}
	if((n-a*100-50*b)>=20){
		c=(n-a*100-50*b)/20;}
	else{c=0;}
	if((n-a*100-50*b-20*c)>=10){
		d=(n-a*100-50*b-20*c)/10;}
	else{d=0;}
	if((n-a*100-50*b-20*c-10*d)>=5){
		e=(n-a*100-50*b-20*c-10*d)/5;}
	else{e=0;}
	if((n-a*100-50*b-20*c-10*d-5*e)>0){
		f=n-a*100-50*b-20*c-10*d-5*e;}
	else{f=0;}
	my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;

}
