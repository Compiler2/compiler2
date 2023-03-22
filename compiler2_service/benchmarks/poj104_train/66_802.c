#include <header.h>

int main_bench(){
    int year,month,day;
    int i,s,sum=0;
    my_scanf("%d %d %d",&year,&month,&day);
    s=(year-1)%400+1;
    for(i=1;i<s;i++){
        if(i%4!=0||(i%100==0&&i%400!=0)){
            sum++;
        }
        else if((i%4==0&&i%100!=0)||i%400==0){
            sum+=2;
        }
    }
    for(i=1;i<month;i++){
        if(i==1||i==3||i==5||i==7||i==8||i==10){
            sum+=3;
        }
        else if(i==4||i==6||i==9||i==11){
            sum+=2;
        }
        else if(i==2&&(year%4!=0||(year%100==0&&year%400!=0))){
            sum+=0;
        }
        else if(i==2&&(year%4==0&&year%100!=0)||year%400==0){
            sum+=1;
        }
    }
    sum += day;
	if(sum%7==1){
		my_printf("Mon.\n");
	}
	if(sum%7==2){
		my_printf("Tue.\n");
	}
	if(sum%7==3){
		my_printf("Wed.\n");
	}
	if(sum%7==4){
		my_printf("Thu.\n");
	}
	if(sum%7==5){
		my_printf("Fri.\n");
	}
	if(sum%7==6){
		my_printf("Sat.\n");
	}
	if(sum%7==0){
		my_printf("Sun.\n");
	}
	return 0;
}
