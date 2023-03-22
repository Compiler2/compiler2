#define NUM_ITER 67172

#include <header.h>

int main_bench(){
	int a,b,c,i,j,p=0;
	my_scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<b;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			p+=31;
		}else if(i==4||i==6||i==9||i==11){
			p+=30;
		}else if(i==2){
			if(a%400==0||(a%4==0&&a%100!=0)){
				p+=29;
			}else{
				p+=28;
			}
		}
	}
	if(a>2000){
		a%=2000;
	}
	for(j=1;j<a;j++){
		if(j%400==0||(j%4==0&&j%100!=0)){
			p+=2;
		}else{
			p+=1;
		}
	}
	p+=c;
	if(p%7==1){
		my_printf("Mon.");
	}else if(p%7==2){
		my_printf("Tue.");
	}else if(p%7==3){
		my_printf("Wed.");
	}else if(p%7==4){
		my_printf("Thu.");
	}else if(p%7==5){
		my_printf("Fri.");
	}else if(p%7==6){
		my_printf("Sat.");
	}else{
		my_printf("Sun.");
	}
	return 0;
}


