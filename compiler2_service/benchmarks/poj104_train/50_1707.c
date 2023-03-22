#define NUM_ITER 965996

#include <header.h>


int main_bench(){
	int w,i,r,a;

	my_scanf("%d",&w);
	if(w>=1&&w<=5){
			r=5-w;
	}else{
			r=12-w;
	}
	a=12;
	for(i=1;i<=12;i++){
		if(i==3){
			a=a+28;
		}else if(i==5||i==7||i==10||i==12){
			a=a+30;
		}else if(i==1){
			a=a;
		}else{
			a+=31;
		}
		if(a%7==r){
			my_printf("%d\n",i);
		}

		
		
		
	
	}

	
	return 0;
}