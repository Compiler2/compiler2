#define NUM_ITER 906263

#include <header.h>


int main_bench(){
	int i,w,date=12,pd,d;
	my_scanf("%d",&w);
	int yf[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(w==7){
		my_printf("1\n");
	}
	for(i=0;i<11;i++){
		date+=yf[i];
		pd=date%7;
		if(w+pd<=7){
			if(w+pd==5){
				my_printf("%d\n",i+2);
			}
		}
		else{
			d=w+pd-7;
			if(d==5){
				my_printf("%d\n",i+2);
			}
		}
	}
	

	return 0;
}
