#define NUM_ITER 63595

#include <header.h>

int main_bench(){
	int w,i,a[365],c=0;
	my_scanf("%d",&w);
	a[0]=w;
	for(i=0;i<364;i++){
		if(a[i]==7)
			a[i]=0;
		a[i+1]=a[i]+1;
	}
	for(i=0;i<365;i++){
		if(a[i]==5){
			if(i==12){
				my_printf("1\n");
				c++;
			}
			if(i==43){
				my_printf("2\n");
				c++;
			}
			if(i==71){
				my_printf("3\n");
				c++;
			}
			if(i==102){
				my_printf("4\n");
				c++;}
			if(i==132){
				my_printf("5\n");
				c++;}
			if(i==163){
				my_printf("6\n");
				c++;}
			if(i==193){
				my_printf("7\n");
				c++;}
			if(i==224){
				my_printf("8\n");
				c++;}
			if(i==255){
				my_printf("9\n");
				c++;}
			if(i==285){
				my_printf("10\n");
				c++;}
			if(i==316){
				my_printf("11\n");
				c++;}
			if(i==346){
				my_printf("12\n");
				c++;}
		}
	}
	return 0;
}
