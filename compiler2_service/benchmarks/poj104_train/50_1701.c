#define NUM_ITER 618963

#include <header.h>

int main_bench(){
	int w,m;
	my_scanf("%d",&w);
	for(m=1;m<=12;m++){
		if(m==1||
		   m==3||
		   m==5||
		   m==7||
		   m==8||
		   m==10||
		   m==12){
	    	if((w+12)%7==5){
	    		my_printf("%d\n",m);
	    	}
	    	w=(w+31)%7;
		}
		if(m==4||
		   m==6||
		   m==9||
		   m==11){
			if((w+12)%7==5){
				my_printf("%d\n",m);
			}
			w=(w+30)%7;
	    }
		if(m==2){
			if((w+12)%7==5){
				my_printf("%d\n",m);
			}
			w=(w+28)%7;
		}
	}
	return 0;
}