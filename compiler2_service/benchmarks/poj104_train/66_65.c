#include <header.h>

int main_bench(){
 int year,month,day,i,a;
 long long total,sum;
 int N[12]={31,28,31,30,31,30,31,31,30,31,30,31};
          my_scanf("%d %d %d",&year,&month,&day);          
         a=year-1;
         total=(long long)a*365+a/4+a/400-a/100;     
         
    sum=0;
 for(i=1;i<month;i++){
  sum=sum+N[i-1];}
    if(((year%4==0&&year%100!=0)||year%400==0)&&month>=3)
         sum=sum+1;
 sum=sum+day+total-1;
 
       if(sum%7==0)my_printf("Mon.");
    else if(sum%7==1)my_printf("Tue.");
    else if(sum%7==2)my_printf("Wed.");
    else if(sum%7==3)my_printf("Thu.");
    else if(sum%7==4)my_printf("Fri.");
    else if(sum%7==5)my_printf("Sat."); 
else if(sum%7==6)my_printf("Sun.");
return 0;
}