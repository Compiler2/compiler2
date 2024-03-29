#define NUM_ITER 48841

#include <header.h>

int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0))
		result = 1;
	 else
		result = 0;
	 return result;	
}
int DiJiTian(int year,int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result += 3;	
		 else if (i == 4 || i ==6 || i == 9 || i==11)
			result += 2;
		 else if(i == 2){
			if(isRunNian(year))
				result += 1;
			else 
				result += 0;
				}
	}
	result += day;	
	return result;	
}
int main_bench()
{
    int a,b,c,d,s=0;
 my_scanf("%d %d %d",&a,&b,&c);
 for(int i=1;i<=(a+399)%400;i++){
      if(isRunNian(i)) 
      s+=2;
      else
      s+=1;  }
      d=s+DiJiTian(a,b,c);
      if(d%7==1)
      my_printf("Mon.");
      if(d%7==2)
      my_printf("Tue.");
      if(d%7==3)
      my_printf("Wed.");
      if(d%7==4)
      my_printf("Thu.");
      if(d%7==5)
      my_printf("Fri.");
      if(d%7==6)
      my_printf("Sat.");
      if(d%7==0)
      my_printf("Sun.");
      return 0; }
 
