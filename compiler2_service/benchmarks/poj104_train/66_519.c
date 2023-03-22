#include <header.h>



int DiJiTian(int year, int month, int day);
int main_bench(){
	int y,m,d;
	int k,j;
	
	my_scanf("%d %d %d",&y,&m,&d);

	j=y-1;

    k= DiJiTian(y,m,d) +j+j/400+j/4-j/100;
    m=(k%7);
	if(m==0){
		my_printf("Sun.\n");
	}
	else if(m==1){
		my_printf("Mon.\n");
	}
	else if(m==2){
		my_printf("Tue.\n");
	}
	else if(m==3){
		my_printf("Wed.\n");
	}
	else if(m==4){
		my_printf("Thu.\n");
	}
	else if(m==5){
		my_printf("Fri.\n");
	}
	else {
		my_printf("Sat.\n");
	}
    
	
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
			if(year%400 == 0 ||(year%4==0 && year%100!=0)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;
	return result;	
}
