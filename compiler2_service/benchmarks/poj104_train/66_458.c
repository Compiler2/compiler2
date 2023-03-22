#define NUM_ITER 207681

#include <header.h>

int main_bench(){
	int year,mouth,day,k,sum=0;
	my_scanf("%d%d%d",&year,&mouth,&day);
	sum=(year-1)%7+year/4-year/100+year/400;
			for(k=1;k<mouth;k++){
				if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)
					sum+=3;
					if(k==4||k==6||k==9||k==11)
						sum+=2;}	
				if((year%400==0||(year%4==0&&year%100!=0))&&(mouth<=2)){
					sum--;}
			sum+=day;
			if(sum%7==0){
				my_printf("Sun.");
			}if(sum%7==1){
				my_printf("Mon.");
			}if(sum%7==2){
				my_printf("Tue.");
			}if(sum%7==3){
				my_printf("Wed.");
			}if(sum%7==4){
				my_printf("Thu.");
			}if(sum%7==5){
				my_printf("Fri.");
			}if(sum%7==6){
				my_printf("Sat.");
}return 0;}		

		