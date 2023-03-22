#include <header.h>

int main_bench()
{
  unsigned week,year;
  int month,day,x,days=0;
  my_scanf("%d %d %d",&year,&month,&day);

  if((year%4==0&&year%100!=0)||(year%400==0))
  switch(month)
  {
  case 1:days=days+day;break;
  case 2:days=days+31+day;break;
  case 3:days=days+60+day;break;
  case 4:days=days+91+day;break;
  case 5:days=days+121+day;break;
  case 6:days=days+152+day;break;
  case 7:days=days+182+day;break;
  case 8:days=days+213+day;break;
  case 9:days=days+244+day;break;
  case 10:days=days+274+day;break;
  case 11:days=days+305+day;break;
  case 12:days=days+335+day;break;
  }

  else
  switch(month)
  {
  case 1:days=days+day;break;
  case 2:days=days+31+day;break;
  case 3:days=days+59+day;break;
  case 4:days=days+90+day;break;
  case 5:days=days+120+day;break;
  case 6:days=days+151+day;break;
  case 7:days=days+181+day;break;
  case 8:days=days+212+day;break;
  case 9:days=days+243+day;break;
  case 10:days=days+273+day;break;
  case 11:days=days+304+day;break;
  case 12:days=days+334+day;break;
  }

  week=(year-1)+(year-1)/4- (year-1)/100 +(year-1)/400+days;

 x=week%7;
 switch(x)
 {
 case 0:my_printf("Sun.\n");break;
 case 1:my_printf("Mon.\n");break;
 case 2:my_printf("Tue.\n");break;
 case 3:my_printf("Wed.\n");break;
 case 4:my_printf("Thu.\n");break;
 case 5:my_printf("Fri.\n");break;
 case 6:my_printf("Sat.\n");break;
 }


}