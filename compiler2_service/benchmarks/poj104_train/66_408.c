#define NUM_ITER 178247

#include <header.h>

int isRunNian(int year)
{
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
int DiJiTian(int year, int month, int day)
{
	int result = 0,i;
	for(i = 1; i < month; i++){ 	
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
int main_bench()
{
    int year,month,day,days,weekday;	
    my_scanf("%d%d%d",&year,&month,&day);
    days=(year-1)*(365%7)+(year-1)/400+(year-1)/4-(year-1)/100;
    days+=DiJiTian(year,month,day);
    weekday=days%7;
    switch(weekday)
    {
                   case 0:
                         my_printf("Sun.");
                         break;
                   case 1:
                         my_printf("Mon.");
                         break;
                   case 2:
                         my_printf("Tue.");
                         break;
                   case 3:
                         my_printf("Wed.");
                         break;
                   case 4:
                         my_printf("Thu.");
                         break;
                   case 5:
                         my_printf("Fri.");
                         break;
                   case 6:
                         my_printf("Sat.");
                         break;
    }
    return 0;
}
    