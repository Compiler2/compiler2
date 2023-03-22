#define NUM_ITER 66852

#include <header.h>

int main_bench(){
	int DiJiTian(int year, int month, int day); 	 
	int isRunNian(int year);
	int a,b,c;
	int days=0,i,n;
    my_scanf("%d%d%d",&a,&b,&c);
	a%=2800;
	for(i=1;i<a;i++){
		if(isRunNian(i)){
			days+=2;
		}else{
			days+=1;
		}
	}
	days+=DiJiTian(a,b,c);
	n=(days%7);
    if(n==1){
			my_printf("Mon.");
	}
	else if(n==2){
			my_printf("Tue.");
	}
	else if(n==3){
			my_printf("Wed.");
	}
	else if(n==4){
			my_printf("Thu.");
	}
	else if(n==5){
			my_printf("Fri.");
	}
	else if(n==6){
			my_printf("Sat.");
	}
	else if(n==0){
			my_printf("Sun.");
	}
	return 0;
}
    int isRunNian(int year){
	if(year%400 == 0 ||(year%4==0 && year%100!=0))
		return 1;
	else
		return 0;	
}
	int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	         
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(isRunNian(year)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;	
	return result;	
}
