#define NUM_ITER 68177

#include <header.h>

int main_bench()
{
int year, month,day;
int i,sum=0;
my_scanf("%d%d%d",&year,&month,&day);
year=(year-1)%400+1;
for(i=1;i<year;i++)
{if(i%4==0&&i%100!=0||i%400==0){sum+=2;}
else {sum+=1;}}
for(i=1; i<month; i++)
if(i==1||i==3||i==5||i==7||i==8||i==10){sum+=3;}
else if(i==4||i==6||i==9||i==11){sum+=2;}
else if(i==2&&(year%4==0&&i%100!=0||i%400==0)){sum+=1;}
for(i=1; i<=day;i++){sum++;}
if(sum%7==0){my_printf("Sun.");}
else if(sum%7==1){my_printf("Mon.");}
else if(sum%7==2){my_printf("Tue.");}
else if(sum%7==3){my_printf("Wed.");}
else if(sum%7==4){my_printf("Thu.");}
else if(sum%7==5){my_printf("Fri.");}
else if(sum%7==6){my_printf("Sat.");}
return 0;
}