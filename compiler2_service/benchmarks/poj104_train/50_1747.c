#define NUM_ITER 943597

#include <header.h>

int main_bench(){
	int w,i;
	my_scanf("%d",&w);
	for(i=1;i<=12;i++){
		if(i==1){
			w=w+5;
			if(w>7){
				w=w-7;
			}
			if(w==5){
				my_printf("%d\n",i);
			}
		}else if(i==2||i==4||i==6||i==8||i==9||i==11){
			w=w+3;
			if(w>7){
				w=w-7;
			}
			if(w==5){
				my_printf("%d\n",i);
			}
		}else if(i==3){
			if(w==5){
				my_printf("%d\n",i);
			}
		}else{
			w=w+2;
			if(w>7){
				w=w-7;
			}
			if(w==5){
				my_printf("%d\n",i);
			}
		}
	}
		return 0;
}
