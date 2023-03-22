#define NUM_ITER 190979

#include <header.h>

int main_bench(){
  int year,month,day,days;
  int a,b=0,c=0,d;
  my_scanf("%d%d%d",&year,&month,&day);
  a=year-1;
  days=a+a/4-a/100+a/400;
  for(int i=1;i<month;i++){
  if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
    b+=3;}
  else if(i==4||i==6||i==9||i==11){
  b+=2;}
  else if(i==2){
    if(year%4==0&&year%100!=0||year%400==0){
      b+=1;}
  
}}d=(days+b+day)%7;
  if(d==0){my_printf("Sun.");}
else if(d==1){my_printf("Mon.");}
else if(d==2){my_printf("Tue.");}
else if(d==3){my_printf("Wed.");}
else if(d==4){my_printf("Thu.");}
else if(d==5){my_printf("Fri.");}
else if(d==6){my_printf("Sat.");}
    

 return 0;
}