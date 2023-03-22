#define NUM_ITER 506812

#include <header.h>

int main_bench()
{
 unsigned long  year,month,day,i,n,a,b,total,c;
 unsigned long  s[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 my_scanf("%d %d %d",&year,&month,&day);
 n=(year-1)/4-(year-1)/100+(year-1)/400;
 if((year%4==0&&year%100!=0)||year%400==0)
  s[2]=29;
    b=0;
 for(a=1;a<month;a++)
  b=b+s[a];
 total=year-1+n+b+day;
 c=total%7;
switch (c)
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