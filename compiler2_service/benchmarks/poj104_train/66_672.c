#include <header.h>

int main_bench()
{
    int year,month,day;
    int i,days=0,n,m;
    my_scanf("%d%d%d",&year,&month,&day);
    m=(year-1)%400+1;
    for(i=1;i<m;i++)
    {
         if((i%4==0&&i%100!=0)||i%400==0)
          days += 2;
         else 
         days ++;
    }
    for(i=1;i<month;i++)
    {
         if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
         days += 3;
         else if(i==4||i==6||i==9||i==11)
         days += 2;
         else if(i==2)
         {
              if((year%4==0&&year%100!=0)||year%400==0)
              days += 1;
              else 
              days += 0;
         }
    }
    days += day;
      n = days%7;
    if(n==0)
         my_printf("Sun.");
         else if(n==1)
         my_printf("Mon.");
         else if(n==2)
         my_printf("Tue.");
         else if(n==3)
         my_printf("Wed.");
         else if(n==4)
         my_printf("Thu.");
         else if(n==5)
         my_printf("Fri.");
         else
         my_printf("Sat.");             	
         return 0;
}